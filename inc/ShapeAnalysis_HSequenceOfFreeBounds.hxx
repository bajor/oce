// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_HSequenceOfFreeBounds_HeaderFile
#define _ShapeAnalysis_HSequenceOfFreeBounds_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeAnalysis_HSequenceOfFreeBounds.hxx>

#include <ShapeAnalysis_SequenceOfFreeBounds.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_ShapeAnalysis_FreeBoundData.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class ShapeAnalysis_FreeBoundData;
class ShapeAnalysis_SequenceOfFreeBounds;



class ShapeAnalysis_HSequenceOfFreeBounds : public MMgt_TShared
{

public:

  
    ShapeAnalysis_HSequenceOfFreeBounds();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(ShapeAnalysis_FreeBoundData)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(ShapeAnalysis_HSequenceOfFreeBounds)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(ShapeAnalysis_FreeBoundData)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(ShapeAnalysis_HSequenceOfFreeBounds)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(ShapeAnalysis_FreeBoundData)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(ShapeAnalysis_HSequenceOfFreeBounds)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(ShapeAnalysis_FreeBoundData)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(ShapeAnalysis_HSequenceOfFreeBounds)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(ShapeAnalysis_HSequenceOfFreeBounds) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(ShapeAnalysis_FreeBoundData)& anItem) ;
  
  Standard_EXPORT  const  Handle(ShapeAnalysis_FreeBoundData)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(ShapeAnalysis_FreeBoundData)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  ShapeAnalysis_SequenceOfFreeBounds& Sequence()  const;
  
      ShapeAnalysis_SequenceOfFreeBounds& ChangeSequence() ;
  
  Standard_EXPORT   Handle(ShapeAnalysis_HSequenceOfFreeBounds) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(ShapeAnalysis_HSequenceOfFreeBounds)

protected:




private: 


  ShapeAnalysis_SequenceOfFreeBounds mySequence;


};

#define Item Handle(ShapeAnalysis_FreeBoundData)
#define Item_hxx <ShapeAnalysis_FreeBoundData.hxx>
#define TheSequence ShapeAnalysis_SequenceOfFreeBounds
#define TheSequence_hxx <ShapeAnalysis_SequenceOfFreeBounds.hxx>
#define TCollection_HSequence ShapeAnalysis_HSequenceOfFreeBounds
#define TCollection_HSequence_hxx <ShapeAnalysis_HSequenceOfFreeBounds.hxx>
#define Handle_TCollection_HSequence Handle_ShapeAnalysis_HSequenceOfFreeBounds
#define TCollection_HSequence_Type_() ShapeAnalysis_HSequenceOfFreeBounds_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(ShapeAnalysis_HSequenceOfFreeBounds) ShallowCopy(const Handle(ShapeAnalysis_HSequenceOfFreeBounds)& me) {
 return me->ShallowCopy();
}



#endif // _ShapeAnalysis_HSequenceOfFreeBounds_HeaderFile
