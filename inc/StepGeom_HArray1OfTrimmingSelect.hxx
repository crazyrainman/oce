// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_HArray1OfTrimmingSelect_HeaderFile
#define _StepGeom_HArray1OfTrimmingSelect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_HArray1OfTrimmingSelect.hxx>

#include <StepGeom_Array1OfTrimmingSelect.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepGeom_TrimmingSelect;
class StepGeom_Array1OfTrimmingSelect;



class StepGeom_HArray1OfTrimmingSelect : public MMgt_TShared
{

public:

  
    StepGeom_HArray1OfTrimmingSelect(const Standard_Integer Low, const Standard_Integer Up);
  
    StepGeom_HArray1OfTrimmingSelect(const Standard_Integer Low, const Standard_Integer Up, const StepGeom_TrimmingSelect& V);
  
      void Init (const StepGeom_TrimmingSelect& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepGeom_TrimmingSelect& Value) ;
  
     const  StepGeom_TrimmingSelect& Value (const Standard_Integer Index)  const;
  
      StepGeom_TrimmingSelect& ChangeValue (const Standard_Integer Index) ;
  
     const  StepGeom_Array1OfTrimmingSelect& Array1()  const;
  
      StepGeom_Array1OfTrimmingSelect& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepGeom_HArray1OfTrimmingSelect)

protected:




private: 


  StepGeom_Array1OfTrimmingSelect myArray;


};

#define ItemHArray1 StepGeom_TrimmingSelect
#define ItemHArray1_hxx <StepGeom_TrimmingSelect.hxx>
#define TheArray1 StepGeom_Array1OfTrimmingSelect
#define TheArray1_hxx <StepGeom_Array1OfTrimmingSelect.hxx>
#define TCollection_HArray1 StepGeom_HArray1OfTrimmingSelect
#define TCollection_HArray1_hxx <StepGeom_HArray1OfTrimmingSelect.hxx>
#define Handle_TCollection_HArray1 Handle_StepGeom_HArray1OfTrimmingSelect
#define TCollection_HArray1_Type_() StepGeom_HArray1OfTrimmingSelect_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepGeom_HArray1OfTrimmingSelect_HeaderFile
