﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "settingsLogs.h"
#include "settings.h"
#include "DLLfunctions.h"
#include "main.h"
#include "statclib.h"
#include <Registry.hpp>
#include <translationHeader.h>
#include <memory>
#include <vector>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TsettingsPage *settingsPage;
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
__fastcall TsettingsPage::TsettingsPage(TComponent* Owner)
	: TForm(Owner)
{
	translation["langBox"] = {
		{
			{"EN", "Choose language"},
			{"HR", "Odaberite jezik"}
		}
	};
	translation["styleBox"] = {
		{
			{"EN", "Choose App Style"},
			{"HR", "Odaberite izgled"}
		}
	};
	translation["croRB"] = {
		{
			{"EN", "Croatian"},
			{"HR", "Hrvatski"}
		}
	};
	translation["engRB"] = {
		{
			{"EN", "English"},
			{"HR", "Engleski"}
		}
	};
	translation["settingsConfirmBTN"] = {
		{
			{"EN", "Confrim settings"},
			{"HR", "Primjeni postavke"}
		}
	};
	translation["wallpaperBox"] = {
		{
			{"EN", "Choose Wallpaper"},
			{"HR", "Odaberite pozadinsku sliku"}
		}
	};
	translation["fontSizeL"] = {
		{
			{"EN", "Font Size"},
			{"HR", "Velicina Fonta"}
		}
	};
	translation["speedL"] = {
		{
			{"EN", "Enter Speed In KB/s"},
			{"HR", "Unesite brzinu u KB/s"}
		}
	};
	translation["setSpeedBTN"] = {
		{
			{"EN", "Set Speed"},
			{"HR", "Ogranici brzinu"}
		}
	};
	translation["startDownload"] = {
		{
			{"EN", "Download"},
			{"HR", "Preuzmi"}
		}
	};
	translation["instructionsL"] = {
		{
			{"EN", "If you want to use Leage of Legends themed Wallpapers, you can download them here! In order to setup wallpapers you need to: 1. Download them, 2. Extract .rar file in app folder, 3. Refresh settings to see the option for wallpaper selection! Enjoy!"},
			{"HR", "Ukoliko zelite koristiti pozadine aplikacije na temu League of Legends, mozete ih preuzeti ovdje! Kako biste ih ukljucili morate: 1. Preuzeti ih, 2. Ekstratirati iz arhive u folder u kojem je smjestena aplikacija, 3. Ponovo uci u postavke i izabrati pozadinu!"}
		}
	};
}
//---------------------------------------------------------------------------
void __fastcall TsettingsPage::settingsConfirmBTNClick(TObject *Sender)
{
	//translate dio
	String Lang;
	if(croRB->Checked == True){
		Lang = "HR";
	}
	else{
		Lang = "EN";
	}


	//style dio
	String style;
	String font = fontCB->Items->Strings[fontCB->ItemIndex];
	String fontSize = fontSizeCB->Items->Strings[fontSizeCB->ItemIndex];

	if(lightBTN->Checked == True)
		style = "lightMode";
	else if(noxBTN->Checked == True)
		style = "darkMode";



	//spremanje u ini datoteku
	TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
	ini->WriteString("Language", "Selected", Lang);
	ini->WriteString("Apperience", "colorMode", style);
	ini->WriteString("Apperience", "font", font);
    ini->WriteString("Apperience", "fontSize", fontSize);


	//primjena postavki jezika
	translateForm(this, Lang, translation);
	translateForm(mainPage, Lang, mainPage->translation);


	//primjena postavki izgleda
	style = ini->ReadString("Apperience", "colorMode", "lightMode");
    if (style == "lightMode"){
		lightBTN->Checked = True;
		Color = clSilver;
		mainPage->Color = clSilver;
		mainPage->hello->Font->Color = clMaroon;
		mainPage->helloUser->Font->Color = clBlack;
		mainPage->champL->Font->Color = clBlack;
		mainPage->kL->Font->Color = clBlack;
		mainPage->dL->Font->Color = clBlack;
		mainPage->aL->Font->Color = clBlack;
	}
	else{
		noxBTN->Checked = True;
		Color = clMaroon;
		mainPage->Color = clMaroon;
		mainPage->Font->Color = clWhite;
		mainPage->hello->Font->Color = clWhite;
		mainPage->helloUser->Font->Color = clBlack;
		mainPage->champL->Font->Color = clWhite;
		mainPage->kL->Font->Color = clWhite;
		mainPage->dL->Font->Color = clWhite;
        mainPage->aL->Font->Color = clWhite;
		langBox->Color = clGray;
		styleBox->Color = clGray;
	}
	delete ini;

	//apply for settings - font
    langBox->Font->Name = font;
	styleBox->Font->Name = font;
	fontBox->Font->Name = font;
	settingsConfirmBTN->Font->Name = font;

	int intSize = fontSize.ToInt();
	//apply for settings - fontSize
	langBox->Font->Size = intSize;
	styleBox->Font->Size = intSize;
	fontBox->Font->Size = intSize;
	settingsConfirmBTN->Font->Size = intSize;
	fontSizeCB->Font->Size = intSize;
    fontCB->Font->Size = intSize;

	//apply for main - font
	mainPage->hello->Font->Name = font;
	mainPage->helloUser->Font->Name = font;
	mainPage->sqlCB->Font->Name = font;
	mainPage->addGameBTN->Font->Name = font;
	mainPage->logoutBTN->Font->Name = font;
	mainPage->builderBTN->Font->Name = font;
	mainPage->newGameBox->Font->Name = font;
	mainPage->champL->Font->Name = font;
	mainPage->kL->Font->Name = font;
	mainPage->dL->Font->Name = font;
	mainPage->aL->Font->Name = font;
	mainPage->wonCB->Font->Name = font;

	mainPage->kdaBox->Font->Name = font;
	mainPage->selectedChamp->Font->Name = font;
	mainPage->kda->Font->Name = font;
	mainPage->globalBox->Font->Name = font;
	mainPage->udpStart->Font->Name = font;
	mainPage->udpOptions->Font->Name = font;
	mainPage->pickRateTE->Font->Name = font;
	mainPage->skinsBTN->Font->Name = font;


	//apply for main - fontSize
	mainPage->hello->Font->Size = intSize + 30;
	mainPage->helloUser->Font->Size = intSize + 30;
	mainPage->sqlCB->Font->Size = intSize;
	mainPage->addGameBTN->Font->Size = intSize;
	mainPage->logoutBTN->Font->Size = intSize;
	mainPage->builderBTN->Font->Size = intSize;
	mainPage->newGameBox->Font->Size = intSize;
	mainPage->champL->Font->Size = intSize;
	mainPage->kL->Font->Size = intSize;
	mainPage->dL->Font->Size = intSize;
	mainPage->aL->Font->Size = intSize;
	mainPage->wonCB->Font->Size = intSize;
	mainPage->kdaBox->Font->Size = intSize;
	mainPage->selectedChamp->Font->Size = intSize;
	mainPage->kda->Font->Size = intSize;
	mainPage->globalBox->Font->Size = intSize;
	mainPage->udpStart->Font->Size = intSize;
	mainPage->udpOptions->Font->Size = intSize;
	mainPage->pickRateTE->Font->Size = intSize;
	mainPage->skinsBTN->Font->Size = intSize;

	if(font == "Broadway")
		mainPage->helloUser->Left = mainPage->hello->Left + mainPage->hello->Width + 15;
	else
		mainPage->helloUser->Left = mainPage->hello->Left + mainPage->hello->Width + 8;

	ShowMessage("SAVED!");

    //wallpaper save
	if(wallpaperBox->Visible == true){
		mainPage->background->Picture->LoadFromFile(".//backgrounds//" + wallpapersCB->Items->Strings[wallpapersCB->ItemIndex] + ".jpg");
		//save to win reg
		TRegistry* reg = new TRegistry;
		reg->RootKey = HKEY_LOCAL_MACHINE;
		UnicodeString mykey = "Software\\NoxianConnect";

		if(reg->KeyExists(mykey))
			if(reg->OpenKey(mykey,true)){
				reg->WriteString("wallpaper",wallpapersCB->Items->Strings[wallpapersCB->ItemIndex]);
				reg->CloseKey();
			}
		delete reg;
	}

	//Write to logs file ----------------------------------------------------
	customFileFormat header;
	settings input(Lang, style, font, intSize);

	std::unique_ptr<TFileStream> logStream(new TFileStream("settingsLogs.cff", fmCreate));
	logStream->Write(&header, sizeof(customFileFormat));
	logStream->Write(&input, sizeof(settings));




}
//---------------------------------------------------------------------------

