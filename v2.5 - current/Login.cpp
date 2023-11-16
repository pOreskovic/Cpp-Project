//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#include <vector>
#pragma hdrstop

#include "Login.h"
#include "register.h"
#include "extraClasses.h"
#include "bugReport.h"
#include "main.h"
#include "CountryInfoService.h"
#include "translationHeader.h"
#include <idsslopenssl.hpp> //sha2 (secure hash algoritam)
#include <idhashsha.hpp>
#include <Registry.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TloginPage *loginPage;
//---------------------------------------------------------------------------
	void addItemsC(TComboBox* box, std::vector<String> v);
    std::vector<String> getColumnStringValues(TFDQuery* table, String columnName);

__fastcall TloginPage::TloginPage(TComponent* Owner)
	: TForm(Owner)
{
	translation["loginBTN"] = {
		{
			{"EN", "Log In"},
			{"HR", "Prijava"}
		}
	};
	translation["registerBTN"] = {
		{
			{"EN", "Register"},
			{"HR", "Registracija"}
		}
	};
	translation["naslovLogin"] = {
		{
			{"EN", "Welcome to the Noxian Connect App!"},
			{"HR", "Dobrodošli na aplikaciju Noxian Connect!"}
		}
	};
	translation["unameL"] = {
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
    translation["accL"] = {
		{
			{"EN", "First time here? Create an account!"},
			{"HR", "Prvi put ste ovdje? Stvorite račun!"}
		}
	};
}
//---------------------------------------------------------------------------
void __fastcall TloginPage::croClick(TObject *Sender)
{
	translateForm(this, "HR", translation);
	//jezik = "hrv";
	TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
	ini->WriteString("Language", "Selected", "HR");
}
//---------------------------------------------------------------------------
void __fastcall TloginPage::engClick(TObject *Sender)
{
	translateForm(this, "EN", translation);
	//jezik = "eng";
	TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
	ini->WriteString("Language", "Selected", "EN");
}
//---------------------------------------------------------------------------
void __fastcall TloginPage::registerBTNClick(TObject *Sender)
{
	//Register Button
	registerPage->Show();
    loginPage->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TloginPage::loginBTNClick(TObject *Sender)
{
    //Login Button
  //spajanje na bazu, nadi u tablici red sa zadanim usernameom i provjeri pass

        login_NoxConDB->Connected = true;
		String user = usernameTE->Text;
		UnicodeString sql = "SELECT * FROM noxianconnect.users WHERE username = '"
							+ user + "';";
		getUser->SQL->Clear();
		getUser->SQL->Add(sql);
		getUser->Active = true;
		getUser->Open();

		//postavljanje sha da bi usporedili lozinke!
		Idsslopenssl::LoadOpenSSLLibrary();
		TIdHashSHA256 * sha = new TIdHashSHA256;
		String enteredPass = passwordTE->Text;
		String salt = "letMeAddSaltTo" + getUser->FieldByName("username")->Text;   //sol
		String saltedPass = sha->HashStringAsHex(enteredPass+salt);

		//provjera usera
		if(getUser->FieldByName("username")->Text == user){
			//moguce napraviti funkciju passwordCheck?  stavit u header?
			if (getUser->FieldByName("password")->Text == saltedPass){
				//login uspjesan
				loginPage->Hide();
				mainPage->userID->Text = getUser->FieldByName("id")->Text;
				mainPage->Show();
				mainPage->helloUser->Caption = getUser->FieldByName("firstName")->Text;
				if(getUser->FieldByName("admin")->Text.ToInt() == 1)
					mainPage->adminConfirmed->Visible = True;

			}else ShowMessage("Pogrešna lozinka!");

		}else ShowMessage("Pogrešno korisničko ime!");

		getUser->Active = false;
		login_NoxConDB->Connected = false;
}
//---------------------------------------------------------------------------

void __fastcall TloginPage::FormShow(TObject *Sender)
{

	TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
	String lang = ini->ReadString("Language", "Selected", "EN");

	if (lang == "HR")
		translateForm(this, "HR", translation);
	else
		translateForm(this, "EN", translation);

	usernameTE->SetFocus();

    //load resource image
	HINSTANCE ResourceDLL;
	if((ResourceDLL = LoadLibrary(L"DLLfunctions.dll")) == NULL){
		ShowMessage("Cannot load DLL file! - App Icon Wont Be Displayed");
		return;
	}

	TResourceStream* rs = new TResourceStream((int)ResourceDLL, "LOGO_PNG", RT_RCDATA);
	logo->Picture->LoadFromStream(rs);
	delete rs;
    FreeLibrary(ResourceDLL);
}
//---------------------------------------------------------------------------
