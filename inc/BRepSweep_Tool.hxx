// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepSweep_Tool_HeaderFile
#define _BRepSweep_Tool_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopTools_IndexedMapOfShape.hxx>
#include <Standard_Integer.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <TopAbs_Orientation.hxx>
class Standard_OutOfRange;
class TopoDS_Shape;


//! Provides  the  indexation and type  analysis  services
//! required by the TopoDS generating Shape of BRepSweep.
class BRepSweep_Tool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Initialize the tool  with <aShape>.  The IndexTool
  //! must prepare an indexation for  all  the subshapes
  //! of this shape.
  Standard_EXPORT BRepSweep_Tool(const TopoDS_Shape& aShape);
  
  //! Returns the number of subshapes in the shape.
  Standard_EXPORT   Standard_Integer NbShapes()  const;
  
  //! Returns the index of <aShape>.
  Standard_EXPORT   Standard_Integer Index (const TopoDS_Shape& aShape)  const;
  
  //! Returns the Shape at Index anIdex.
  Standard_EXPORT   TopoDS_Shape Shape (const Standard_Integer anIndex)  const;
  
  //! Returns the type of <aShape>.
  Standard_EXPORT   TopAbs_ShapeEnum Type (const TopoDS_Shape& aShape)  const;
  
  //! Returns the Orientation of <aShape>.
  Standard_EXPORT   TopAbs_Orientation Orientation (const TopoDS_Shape& aShape)  const;
  
  //! Set the Orientation of <aShape> with Or.
  Standard_EXPORT   void SetOrientation (TopoDS_Shape& aShape, const TopAbs_Orientation Or)  const;




protected:





private:



  TopTools_IndexedMapOfShape myMap;


};







#endif // _BRepSweep_Tool_HeaderFile
