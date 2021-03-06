// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectBasicGeom_HeaderFile
#define _IGESSelect_SelectBasicGeom_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SelectBasicGeom.hxx>

#include <Standard_Integer.hxx>
#include <IFSelect_SelectExplore.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;
class IGESData_IGESEntity;


//! This selection returns the basic geometric elements
//! contained in an IGES Entity
//! Intended to run a "quick" transfer. I.E. :
//! - for a Group, considers its Elements
//! - for a Trimmed or Bounded Surface or a Face (BREP),
//! considers the 3D curves of each of its loops
//! - for a Plane (108), considers its Bounding Curve
//! - for a Curve itself, takes it
//!
//! Also, FREE surfaces are taken, because curve 3d is known for
//! them. (the ideal should be to have their natural bounds)
//!
//! If <curvesonly> is set, ONLY curves-3d are returned
class IGESSelect_SelectBasicGeom : public IFSelect_SelectExplore
{

public:

  
  //! Creates a SelectBasicGeom, which allways works recursively
  //! mode = -1 : Returns Surfaces (without trimming)
  //! mode = +1 : Returns Curves 3D (free or bound of surface)
  //! mode = +2 : Returns Basic Curves 3D : as 1 but CompositeCurves
  //! are returned in detail
  //! mode = 0  : both
  Standard_EXPORT IGESSelect_SelectBasicGeom(const Standard_Integer mode);
  
  Standard_EXPORT   Standard_Boolean CurvesOnly()  const;
  
  //! Explores an entity, to take its contained Curves 3d
  //! Works recursively
  Standard_EXPORT   Standard_Boolean Explore (const Standard_Integer level, const Handle(Standard_Transient)& ent, const Interface_Graph& G, Interface_EntityIterator& explored)  const;
  
  //! Returns a text defining the criterium : "Curves 3d" or
  //! "Basic Geometry"
  Standard_EXPORT   TCollection_AsciiString ExploreLabel()  const;
  
  //! This method can be called from everywhere to get the curves
  //! as sub-elements of a given curve :
  //! CompositeCurve : explored lists its subs + returns True
  //! Any Curve : explored is not filled but returned is True
  //! Other : returned is False
  Standard_EXPORT static   Standard_Boolean SubCurves (const Handle(IGESData_IGESEntity)& ent, Interface_EntityIterator& explored) ;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectBasicGeom)

protected:




private: 


  Standard_Integer thegeom;


};







#endif // _IGESSelect_SelectBasicGeom_HeaderFile
