// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : E:\FAKS\AppC++\v2.5 - current\noxianSoapWSDL.xml
//  >Import : E:\FAKS\AppC++\v2.5 - current\noxianSoapWSDL.xml>0
//  >Import : E:\FAKS\AppC++\v2.5 - current\noxianSoapWSDL.xml>1
// Version  : 1.0
// (14.2.2023. 18:08:59 - - $Rev: 103843 $)
// ************************************************************************ //

#ifndef   noxianSoapWSDLH
#define   noxianSoapWSDLH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <Soap.SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif

namespace NS_noxianSoapWSDL {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:string          - "http://www.w3.org/2001/XMLSchema"[Gbl]
// !:float           - "http://www.w3.org/2001/XMLSchema"[]
// !:double          - "http://www.w3.org/2001/XMLSchema"[Gbl]

class SOAP_REMOTABLE_CLASS TSampleStruct;

enum class SampleEnum   /* "urn:noxianSoap"[GblSmpl] */
{
  etNone, 
  etAFew, 
  etSome, 
  etALot
};

class SampleEnum_TypeInfoHolder : public TObject {
  SampleEnum __instanceType;
public:
__published:
  __property SampleEnum __propType = { read=__instanceType };
};

typedef DynamicArray<double>      TDoubleDynArray; /* "urn:noxianSoap"[GblCplx] */


// ************************************************************************ //
// XML       : TSampleStruct, global, <complexType>
// Namespace : urn:@:noxianSoap
// ************************************************************************ //
class TSampleStruct : public TRemotable {
private:
  UnicodeString   FLastName;
  UnicodeString   FFirstName;
  double          FSalary;
__published:
  __property UnicodeString   LastName = { read=FLastName, write=FLastName };
  __property UnicodeString  FirstName = { read=FFirstName, write=FFirstName };
  __property double         Salary = { read=FSalary, write=FSalary };
};



// ************************************************************************ //
// Namespace : urn:noxianSoap-InoxianSoap
// soapAction: urn:noxianSoap-InoxianSoap#%operationName%
// transport : http://schemas.xmlsoap.org/soap/http
// style     : rpc
// use       : encoded
// binding   : InoxianSoapbinding
// service   : InoxianSoapservice
// port      : InoxianSoapPort
// URL       : http://localhost:62120/soap/InoxianSoap
// ************************************************************************ //
__interface INTERFACE_UUID("{A875C72E-F438-3E7C-639B-66430CDC6810}") InoxianSoap : public IInvokable
{
public:
  virtual SampleEnum      echoEnum(const SampleEnum eValue) = 0; 
  virtual TDoubleDynArray echoDoubleArray(const TDoubleDynArray daValue) = 0; 
  virtual TSampleStruct*  echoStruct(const TSampleStruct* pEmployee) = 0; 
  virtual double          echoDouble(const double dValue) = 0; 
  virtual float           rpToCurrency(const float RP, const UnicodeString currency) = 0; 
  virtual float           currencyToRp(const float amount, const UnicodeString currency) = 0; 
};
typedef DelphiInterface<InoxianSoap> _di_InoxianSoap;

_di_InoxianSoap GetInoxianSoap(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_noxianSoapWSDL

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_noxianSoapWSDL;
#endif



#endif // noxianSoapWSDLH
