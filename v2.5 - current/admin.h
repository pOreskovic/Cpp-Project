//---------------------------------------------------------------------------

#ifndef adminH
#define adminH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
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
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TadminPage : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *usersGrid;
	TDBGrid *champsGrid;
	TDBNavigator *usersNAV;
	TDBNavigator *champsNAV;
	TFDPhysMySQLDriverLink *adminDriver;
	TFDConnection *adminConnection;
	TFDTable *usersTable;
	TFDTable *champsTable;
	TDataSource *usersDS;
	TDataSource *champsDS;
	TFDAutoIncField *usersTableid;
	TStringField *usersTableusername;
	TStringField *usersTablefirstName;
	TStringField *usersTablelastName;
	TStringField *usersTableemail;
	TIntegerField *usersTableadmin;
	TFDAutoIncField *champsTableid;
	TStringField *champsTablename;
	TStringField *champsTablerole;
	TStringField *champsTabledifficulty;
	TStringField *champsTableprimaryLane;
	TStringField *champsTabletitle;
	TLabel *Label1;
	TDBEdit *DBEdit1;
	TLabel *Label2;
	TDBEdit *DBEdit2;
	TLabel *Label3;
	TDBEdit *DBEdit3;
	TLabel *Label4;
	TDBEdit *DBEdit4;
	TLabel *Label5;
	TDBEdit *DBEdit5;
	TLabel *Label6;
	TDBEdit *DBEdit6;
	TLabel *Label7;
	TDBEdit *DBEdit7;
	TLabel *Label8;
	TDBEdit *DBEdit8;
	TLabel *Label9;
	TDBEdit *DBEdit9;
	TLabel *Label10;
	TDBEdit *DBEdit10;
	TLabel *Label11;
	TDBEdit *DBEdit11;
	TLabel *Label12;
	TFDTable *lanesTable;
	TDBLookupComboBox *roleCB;
	TDataSource *lanesDS;
	TDBGrid *DBGrid1;
	TFDTable *gamesTable;
	TDataSource *gamesDS;
	TIntegerField *gamesTableuserID;
	TIntegerField *gamesTableKills;
	TIntegerField *gamesTableDeaths;
	TIntegerField *gamesTableAssists;
	TIntegerField *gamesTableWon;
	TStringField *gamesTablechampPlayed;
	TLabel *Label13;
	TDBEdit *DBEdit12;
	TLabel *Label15;
	TDBEdit *DBEdit14;
	TLabel *Label16;
	TDBEdit *DBEdit15;
	TLabel *Label17;
	TDBEdit *DBEdit16;
	TLabel *Label18;
	TDBEdit *DBEdit17;
	TDBNavigator *gamesNAV;
	TComboBox *userSort;
	TLabel *sort1L;
	TComboBox *userFilter;
	TLabel *filterL;
	TEdit *filterValueTE;
	TButton *clearUsers;
	TButton *filterOK;
	TStringField *gamesTableuser;
	TGroupBox *Games;
	TGroupBox *Champions;
	TGroupBox *Users;
	TGroupBox *Skins;
	TDBGrid *DBGrid2;
	TDBNavigator *skinNAV;
	TFDQuery *skinsTable;
	TDataSource *skinsDS;
	TFDAutoIncField *skinsTableskinID;
	TStringField *skinsTableskinName;
	TIntegerField *skinsTablecost;
	TBlobField *skinsTablepreview;
	TLabel *Label19;
	TDBEdit *DBEdit18;
	TLabel *Label21;
	TDBEdit *DBEdit20;
	TLabel *Label22;
	TDBEdit *DBEdit21;
	TOpenDialog *imageUploader;
	TButton *uploadBTN;
	TLabel *helloAdmin;
	TIntegerField *skinsTablechampionsID;
	TLabel *Label20;
	TDBEdit *DBEdit19;
	TStringField *skinsTablechampionsName;
	TFDAutoIncField *gamesTablegameID;
	TLabel *Label23;
	TDBEdit *DBEdit22;
	TStringField *usersTableserver;
	TLabel *Label24;
	TDBEdit *DBEdit23;
	TFloatField *gamesTableKDA;
	void __fastcall userSortChange(TObject *Sender);
	void __fastcall clearUsersClick(TObject *Sender);
	void __fastcall filterOKClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall gamesTableCalcFields(TDataSet *DataSet);
	void __fastcall uploadBTNClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TadminPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TadminPage *adminPage;
//---------------------------------------------------------------------------
#endif
