//---------------------------------------------------------------------------

#include <vcl.h>
#include <System.JSON.hpp>
#pragma hdrstop

#include "skins.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportBaseDialog"
#pragma link "frxExportPDF"
#pragma link "frxExportRTF"
#pragma link "gtClasses"
#pragma resource "*.dfm"
TskinsPage *skinsPage;
//---------------------------------------------------------------------------
__fastcall TskinsPage::TskinsPage(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TskinsPage::FormShow(TObject *Sender)
{

	skinsConnection->Connected = true;
	champsTable->Active = true;
	skinsTablee->Active = true;

}
//---------------------------------------------------------------------------
void __fastcall TskinsPage::FormClose(TObject *Sender, TCloseAction &Action)
{
	skinsConnection->Connected = false;
}
//---------------------------------------------------------------------------


void __fastcall TskinsPage::exportPDFClick(TObject *Sender)
{
	skinsReport->PrepareReport();
    skinsReport->Export(pdfExport);
}
//---------------------------------------------------------------------------


void __fastcall TskinsPage::rpMoneyCalcClick(TObject *Sender)
{
	//_di_InoxianSoap noxianSoapService = GetInoxianSoap();
}
//---------------------------------------------------------------------------

