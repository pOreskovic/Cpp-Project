//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.DBCtrls.hpp>
#include "frxClass.hpp"
#include "frxExportBaseDialog.hpp"
#include "frxExportPDF.hpp"
#include "frxExportRTF.hpp"
#include "frxDBSet.hpp"
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <map>
//---------------------------------------------------------------------------
class TmainPage : public TForm
{
__published:	// IDE-managed Components
	TLabel *hello;
	TImage *logoMain;
	TImage *settingsImage;
	TButton *addGameBTN;
	TImage *adminImage;
	TDBGrid *mainGrid;
	TFDConnection *mainConnection;
	TFDPhysMySQLDriverLink *mainDriver;
	TFDQuery *mainSql;
	TDataSource *mainDS;
	TImage *adminConfirmed;
	TButton *logoutBTN;
	TButton *builderBTN;
	TGroupBox *newGameBox;
	TEdit *killsTE;
	TEdit *deathsTE;
	TEdit *assistsTE;
	TComboBox *wonCB;
	TComboBox *sqlCB;
	TButton *skinsBTN;
	TLabel *lastEntryValue;
	TFDQuery *newGameSQL;
	TLabel *champL;
	TLabel *kL;
	TLabel *dL;
	TLabel *aL;
	TEdit *userID;
	TLabel *helloUser;
	TLabel *idL;
	TLabel *intro1;
	TCheckBox *helpBox;
	TfrxReport *report;
	TfrxPDFExport *pdfexport;
	TButton *createReport;
	TComboBox *exportType;
	TfrxRTFExport *rtfexport;
	TfrxDBDataset *gamesData;
	TButton *udpStart;
	TIdUDPClient *UDPclient;
	TComboBox *udpOptions;
	TComboBox *champsCB;
	TEdit *selectedChamp;
	TEdit *kda;
	TGroupBox *menuBox;
	TImage *exitAppImage;
	TGroupBox *kdaBox;
	TGroupBox *globalBox;
	TEdit *pickRateTE;
	TLabel *lastEntryL;
	TImage *bugImage;
	TLabel *intro2;
	TLabel *intro3;
	TLabel *intro5;
	TLabel *intro4;
	TLabel *intro6;
	TEdit *filterTE;
	TComboBox *sortCB;
	TButton *sfApply;
	TImage *background;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall settingsImageClick(TObject *Sender);
	void __fastcall adminImageClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall logoutBTNClick(TObject *Sender);
	void __fastcall builderBTNClick(TObject *Sender);
	void __fastcall addGameBTNClick(TObject *Sender);
	void __fastcall helpBoxClick(TObject *Sender);
	void __fastcall skinsBTNClick(TObject *Sender);
	void __fastcall createReportClick(TObject *Sender);
	void __fastcall udpStartClick(TObject *Sender);
	void __fastcall mainGridCellClick(TColumn *Column);
	void __fastcall exitAppImageClick(TObject *Sender);
	void __fastcall sqlCBChange(TObject *Sender);
	void __fastcall bugImageClick(TObject *Sender);
	void __fastcall sfApplyClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    std::map<String, std::map<String, String>> translation;
	__fastcall TmainPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainPage *mainPage;
//---------------------------------------------------------------------------
#endif
