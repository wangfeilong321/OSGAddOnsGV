// This file has been generated by Py++.


// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#pragma GCC diagnostic warning "-Wunused-local-typedefs"
#pragma GCC diagnostic warning "-Wnon-virtual-dtor"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SurfaceBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list SurfaceBase_getMFKnotsU(OSG::SurfaceBase *self)
{
   boost::python::list result;
   OSG::MFReal32 const * mf_data = self->getMFKnotsU();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SurfaceBase_getMFKnotsV(OSG::SurfaceBase *self)
{
   boost::python::list result;
   OSG::MFReal32 const * mf_data = self->getMFKnotsV();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_SurfaceBase_class(){

    { //::OSG::SurfaceBase
        typedef bp::class_< OSG::SurfaceBase, bp::bases< OSG::Geometry >, boost::noncopyable > SurfaceBase_exposer_t;
        SurfaceBase_exposer_t SurfaceBase_exposer = SurfaceBase_exposer_t( "SurfaceBase", bp::no_init );
        bp::scope SurfaceBase_scope( SurfaceBase_exposer );
        bp::scope().attr("DimUFieldId") = (int)OSG::SurfaceBase::DimUFieldId;
        bp::scope().attr("DimVFieldId") = (int)OSG::SurfaceBase::DimVFieldId;
        bp::scope().attr("KnotsUFieldId") = (int)OSG::SurfaceBase::KnotsUFieldId;
        bp::scope().attr("KnotsVFieldId") = (int)OSG::SurfaceBase::KnotsVFieldId;
        bp::scope().attr("ControlPointsFieldId") = (int)OSG::SurfaceBase::ControlPointsFieldId;
        bp::scope().attr("ErrorFieldId") = (int)OSG::SurfaceBase::ErrorFieldId;
        bp::scope().attr("NumCurvesFieldId") = (int)OSG::SurfaceBase::NumCurvesFieldId;
        bp::scope().attr("KnotLengthsFieldId") = (int)OSG::SurfaceBase::KnotLengthsFieldId;
        bp::scope().attr("DimensionsFieldId") = (int)OSG::SurfaceBase::DimensionsFieldId;
        bp::scope().attr("CurveControlPointsFieldId") = (int)OSG::SurfaceBase::CurveControlPointsFieldId;
        bp::scope().attr("KnotsFieldId") = (int)OSG::SurfaceBase::KnotsFieldId;
        bp::scope().attr("CurvesPerLoopFieldId") = (int)OSG::SurfaceBase::CurvesPerLoopFieldId;
        bp::scope().attr("IsDelaunayFieldId") = (int)OSG::SurfaceBase::IsDelaunayFieldId;
        bp::scope().attr("TextureControlPointsFieldId") = (int)OSG::SurfaceBase::TextureControlPointsFieldId;
        bp::scope().attr("DirtyMaskFieldId") = (int)OSG::SurfaceBase::DirtyMaskFieldId;
        bp::scope().attr("SurfaceGLIdFieldId") = (int)OSG::SurfaceBase::SurfaceGLIdFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SurfaceBase::NextFieldId;
        { //::OSG::SurfaceBase::copyFromBin
        
            typedef void ( ::OSG::SurfaceBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SurfaceBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SurfaceBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SurfaceBase::copyToBin
        
            typedef void ( ::OSG::SurfaceBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SurfaceBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SurfaceBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SurfaceBase::create
        
            typedef ::OSG::SurfaceTransitPtr ( *create_function_type )(  );
            
            SurfaceBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SurfaceBase::create ) );
        
        }
        { //::OSG::SurfaceBase::createDependent
        
            typedef ::OSG::SurfaceTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SurfaceBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SurfaceBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SurfaceBase::createLocal
        
            typedef ::OSG::SurfaceTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SurfaceBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SurfaceBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SurfaceBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SurfaceBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SurfaceBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SurfaceBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SurfaceBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SurfaceBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SurfaceBase::getClassGroupId ) );
        
        }
        { //::OSG::SurfaceBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SurfaceBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SurfaceBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SurfaceBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SurfaceBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SurfaceBase::getClassTypeId ) );
        
        }
        { //::OSG::SurfaceBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SurfaceBase::*getContainerSize_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SurfaceBase::getContainerSize ) );
        
        }
        { //::OSG::SurfaceBase::getControlPoints
        
            typedef ::OSG::GeoVectorProperty * ( ::OSG::SurfaceBase::*getControlPoints_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getControlPoints"
                , getControlPoints_function_type( &::OSG::SurfaceBase::getControlPoints )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getDimU
        
            typedef ::OSG::UInt32 ( ::OSG::SurfaceBase::*getDimU_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getDimU"
                , getDimU_function_type( &::OSG::SurfaceBase::getDimU ) );
        
        }
        { //::OSG::SurfaceBase::getDimV
        
            typedef ::OSG::UInt32 ( ::OSG::SurfaceBase::*getDimV_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getDimV"
                , getDimV_function_type( &::OSG::SurfaceBase::getDimV ) );
        
        }
        { //::OSG::SurfaceBase::getError
        
            typedef ::OSG::Real32 ( ::OSG::SurfaceBase::*getError_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getError"
                , getError_function_type( &::OSG::SurfaceBase::getError ) );
        
        }
        { //::OSG::SurfaceBase::getIsDelaunay
        
            typedef bool ( ::OSG::SurfaceBase::*getIsDelaunay_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getIsDelaunay"
                , getIsDelaunay_function_type( &::OSG::SurfaceBase::getIsDelaunay ) );
        
        }
        { //::OSG::SurfaceBase::getKnotsU
        
            typedef ::OSG::Real32 ( ::OSG::SurfaceBase::*getKnotsU_function_type )( ::OSG::UInt32 const ) const;
            
            SurfaceBase_exposer.def( 
                "getKnotsU"
                , getKnotsU_function_type( &::OSG::SurfaceBase::getKnotsU )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::SurfaceBase::getKnotsV
        
            typedef ::OSG::Real32 ( ::OSG::SurfaceBase::*getKnotsV_function_type )( ::OSG::UInt32 const ) const;
            
            SurfaceBase_exposer.def( 
                "getKnotsV"
                , getKnotsV_function_type( &::OSG::SurfaceBase::getKnotsV )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::SurfaceBase::getSFControlPoints
        
            typedef ::OSG::SFUnrecChildGeoVectorPropertyPtr const * ( ::OSG::SurfaceBase::*getSFControlPoints_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getSFControlPoints"
                , getSFControlPoints_function_type( &::OSG::SurfaceBase::getSFControlPoints )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getSFDimU
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::SurfaceBase::*getSFDimU_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getSFDimU"
                , getSFDimU_function_type( &::OSG::SurfaceBase::getSFDimU )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getSFDimV
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::SurfaceBase::*getSFDimV_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getSFDimV"
                , getSFDimV_function_type( &::OSG::SurfaceBase::getSFDimV )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getSFError
        
            typedef ::OSG::SFReal32 const * ( ::OSG::SurfaceBase::*getSFError_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getSFError"
                , getSFError_function_type( &::OSG::SurfaceBase::getSFError )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getSFIsDelaunay
        
            typedef ::OSG::SFBool const * ( ::OSG::SurfaceBase::*getSFIsDelaunay_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getSFIsDelaunay"
                , getSFIsDelaunay_function_type( &::OSG::SurfaceBase::getSFIsDelaunay )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getSFTextureControlPoints
        
            typedef ::OSG::SFUnrecChildGeoVectorPropertyPtr const * ( ::OSG::SurfaceBase::*getSFTextureControlPoints_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getSFTextureControlPoints"
                , getSFTextureControlPoints_function_type( &::OSG::SurfaceBase::getSFTextureControlPoints )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getTextureControlPoints
        
            typedef ::OSG::GeoVectorProperty * ( ::OSG::SurfaceBase::*getTextureControlPoints_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getTextureControlPoints"
                , getTextureControlPoints_function_type( &::OSG::SurfaceBase::getTextureControlPoints )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SurfaceBase::*getType_function_type )(  ) ;
            
            SurfaceBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SurfaceBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SurfaceBase::*getType_function_type )(  ) const;
            
            SurfaceBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SurfaceBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SurfaceBase::setControlPoints
        
            typedef void ( ::OSG::SurfaceBase::*setControlPoints_function_type )( ::OSG::GeoVectorProperty * const ) ;
            
            SurfaceBase_exposer.def( 
                "setControlPoints"
                , setControlPoints_function_type( &::OSG::SurfaceBase::setControlPoints )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SurfaceBase::setDimU
        
            typedef void ( ::OSG::SurfaceBase::*setDimU_function_type )( ::OSG::UInt32 const ) ;
            
            SurfaceBase_exposer.def( 
                "setDimU"
                , setDimU_function_type( &::OSG::SurfaceBase::setDimU )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SurfaceBase::setDimV
        
            typedef void ( ::OSG::SurfaceBase::*setDimV_function_type )( ::OSG::UInt32 const ) ;
            
            SurfaceBase_exposer.def( 
                "setDimV"
                , setDimV_function_type( &::OSG::SurfaceBase::setDimV )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SurfaceBase::setError
        
            typedef void ( ::OSG::SurfaceBase::*setError_function_type )( ::OSG::Real32 const ) ;
            
            SurfaceBase_exposer.def( 
                "setError"
                , setError_function_type( &::OSG::SurfaceBase::setError )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SurfaceBase::setIsDelaunay
        
            typedef void ( ::OSG::SurfaceBase::*setIsDelaunay_function_type )( bool const ) ;
            
            SurfaceBase_exposer.def( 
                "setIsDelaunay"
                , setIsDelaunay_function_type( &::OSG::SurfaceBase::setIsDelaunay )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SurfaceBase::setTextureControlPoints
        
            typedef void ( ::OSG::SurfaceBase::*setTextureControlPoints_function_type )( ::OSG::GeoVectorProperty * const ) ;
            
            SurfaceBase_exposer.def( 
                "setTextureControlPoints"
                , setTextureControlPoints_function_type( &::OSG::SurfaceBase::setTextureControlPoints )
                , ( bp::arg("value") ) );
        
        }
        SurfaceBase_exposer.staticmethod( "create" );
        SurfaceBase_exposer.staticmethod( "createDependent" );
        SurfaceBase_exposer.staticmethod( "createLocal" );
        SurfaceBase_exposer.staticmethod( "getClassGroupId" );
        SurfaceBase_exposer.staticmethod( "getClassType" );
        SurfaceBase_exposer.staticmethod( "getClassTypeId" );
        SurfaceBase_exposer.def("getMFKnotsU",SurfaceBase_getMFKnotsU);
        SurfaceBase_exposer.def("getMFKnotsV",SurfaceBase_getMFKnotsV);
    }

}
