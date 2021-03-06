// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TDF_SequenceNodeOfLabelSequence.hxx>

#include <Standard_Type.hxx>

#include <TDF_Label.hxx>
#include <TDF_LabelSequence.hxx>

 


IMPLEMENT_STANDARD_TYPE(TDF_SequenceNodeOfLabelSequence)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_SeqNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDF_SequenceNodeOfLabelSequence)


IMPLEMENT_DOWNCAST(TDF_SequenceNodeOfLabelSequence,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDF_SequenceNodeOfLabelSequence)


#define SeqItem TDF_Label
#define SeqItem_hxx <TDF_Label.hxx>
#define TCollection_SequenceNode TDF_SequenceNodeOfLabelSequence
#define TCollection_SequenceNode_hxx <TDF_SequenceNodeOfLabelSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_TDF_SequenceNodeOfLabelSequence
#define TCollection_SequenceNode_Type_() TDF_SequenceNodeOfLabelSequence_Type_()
#define TCollection_Sequence TDF_LabelSequence
#define TCollection_Sequence_hxx <TDF_LabelSequence.hxx>
#include <TCollection_SequenceNode.gxx>

