
// ********************************************************************* //
//                                                                     
//                          XML Data Binding                           
//                                                                     
//         Generated on: 31.1.2023. 19:50:10                           
//       Generated from: E:\FAKS\AppC++\V2.3 - JSON i XML\builds.xml   
//   Settings stored in: E:\FAKS\AppC++\V2.3 - JSON i XML\builds.xdb   
//                                                                     
// ********************************************************************* //

#ifndef   buildsH
#define   buildsH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLbuilderType;
typedef System::DelphiInterface<IXMLbuilderType> _di_IXMLbuilderType;
__interface IXMLbuildType;
typedef System::DelphiInterface<IXMLbuildType> _di_IXMLbuildType;
__interface IXMLbuildTypeList;
typedef System::DelphiInterface<IXMLbuildTypeList> _di_IXMLbuildTypeList;

// IXMLbuilderType 

__interface INTERFACE_UUID("{9A8834AC-AB9B-4899-BCA8-E4D3290A9A00}") IXMLbuilderType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLbuildType __fastcall Get_build(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLbuildType __fastcall Add() = 0;
  virtual _di_IXMLbuildType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLbuildType build[int Index] = { read=Get_build };/* default */
};

// IXMLbuildType 

__interface INTERFACE_UUID("{6361F091-87E4-4290-B55C-3067A6C1B62A}") IXMLbuildType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_champion() = 0;
  virtual System::UnicodeString __fastcall Get_firstItem() = 0;
  virtual System::UnicodeString __fastcall Get_secondItem() = 0;
  virtual System::UnicodeString __fastcall Get_thirdItem() = 0;
  virtual System::UnicodeString __fastcall Get_fourthItem() = 0;
  virtual int __fastcall Get_buildCost() = 0;
  virtual void __fastcall Set_champion(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_firstItem(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_secondItem(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_thirdItem(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_fourthItem(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_buildCost(int Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString champion = { read=Get_champion, write=Set_champion };
  __property System::UnicodeString firstItem = { read=Get_firstItem, write=Set_firstItem };
  __property System::UnicodeString secondItem = { read=Get_secondItem, write=Set_secondItem };
  __property System::UnicodeString thirdItem = { read=Get_thirdItem, write=Set_thirdItem };
  __property System::UnicodeString fourthItem = { read=Get_fourthItem, write=Set_fourthItem };
  __property int buildCost = { read=Get_buildCost, write=Set_buildCost };
};

// IXMLbuildTypeList 

__interface INTERFACE_UUID("{6401C57E-1D3B-4A4E-9CD7-F05FF4022DE1}") IXMLbuildTypeList : public Xml::Xmlintf::IXMLNodeCollection
{
public:
  // Methods & Properties 
  virtual _di_IXMLbuildType __fastcall Add() = 0;
  virtual _di_IXMLbuildType __fastcall Insert(const int Index) = 0;

  virtual _di_IXMLbuildType __fastcall Get_Item(int Index) = 0;
  __property _di_IXMLbuildType Items[int Index] = { read=Get_Item /* default */ };
};

// Forward Decls 

class TXMLbuilderType;
class TXMLbuildType;
class TXMLbuildTypeList;

// TXMLbuilderType 

class TXMLbuilderType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLbuilderType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLbuilderType 
  virtual _di_IXMLbuildType __fastcall Get_build(int Index);
  virtual _di_IXMLbuildType __fastcall Add();
  virtual _di_IXMLbuildType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLbuildType 

class TXMLbuildType : public Xml::Xmldoc::TXMLNode, public IXMLbuildType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLbuildType 
  virtual System::UnicodeString __fastcall Get_champion();
  virtual System::UnicodeString __fastcall Get_firstItem();
  virtual System::UnicodeString __fastcall Get_secondItem();
  virtual System::UnicodeString __fastcall Get_thirdItem();
  virtual System::UnicodeString __fastcall Get_fourthItem();
  virtual int __fastcall Get_buildCost();
  virtual void __fastcall Set_champion(System::UnicodeString Value);
  virtual void __fastcall Set_firstItem(System::UnicodeString Value);
  virtual void __fastcall Set_secondItem(System::UnicodeString Value);
  virtual void __fastcall Set_thirdItem(System::UnicodeString Value);
  virtual void __fastcall Set_fourthItem(System::UnicodeString Value);
  virtual void __fastcall Set_buildCost(int Value);
};

// TXMLbuildTypeList 

class TXMLbuildTypeList : public Xml::Xmldoc::TXMLNodeCollection, public IXMLbuildTypeList
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLbuildTypeList 
  virtual _di_IXMLbuildType __fastcall Add();
  virtual _di_IXMLbuildType __fastcall Insert(const int Index);

  virtual _di_IXMLbuildType __fastcall Get_Item(int Index);
};

// Global Functions 

_di_IXMLbuilderType __fastcall Getbuilder(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLbuilderType __fastcall Getbuilder(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLbuilderType __fastcall Loadbuilder(const System::UnicodeString& FileName);
_di_IXMLbuilderType __fastcall  Newbuilder();

#define TargetNamespace ""

#endif