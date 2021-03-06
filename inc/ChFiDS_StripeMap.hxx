// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_StripeMap_HeaderFile
#define _ChFiDS_StripeMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx>
#include <Handle_ChFiDS_Stripe.hxx>
#include <Standard_Integer.hxx>
class TopoDS_Vertex;
class ChFiDS_Stripe;
class ChFiDS_ListOfStripe;


//! encapsulation of IndexedDataMapOfVertexListOfStripe
class ChFiDS_StripeMap 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ChFiDS_StripeMap();
  
  Standard_EXPORT   void Add (const TopoDS_Vertex& V, const Handle(ChFiDS_Stripe)& F) ;
  
      Standard_Integer Extent()  const;
  
  Standard_EXPORT  const  ChFiDS_ListOfStripe& FindFromKey (const TopoDS_Vertex& V)  const;
 const  ChFiDS_ListOfStripe& operator() (const TopoDS_Vertex& V)  const
{
  return FindFromKey(V);
}
  
  Standard_EXPORT  const  ChFiDS_ListOfStripe& FindFromIndex (const Standard_Integer I)  const;
 const  ChFiDS_ListOfStripe& operator() (const Standard_Integer I)  const
{
  return FindFromIndex(I);
}
  
     const  TopoDS_Vertex& FindKey (const Standard_Integer I)  const;
  
  Standard_EXPORT   void Clear() ;




protected:





private:



  ChFiDS_IndexedDataMapOfVertexListOfStripe mymap;


};


#include <ChFiDS_StripeMap.lxx>





#endif // _ChFiDS_StripeMap_HeaderFile
