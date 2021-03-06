// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ChFiDS_HData.hxx>

#include <Standard_Type.hxx>

#include <Standard_NoSuchObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <ChFiDS_SurfData.hxx>
#include <ChFiDS_SequenceOfSurfData.hxx>

 


IMPLEMENT_STANDARD_TYPE(ChFiDS_HData)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ChFiDS_HData)


IMPLEMENT_DOWNCAST(ChFiDS_HData,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ChFiDS_HData)


#define Item Handle(ChFiDS_SurfData)
#define Item_hxx <ChFiDS_SurfData.hxx>
#define TheSequence ChFiDS_SequenceOfSurfData
#define TheSequence_hxx <ChFiDS_SequenceOfSurfData.hxx>
#define TCollection_HSequence ChFiDS_HData
#define TCollection_HSequence_hxx <ChFiDS_HData.hxx>
#define Handle_TCollection_HSequence Handle_ChFiDS_HData
#define TCollection_HSequence_Type_() ChFiDS_HData_Type_()
#include <TCollection_HSequence.gxx>

