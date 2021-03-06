// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ObjMgt_PSeqOfExtRef_HeaderFile
#define _ObjMgt_PSeqOfExtRef_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_ObjMgt_PSeqOfExtRef.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_ObjMgt_ExternRef.hxx>
#include <Handle_ObjMgt_PSeqOfExtRef.hxx>
#include <Handle_ObjMgt_SeqNodeOfPSeqOfExtRef.hxx>
#include <Standard_Persistent.hxx>
class ObjMgt_ExternRef;
class ObjMgt_SeqNodeOfPSeqOfExtRef;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class ObjMgt_SeqExplorerOfPSeqOfExtRef;


class ObjMgt_PSeqOfExtRef : public Standard_Persistent
{

public:

  
  Standard_EXPORT ObjMgt_PSeqOfExtRef();
  
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   Standard_Integer Length()  const;
  
  Standard_EXPORT   Handle(ObjMgt_ExternRef) First()  const;
  
  Standard_EXPORT   Handle(ObjMgt_ExternRef) Last()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(ObjMgt_ExternRef)& T) ;
  
  Standard_EXPORT   void Append (const Handle(ObjMgt_PSeqOfExtRef)& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(ObjMgt_ExternRef)& T) ;
  
  Standard_EXPORT   void Prepend (const Handle(ObjMgt_PSeqOfExtRef)& S) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer Index, const Handle(ObjMgt_ExternRef)& T) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer Index, const Handle(ObjMgt_PSeqOfExtRef)& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(ObjMgt_ExternRef)& T) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(ObjMgt_PSeqOfExtRef)& S) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer I, const Standard_Integer J) ;
  
  Standard_EXPORT   Handle(ObjMgt_PSeqOfExtRef) SubSequence (const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  Standard_EXPORT   Handle(ObjMgt_PSeqOfExtRef) Split (const Standard_Integer Index) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(ObjMgt_ExternRef)& T) ;
  
  Standard_EXPORT   Handle(ObjMgt_ExternRef) Value (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(ObjMgt_ExternRef)& T)  const;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Handle(ObjMgt_ExternRef)& T, const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Handle(ObjMgt_ExternRef)& T)  const;
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   void Destroy() ;
~ObjMgt_PSeqOfExtRef()
{
  Destroy();
}
ObjMgt_PSeqOfExtRef(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) _CSFDB_GetObjMgt_PSeqOfExtRefFirstItem() const { return FirstItem; }
    void _CSFDB_SetObjMgt_PSeqOfExtRefFirstItem(const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& p) { FirstItem = p; }
    Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) _CSFDB_GetObjMgt_PSeqOfExtRefLastItem() const { return LastItem; }
    void _CSFDB_SetObjMgt_PSeqOfExtRefLastItem(const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& p) { LastItem = p; }
    Standard_Integer _CSFDB_GetObjMgt_PSeqOfExtRefSize() const { return Size; }
    void _CSFDB_SetObjMgt_PSeqOfExtRefSize(const Standard_Integer p) { Size = p; }

friend class ObjMgt_SeqExplorerOfPSeqOfExtRef;


  DEFINE_STANDARD_RTTI(ObjMgt_PSeqOfExtRef)

protected:




private: 

  
  Standard_EXPORT   Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) GetFirst()  const;
  
  Standard_EXPORT   Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) GetLast()  const;

  Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) FirstItem;
  Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) LastItem;
  Standard_Integer Size;


};







#endif // _ObjMgt_PSeqOfExtRef_HeaderFile
