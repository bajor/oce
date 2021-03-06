// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_Delta_HeaderFile
#define _TDF_Delta_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDF_Delta.hxx>

#include <Standard_Integer.hxx>
#include <TDF_AttributeDeltaList.hxx>
#include <TCollection_ExtendedString.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_TDF_AttributeDelta.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_OStream.hxx>
class Standard_OutOfRange;
class TDF_Data;
class TDF_AttributeDelta;
class TDF_LabelList;
class TDF_AttributeDeltaList;
class TCollection_ExtendedString;


//! A set of AttributeDelta for a given transaction
//! number and reference time number.
//! A delta set is available at <aSourceTime>. If
//! applied, it restores the TDF_Data in the state it
//! was at <aTargetTime>.
class TDF_Delta : public MMgt_TShared
{

public:

  
  //! Creates a delta.
  Standard_EXPORT TDF_Delta();
  
  //! Returns true if there is nothing to undo.
      Standard_Boolean IsEmpty()  const;
  
  //! Returns true if the Undo action of <me> is
  //! applicable at <aCurrentTime>.
      Standard_Boolean IsApplicable (const Standard_Integer aCurrentTime)  const;
  
  //! Returns the field <myBeginTime>.
      Standard_Integer BeginTime()  const;
  
  //! Returns the field <myEndTime>.
      Standard_Integer EndTime()  const;
  
  //! Adds in <aLabelList> the labels of the attribute deltas.
  //! Caution: <aLabelList> is not cleared before use.
  Standard_EXPORT   void Labels (TDF_LabelList& aLabelList)  const;
  
  //! Returns the field <myAttDeltaList>.
     const  TDF_AttributeDeltaList& AttributeDeltas()  const;
  
  //! Returns a name associated with this delta.
      TCollection_ExtendedString Name()  const;
  
  //! Associates a name <theName> with this delta
      void SetName (const TCollection_ExtendedString& theName) ;
  
  Standard_EXPORT   void Dump (Standard_OStream& OS)  const;


friend class TDF_Data;


  DEFINE_STANDARD_RTTI(TDF_Delta)

protected:

  
  //! Validates <me> at <aBeginTime>. If applied, it
  //! restores the TDF_Data in the state it was at
  //! <anEndTime>. Reserved to TDF_Data.
  Standard_EXPORT   void Validity (const Standard_Integer aBeginTime, const Standard_Integer anEndTime) ;
  
  //! Adds an AttributeDelta to the list. Reserved to
  //! TDF_Data.
  Standard_EXPORT   void AddAttributeDelta (const Handle(TDF_AttributeDelta)& anAttributeDelta) ;



private: 

  
  Standard_EXPORT   void BeforeOrAfterApply (const Standard_Boolean before)  const;
  
  Standard_EXPORT   void Apply() ;

  Standard_Integer myBeginTime;
  Standard_Integer myEndTime;
  TDF_AttributeDeltaList myAttDeltaList;
  TCollection_ExtendedString myName;


};


#include <TDF_Delta.lxx>





#endif // _TDF_Delta_HeaderFile
