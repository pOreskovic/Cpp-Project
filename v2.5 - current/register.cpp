﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "register.h"
#include "Login.h"
#include "extraClasses.h"
#include "statclib.h"
#include "translationHeader.h"
#include "CountryInfoService.h"
#include <idsslopenssl.hpp> //sha2 (secure hash algoritam)
#include <idhashsha.hpp>
#include <vector>
#include <memory>
#include <Registry.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TregisterPage *registerPage;
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
__fastcall TregisterPage::TregisterPage(TComponent* Owner)
	: TForm(Owner)
{
	translation["nameL"] = {
		{
			{"EN", "First Name"},
			{"HR", "Ime"}
		}
	};
	translation["surnameL"] = {
		{
			{"EN", "Last Name"},
			{"HR", "Prezime"}
		}
	};
	translation["setUnameL"] = {
		{
			{"EN", "Username"},
			{"HR", "Korisničko ime"}
		}
	};
	translation["passL"] = {
		{
			{"EN", "Password"},
			{"HR", "Lozinka"}
		}
	};
	translation["emailL"] = {
		{
			{"EN", "E-mail"},
			{"HR", "E-adresa"}
		}
	};
	translation["registerMeBTN"] = {
		{
			{"EN", "Sing Me Up!"},
			{"HR", "Registriraj me!"}
		}
	};
	translation["registerTitle"] = {
		{
			{"EN", "Create a new profile"},
			{"HR", "Stvaranje novog profila"}
		}
	};
	translation["serverL"] = {
		{
			{"EN", "Select Server / Continent"},
			{"HR", "Odaberite Server / Kontinent"}
		}
	};
}
//---------------------------------------------------------------------------
void __fastcall TregisterPage::FormClose(TObject *Sender, TCloseAction &Action)
{
    loginPage->Show();
}
//---------------------------------------------------------------------------

void __fastcall TregisterPage::FormShow(TObject *Sender)
{
    TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
	String lang = ini->ReadString("Language", "Selected", "EN");

	if (lang == "HR")
		translateForm(this, "HR", translation);
	else
		translateForm(this, "EN", translation);

	//loadaj kontinente
	_di_CountryInfoServiceSoapType soapService = GetCountryInfoServiceSoapType();
	for (int i = 0; i < 6; i++){
		if(soapService->ListOfContinentsByName()[i]->sName != "Antarctica")
   			serverCB->Items->Add(soapService->ListOfContinentsByName()[i]->sName);
	}
}
//---------------------------------------------------------------------------


void __fastcall TregisterPage::registerMeBTNClick(TObject *Sender)
{
	//check if everything is filled
	if(nameTE->Text.Length() < 1){
		ShowMessage("Neispravan unos polja ime");
		return;
	}
	if(surnameTE->Text.Length() < 1){
		ShowMessage("Neispravan unos polja prezime");
		return;
	}
	if(emailTE->Text.Length() < 1){
		ShowMessage("Neispravan unos polja e-adresa");
		return;
	}
	if(setUnameTE->Text.Length() < 1){
		ShowMessage("Neispravan unos polja korisničko ime");
		return;
	}
	if(setPassTE->Text.Length() < 1){
		ShowMessage("Neispravan unos polja lozinka");
		return;
	}
	if(serverCB->ItemIndex < 0){
		ShowMessage("Server not selected!");
        return;
	}

    //if everything is okay, register user

	korisnik noviKorisnik(setUnameTE->Text,setPassTE->Text);
	noviKorisnik.posoliLozinku();
	noviKorisnik.hashirajLozinku();

	//adresa servera i spajanje
	client->Host = "192.168.31.224";
	client->Connect();

	//slanje
	client->Socket->WriteLn(noviKorisnik.korisnickoIme);
	client->Socket->WriteLn(noviKorisnik.lozinka);
	client->Socket->WriteLn(nameTE->Text);
	client->Socket->WriteLn(surnameTE->Text);
	client->Socket->WriteLn(emailTE->Text);
	client->Socket->WriteLn(serverCB->Items->Strings[serverCB->ItemIndex]);


	//cekanje odgovora
	String response = client->Socket->ReadLn();
	if(response == "OK"){
		ShowMessage("You Registered Successfully!\nYou Can Now Sign In!");
        setUnameTE->Text = "";
		setPassTE->Text = "";
		nameTE->Text = "";
		surnameTE->Text = "";
		emailTE->Text = "";
        registerPage->Close();
	}else ShowMessage("Registration Failed!\nTry Again Later..");

	client->Disconnect();
}
//---------------------------------------------------------------------------