void __fastcall TsettingsPage::FormShow(TObject *Sender)
{
	TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
	String Lang = ini->ReadString("Language","Selected", "HR");
	String style = ini->ReadString("Apperience", "colorMode", "lightMode");
	String font =  ini->ReadString("Apperience", "font", "Tahoma");
	String fontSize = ini->ReadString("Apperience", "fontSize", "10");

	//provjeri postavku, postavi radioButton na ispravno i prevedi formu
	if (Lang == "HR"){
		croRB->Checked = True;
		translateForm(this, Lang, translation);
	}
	else{
		engRB->Checked = True;
		translateForm(this, Lang, translation);
	}

	if (style == "lightMode"){
		lightBTN->Checked = True;
		Color = clSilver;
	}
	else{
		noxBTN->Checked = True;
		Color = clMaroon;
		langBox->Color = clGray;
		styleBox->Color = clGray;
	}


	// Font Size ComboBox
	for(int i = 0; i < fontSizeCB->Items->Count; i++){
		if(fontSizeCB->Items->Strings[i] == fontSize){
			fontSizeCB->ItemIndex = i;
		}
	}
    // Font ComboBox
	for(int i = 0; i < fontCB->Items->Count; i++){
		if(fontCB->Items->Strings[i] == font){
			fontCB->ItemIndex = i;
		}
	}

	langBox->Font->Name = font;
	styleBox->Font->Name = font;
	fontBox->Font->Name = font;
	settingsConfirmBTN->Font->Name = font;

	try{
		//If package is downloaded and in folder then show setting option for wallpapers
		TFileStream* backgrounds = new TFileStream(".//backgrounds//background1.jpg", fmOpenRead);
		if(backgrounds->Size > 0){
			wallpaperBox->Visible = true;
			for(int i = 0; i < 44; i++){
				String num = i + 1;
				wallpapersCB->Items->Add("background" + num);
			}
		}
		delete backgrounds;
	}catch(const Exception& e){

	}
}
//---------------------------------------------------------------------------

