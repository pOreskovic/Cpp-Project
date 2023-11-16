//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dbAdmin.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TadminPage *adminPage;
//---------------------------------------------------------------------------
__fastcall TadminPage::TadminPage(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TadminPage::dbChosenCBChange(TObject *Sender)
{
	//onchange -> switch database
    adminSql->Active = false;
	adminSql->SQL->Clear();
	if(dbChosenCB->ItemIndex == 0){
		adminSql->SQL->Add("SELECT id,username,firstName,lastName,email,admin FROM noxianconnect.users");
		adminSql->Open();
		adminSql->Active = true;
	}else{
		adminSql->SQL->Add("SELECT * FROM noxianconnect.champions");
		adminSql->Open();
		adminSql->Active = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TadminPage::FormShow(TObject *Sender)
{
	//onshow -> load database
	adminSql->Active = false;
	adminSql->SQL->Clear();
	dbChosenCB->ItemIndex = 0;


	adminSql->SQL->Add("SELECT id,username,firstName,lastName,email,admin FROM noxianconnect.users");
	adminSql->Open();
	adminSql->Active = true;

}
//---------------------------------------------------------------------------
