// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TPrsStd_GeometryDriver_HeaderFile
#define _TPrsStd_GeometryDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TPrsStd_GeometryDriver_HeaderFile
#include <Handle_TPrsStd_GeometryDriver.hxx>
#endif

#ifndef _TPrsStd_Driver_HeaderFile
#include <TPrsStd_Driver.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_AIS_InteractiveObject_HeaderFile
#include <Handle_AIS_InteractiveObject.hxx>
#endif
class TDF_Label;
class AIS_InteractiveObject;



//! This method is an implementation of TPrsStd_Driver for geometries. <br>
class TPrsStd_GeometryDriver : public TPrsStd_Driver {

public:

  //! Constructs an empty geometry driver. <br>
  Standard_EXPORT   TPrsStd_GeometryDriver();
  //! Build the AISObject (if null) or update it. <br>
//!           No compute is done. <br>
//!           Returns <True> if informations was found <br>
//!           and AISObject updated. <br>
  Standard_EXPORT   virtual  Standard_Boolean Update(const TDF_Label& aLabel,Handle(AIS_InteractiveObject)& anAISObject) ;




  DEFINE_STANDARD_RTTI(TPrsStd_GeometryDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif