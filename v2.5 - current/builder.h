//---------------------------------------------------------------------------

#ifndef builderH
#define builderH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdIntercept.hpp>
#include <IdInterceptThrottler.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <map>
//---------------------------------------------------------------------------
class TitemsPage : public TForm
{
__published:	// IDE-managed Components
	TListView *buildsList;
	TXMLDocument *buildsXML;
	TEdit *champTE;
	TEdit *item1TE;
	TEdit *item2TE;
	TEdit *item3TE;
	TEdit *item4TE;
	TButton *addBuildBTN;
	TButton *deleteBuildBTN;
	TButton *updateBTN;
	TButton *clearBTN;
	TListView *itemsLV;
	TButton *itemAddBTN;
	TButton *itemUpdateBTN;
	TButton *itemDeleteBTN;
	TLabel *champL;
	TLabel *item1L;
	TLabel *item2L;
	TLabel *item3L;
	TLabel *item4L;
	TGroupBox *buildsBox;
	TGroupBox *itemsBox;
	TEdit *itemNameTE;
	TEdit *itemTypeTE;
	TEdit *stat1TE;
	TEdit *stat2TE;
	TEdit *itemCostTE;
	TEdit *pow1TE;
	TEdit *pow2TE;
	TLabel *itemNameL;
	TLabel *itemTypeL;
	TLabel *stat1L;
	TLabel *stat2L;
	TLabel *itemCostL;
	TLabel *pow1L;
	TLabel *pow2L;
	TButton *saveJSONBTN;
	TButton *refreshBTN;
	TButton *refreshJSON;
	TIdHTTP *httpDownload;
	TProgressBar *progBar;
	TButton *downloadBTN;
	TIdInterceptThrottler *speedLimiter;
	TEdit *speedSet;
	TButton *applySpeed;
	TLabel *Label1;
	TGroupBox *download;
	TLabel *downSuccL;
	void __fastcall addBuildBTNClick(TObject *Sender);
	void __fastcall deleteBuildBTNClick(TObject *Sender);
	void __fastcall buildsListSelectItem(TObject *Sender, TListItem *Item, bool Selected);
	void __fastcall updateBTNClick(TObject *Sender);
	void __fastcall clearBTNClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall itemAddBTNClick(TObject *Sender);
	void __fastcall itemDeleteBTNClick(TObject *Sender);
	void __fastcall saveJSONBTNClick(TObject *Sender);
	void __fastcall refreshBTNClick(TObject *Sender);
	void __fastcall itemsLVSelectItem(TObject *Sender, TListItem *Item, bool Selected);
	void __fastcall itemUpdateBTNClick(TObject *Sender);
	void __fastcall refreshJSONClick(TObject *Sender);
	void __fastcall downloadBTNClick(TObject *Sender);
	void __fastcall httpDownloadWorkBegin(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCountMax);
	void __fastcall httpDownloadWork(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount);
	void __fastcall httpDownloadWorkEnd(TObject *ASender, TWorkMode AWorkMode);
	void __fastcall applySpeedClick(TObject *Sender);






private:	// User declarations
public:		// User declarations
    std::map<String, std::map<String, String>> translation;
	__fastcall TitemsPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TitemsPage *itemsPage;
//---------------------------------------------------------------------------
#endif
