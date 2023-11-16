//---------------------------------------------------------------------------

#ifndef registerH
#define registerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdTCPServer.hpp>
#include <IdContext.hpp>
#include <map>
//---------------------------------------------------------------------------
class TregisterPage : public TForm
{
__published:	// IDE-managed Components
	TEdit *surnameTE;
	TEdit *emailTE;
	TEdit *setPassTE;
	TEdit *setUnameTE;
	TLabel *nameL;
	TLabel *surnameL;
	TLabel *setUnameL;
	TLabel *passL;
	TEdit *nameTE;
	TLabel *emailL;
	TFDConnection *NoxianConnectDB;
	TFDPhysMySQLDriverLink *MySQL_Driver;
	TButton *registerMeBTN;
	TFDTable *usersTable;
	TFDAutoIncField *usersTableid;
	TStringField *usersTableusername;
	TStringField *usersTablepassword;
	TStringField *usersTablefirstName;
	TStringField *usersTablelastName;
	TStringField *usersTableemail;
	TGroupBox *GroupBox1;
	TLabel *registerTitle;
	TImage *registerTitleImage;
	TComboBox *serverCB;
	TStringField *usersTableserver;
	TLabel *serverL;
	TIdTCPClient *client;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall registerMeBTNClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    std::map<String, std::map<String, String>> translation;
	__fastcall TregisterPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TregisterPage *registerPage;
//---------------------------------------------------------------------------
#endif
