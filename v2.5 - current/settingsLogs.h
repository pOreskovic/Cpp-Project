//---------------------------------------------------------------------------

#ifndef settingsLogsH
#define settingsLogsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TlogsPage : public TForm
{
__published:	// IDE-managed Components
	TListView *settingsLogs;
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TlogsPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TlogsPage *logsPage;
//---------------------------------------------------------------------------
#endif
