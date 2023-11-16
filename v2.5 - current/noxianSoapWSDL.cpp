// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : E:\FAKS\AppC++\v2.5 - current\noxianSoapWSDL.xml
//  >Import : E:\FAKS\AppC++\v2.5 - current\noxianSoapWSDL.xml>0
//  >Import : E:\FAKS\AppC++\v2.5 - current\noxianSoapWSDL.xml>1
// Version  : 1.0
// (14.2.2023. 18:08:59 - - $Rev: 103843 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "noxianSoapWSDL.h"



namespace NS_noxianSoapWSDL {

_di_InoxianSoap GetInoxianSoap(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "E:\\FAKS\\AppC++\\v2.5 - current\\noxianSoapWSDL.xml";
  static const char* defURL = "http://localhost:62120/soap/InoxianSoap";
  static const char* defSvc = "InoxianSoapservice";
  static const char* defPrt = "InoxianSoapPort";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  Soaphttpclient::THTTPRIO* rio = HTTPRIO ? HTTPRIO : new Soaphttpclient::THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
    rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_InoxianSoap service;
  rio->QueryInterface(service);
  if (!service && !HTTPRIO)
    delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types exposed by the WebService.
// ************************************************************************ //
static void RegTypes()
{
  /* InoxianSoap */
  InvRegistry()->RegisterInterface(__delphirtti(InoxianSoap), L"urn:noxianSoap-InoxianSoap", L"");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(InoxianSoap), L"urn:noxianSoap-InoxianSoap#%operationName%");
  /* InoxianSoap->echoEnum */
  InvRegistry()->RegisterParamInfo(__delphirtti(InoxianSoap), "echoEnum", "return_", L"return", L"");
  /* InoxianSoap->echoDoubleArray */
  InvRegistry()->RegisterParamInfo(__delphirtti(InoxianSoap), "echoDoubleArray", "return_", L"return", L"");
  /* InoxianSoap->echoStruct */
  InvRegistry()->RegisterParamInfo(__delphirtti(InoxianSoap), "echoStruct", "return_", L"return", L"");
  /* InoxianSoap->echoDouble */
  InvRegistry()->RegisterParamInfo(__delphirtti(InoxianSoap), "echoDouble", "return_", L"return", L"");
  /* InoxianSoap->rpToCurrency */
  InvRegistry()->RegisterParamInfo(__delphirtti(InoxianSoap), "rpToCurrency", "return_", L"return", L"");
  /* InoxianSoap->currencyToRp */
  InvRegistry()->RegisterParamInfo(__delphirtti(InoxianSoap), "currencyToRp", "return_", L"return", L"");
  /* TDoubleDynArray */
  RemClassRegistry()->RegisterXSInfo(__delphirtti(TDoubleDynArray), L"urn:noxianSoap", L"TDoubleDynArray");
  /* TSampleStruct */
  RemClassRegistry()->RegisterXSClass(__classid(TSampleStruct), L"urn:@:noxianSoap", L"TSampleStruct");
  /* SampleEnum */
  RemClassRegistry()->RegisterXSInfo(GetClsMemberTypeInfo(__typeinfo(SampleEnum_TypeInfoHolder)), L"urn:noxianSoap", L"SampleEnum");
}
#pragma startup RegTypes 32

};     // NS_noxianSoapWSDL