void __fastcall TsettingsPage::hrvImageClick(TObject *Sender)
{
    croRB->Checked = True;
}
//---------------------------------------------------------------------------

void __fastcall TsettingsPage::engImageClick(TObject *Sender)
{
    engRB->Checked = True;
}
//---------------------------------------------------------------------------


void __fastcall TsettingsPage::logBTNClick(TObject *Sender)
{
	logsPage->Show();
}
//---------------------------------------------------------------------------


void __fastcall TsettingsPage::startDownloadClick(TObject *Sender)
{
	progBar->Position = 0;
	TFileStream* fstream = new TFileStream("./backgrounds.rar", fmCreate);
	download->Get("https://www117.zippyshare.com/d/vI2sQCBl/2984/NTP%20projekt.rar", fstream);
	delete fstream;
}
//---------------------------------------------------------------------------



void __fastcall TsettingsPage::downloadWorkBegin(TObject *ASender, TWorkMode AWorkMode,
          __int64 AWorkCountMax)
{
    progBar->Max = AWorkCountMax;
}
//---------------------------------------------------------------------------

void __fastcall TsettingsPage::downloadWork(TObject *ASender, TWorkMode AWorkMode,
          __int64 AWorkCount)
{
	progBar->Position = AWorkCount;
    Application->ProcessMessages();
}
//---------------------------------------------------------------------------

void __fastcall TsettingsPage::downloadWorkEnd(TObject *ASender, TWorkMode AWorkMode)

{
    ShowMessage("Download Completed");
}
//---------------------------------------------------------------------------

void __fastcall TsettingsPage::setSpeedBTNClick(TObject *Sender)
{
    speedLimiter->BitsPerSec = KbytesToBytes(setSpeedTE->Text.ToInt());
}
//---------------------------------------------------------------------------


