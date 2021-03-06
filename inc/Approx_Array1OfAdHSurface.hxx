// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Approx_Array1OfAdHSurface_HeaderFile
#define _Approx_Array1OfAdHSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Adaptor3d_HSurface;



class Approx_Array1OfAdHSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Approx_Array1OfAdHSurface(const Standard_Integer Low, const Standard_Integer Up);
  
    Approx_Array1OfAdHSurface(const Handle(Adaptor3d_HSurface)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(Adaptor3d_HSurface)& V) ;
  
      void Destroy() ;
~Approx_Array1OfAdHSurface()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Approx_Array1OfAdHSurface& Assign (const Approx_Array1OfAdHSurface& Other) ;
 const  Approx_Array1OfAdHSurface& operator = (const Approx_Array1OfAdHSurface& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Adaptor3d_HSurface)& Value) ;
  
     const  Handle(Adaptor3d_HSurface)& Value (const Standard_Integer Index)  const;
   const  Handle(Adaptor3d_HSurface)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(Adaptor3d_HSurface)& ChangeValue (const Standard_Integer Index) ;
    Handle(Adaptor3d_HSurface)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Approx_Array1OfAdHSurface(const Approx_Array1OfAdHSurface& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(Adaptor3d_HSurface)
#define Array1Item_hxx <Adaptor3d_HSurface.hxx>
#define TCollection_Array1 Approx_Array1OfAdHSurface
#define TCollection_Array1_hxx <Approx_Array1OfAdHSurface.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Approx_Array1OfAdHSurface_HeaderFile
