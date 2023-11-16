
// ********************************************************************* //
//                                                                     
//                          XML Data Binding                           
//                                                                     
//         Generated on: 31.1.2023. 19:50:10                           
//       Generated from: E:\FAKS\AppC++\V2.3 - JSON i XML\builds.xml   
//   Settings stored in: E:\FAKS\AppC++\V2.3 - JSON i XML\builds.xdb   
//                                                                     
// ********************************************************************* //

#include <System.hpp>
#pragma hdrstop

#include "builds.h"


// Global Functions 

_di_IXMLbuilderType __fastcall Getbuilder(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLbuilderType) Doc->GetDocBinding("builder", __classid(TXMLbuilderType), TargetNamespace);
};

_di_IXMLbuilderType __fastcall Getbuilder(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getbuilder(DocIntf);
};

_di_IXMLbuilderType __fastcall Loadbuilder(const System::UnicodeString& FileName)
{
  return (_di_IXMLbuilderType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("builder", __classid(TXMLbuilderType), TargetNamespace);
};

_di_IXMLbuilderType __fastcall  Newbuilder()
{
  return (_di_IXMLbuilderType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("builder", __classid(TXMLbuilderType), TargetNamespace);
};

// TXMLbuilderType 

void __fastcall TXMLbuilderType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("build"), __classid(TXMLbuildType));
  ItemTag = "build";
  ItemInterface = __uuidof(IXMLbuildType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLbuildType __fastcall TXMLbuilderType::Get_build(int Index)
{
  return (_di_IXMLbuildType) List->Nodes[Index];
};

_di_IXMLbuildType __fastcall TXMLbuilderType::Add()
{
  return (_di_IXMLbuildType) AddItem(-1);
};

_di_IXMLbuildType __fastcall TXMLbuilderType::Insert(const int Index)
{
  return (_di_IXMLbuildType) AddItem(Index);
};

// TXMLbuildType 

System::UnicodeString __fastcall TXMLbuildType::Get_champion()
{
  return GetChildNodes()->Nodes[System::UnicodeString("champion")]->Text;
};

void __fastcall TXMLbuildType::Set_champion(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("champion")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLbuildType::Get_firstItem()
{
  return GetChildNodes()->Nodes[System::UnicodeString("firstItem")]->Text;
};

void __fastcall TXMLbuildType::Set_firstItem(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("firstItem")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLbuildType::Get_secondItem()
{
  return GetChildNodes()->Nodes[System::UnicodeString("secondItem")]->Text;
};

void __fastcall TXMLbuildType::Set_secondItem(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("secondItem")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLbuildType::Get_thirdItem()
{
  return GetChildNodes()->Nodes[System::UnicodeString("thirdItem")]->Text;
};

void __fastcall TXMLbuildType::Set_thirdItem(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("thirdItem")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLbuildType::Get_fourthItem()
{
  return GetChildNodes()->Nodes[System::UnicodeString("fourthItem")]->Text;
};

void __fastcall TXMLbuildType::Set_fourthItem(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("fourthItem")]->NodeValue = Value;
};

int __fastcall TXMLbuildType::Get_buildCost()
{
  return GetChildNodes()->Nodes[System::UnicodeString("buildCost")]->NodeValue.operator int();
};

void __fastcall TXMLbuildType::Set_buildCost(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("buildCost")]->NodeValue = Value;
};

// TXMLbuildTypeList 

_di_IXMLbuildType __fastcall TXMLbuildTypeList::Add()
{
  return (_di_IXMLbuildType) AddItem(-1);
};

_di_IXMLbuildType __fastcall TXMLbuildTypeList::Insert(const int Index)
{
  return (_di_IXMLbuildType) AddItem(Index);
};

_di_IXMLbuildType __fastcall TXMLbuildTypeList::Get_Item(int Index)
{
  return (_di_IXMLbuildType) List->Nodes[Index];
};
