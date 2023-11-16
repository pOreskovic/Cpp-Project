//---------------------------------------------------------------------------

#ifndef bugReportH
#define bugReportH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdCmdTCPServer.hpp>
#include <IdComponent.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdMessage.hpp>
#include <IdMessageClient.hpp>
#include <IdSMTP.hpp>
#include <IdSMTPBase.hpp>
#include <IdSMTPServer.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdTCPServer.hpp>
#include <IdIOHandler.hpp>
#include <IdIOHandlerSocket.hpp>
#include <IdIOHandlerStack.hpp>
#include <IdSSL.hpp>
#include <IdSSLOpenSSL.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------

#ifdef EXPORTS
	#define DLL_EXPORT __declspec(dllexport)
#else
	#define DLL_EXPORT __declspec(dllimport)
#endif
class DLL_EXPORT TbugReportPage : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *emailTE;
	TButton *sendBTN;
	TIdSMTP *SMTPclient;
	TIdMessage *email;
	TIdSSLIOHandlerSocketOpenSSL *SSLioHandler;
	TEdit *ePassTE;
	TGroupBox *GroupBox1;
	TRichEdit *bugDescr;
	TLabel *Label2;
	void __fastcall sendBTNClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TbugReportPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TbugReportPage *bugReportPage;
//---------------------------------------------------------------------------
#endif
