// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_CLProps_HeaderFile
#define _HLRBRep_CLProps_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Dir2d.hxx>
#include <LProp_Status.hxx>
#include <Standard_Boolean.hxx>
class LProp_BadContinuity;
class Standard_DomainError;
class Standard_OutOfRange;
class LProp_NotDefined;
class gp_Vec2d;
class gp_Pnt2d;
class gp_Dir2d;
class HLRBRep_CLPropsATool;



class HLRBRep_CLProps 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_CLProps(const Standard_Address& C, const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT HLRBRep_CLProps(const Standard_Address& C, const Standard_Real U, const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT HLRBRep_CLProps(const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT   void SetParameter (const Standard_Real U) ;
  
  Standard_EXPORT   void SetCurve (const Standard_Address& C) ;
  
  Standard_EXPORT  const  gp_Pnt2d& Value()  const;
  
  Standard_EXPORT  const  gp_Vec2d& D1() ;
  
  Standard_EXPORT  const  gp_Vec2d& D2() ;
  
  Standard_EXPORT  const  gp_Vec2d& D3() ;
  
  Standard_EXPORT   Standard_Boolean IsTangentDefined() ;
  
  Standard_EXPORT   void Tangent (gp_Dir2d& D) ;
  
  Standard_EXPORT   Standard_Real Curvature() ;
  
  Standard_EXPORT   void Normal (gp_Dir2d& N) ;
  
  Standard_EXPORT   void CentreOfCurvature (gp_Pnt2d& P) ;




protected:





private:



  Standard_Address myCurve;
  Standard_Real myU;
  Standard_Integer myDerOrder;
  Standard_Real myCN;
  Standard_Real myLinTol;
  gp_Pnt2d myPnt;
  gp_Vec2d myDerivArr[3];
  gp_Dir2d myTangent;
  Standard_Real myCurvature;
  LProp_Status myTangentStatus;
  Standard_Integer mySignificantFirstDerivativeOrder;


};







#endif // _HLRBRep_CLProps_HeaderFile
