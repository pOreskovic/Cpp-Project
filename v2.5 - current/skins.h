//---------------------------------------------------------------------------

#ifndef skinsH
#define skinsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Stan.Param.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportBaseDialog.hpp"
#include "frxExportPDF.hpp"
#include "frxExportRTF.hpp"
#include <Data.Bind.Components.hpp>
#include <Data.Bind.ObjectScope.hpp>
#include <REST.Client.hpp>
#include <REST.Types.hpp>
#include "gtClasses.hpp"
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include <REST.Authenticator.Simple.hpp>
#include <System.Net.HttpClient.hpp>
#include <System.Net.HttpClientComponent.hpp>
#include <System.Net.URLClient.hpp>
//---------------------------------------------------------------------------
class TskinsPage : public TForm
{
__published:	// IDE-managed Components
	TDBImage *skinImage;
	TDBGrid *skinsGrid;
	TFDConnection *skinsConnection;
	TDataSource *skins;
	TFDPhysMySQLDriverLink *skinsDriver;
	TFDTable *champsTable;
	TfrxReport *skinsReport;
	TfrxDBDataset *skinsDataset;
	TfrxDBDataset *championsDataset;
	TfrxPDFExport *pdfExport;
	TfrxRTFExport *rtfExport;
	TFDAutoIncField *champsTableid;
	TStringField *champsTablename;
	TStringField *champsTabletitle;
	TStringField *champsTablerole;
	TStringField *champsTabledifficulty;
	TStringField *champsTableprimaryLane;
	TDataSource *champs;
	TFDTable *skinsTablee;
	TDBGrid *DBGrid1;
	TButton *exportPDF;
	TGroupBox *rpCalc;
	TEdit *rpCost;
	TEdit *moneyForRP;
	TLabel *Label1;
	TComboBox *currencyCB;
	TButton *rpMoneyCalc;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall exportPDFClick(TObject *Sender);
	void __fastcall rpMoneyCalcClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TskinsPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TskinsPage *skinsPage;
//---------------------------------------------------------------------------
#endif
