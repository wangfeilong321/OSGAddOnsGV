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
#include "QuadTreeTerrainBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list QuadTreeTerrainBase_getMFHeightError(OSG::QuadTreeTerrainBase *self)
{
   boost::python::list result;
   OSG::MFReal32 const * mf_data = self->getMFHeightError();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list QuadTreeTerrainBase_getMFHeightQuad(OSG::QuadTreeTerrainBase *self)
{
   boost::python::list result;
   OSG::MFReal32 const * mf_data = self->getMFHeightQuad();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_QuadTreeTerrainBase_class(){

    { //::OSG::QuadTreeTerrainBase
        typedef bp::class_< OSG::QuadTreeTerrainBase, bp::bases< OSG::Geometry >, boost::noncopyable > QuadTreeTerrainBase_exposer_t;
        QuadTreeTerrainBase_exposer_t QuadTreeTerrainBase_exposer = QuadTreeTerrainBase_exposer_t( "QuadTreeTerrainBase", bp::no_init );
        bp::scope QuadTreeTerrainBase_scope( QuadTreeTerrainBase_exposer );
        bp::scope().attr("HeightDataFieldId") = (int)OSG::QuadTreeTerrainBase::HeightDataFieldId;
        bp::scope().attr("HeightScaleFieldId") = (int)OSG::QuadTreeTerrainBase::HeightScaleFieldId;
        bp::scope().attr("HeightErrorFieldId") = (int)OSG::QuadTreeTerrainBase::HeightErrorFieldId;
        bp::scope().attr("HeightQuadFieldId") = (int)OSG::QuadTreeTerrainBase::HeightQuadFieldId;
        bp::scope().attr("WidthFieldId") = (int)OSG::QuadTreeTerrainBase::WidthFieldId;
        bp::scope().attr("LevelFieldId") = (int)OSG::QuadTreeTerrainBase::LevelFieldId;
        bp::scope().attr("DetailFieldId") = (int)OSG::QuadTreeTerrainBase::DetailFieldId;
        bp::scope().attr("BorderDetailFieldId") = (int)OSG::QuadTreeTerrainBase::BorderDetailFieldId;
        bp::scope().attr("VertexSpacingFieldId") = (int)OSG::QuadTreeTerrainBase::VertexSpacingFieldId;
        bp::scope().attr("HeightVerticesFieldId") = (int)OSG::QuadTreeTerrainBase::HeightVerticesFieldId;
        bp::scope().attr("GeoMorphingFieldId") = (int)OSG::QuadTreeTerrainBase::GeoMorphingFieldId;
        bp::scope().attr("BoundMinFieldId") = (int)OSG::QuadTreeTerrainBase::BoundMinFieldId;
        bp::scope().attr("BoundMaxFieldId") = (int)OSG::QuadTreeTerrainBase::BoundMaxFieldId;
        bp::scope().attr("EyePointFieldId") = (int)OSG::QuadTreeTerrainBase::EyePointFieldId;
        bp::scope().attr("EyeHeightFieldId") = (int)OSG::QuadTreeTerrainBase::EyeHeightFieldId;
        bp::scope().attr("EyePointValidFieldId") = (int)OSG::QuadTreeTerrainBase::EyePointValidFieldId;
        bp::scope().attr("OriginXFieldId") = (int)OSG::QuadTreeTerrainBase::OriginXFieldId;
        bp::scope().attr("OriginYFieldId") = (int)OSG::QuadTreeTerrainBase::OriginYFieldId;
        bp::scope().attr("OriginTexXFieldId") = (int)OSG::QuadTreeTerrainBase::OriginTexXFieldId;
        bp::scope().attr("OriginTexYFieldId") = (int)OSG::QuadTreeTerrainBase::OriginTexYFieldId;
        bp::scope().attr("TexSpacingFieldId") = (int)OSG::QuadTreeTerrainBase::TexSpacingFieldId;
        bp::scope().attr("TexYSpacingFieldId") = (int)OSG::QuadTreeTerrainBase::TexYSpacingFieldId;
        bp::scope().attr("UpdateTerrainFieldId") = (int)OSG::QuadTreeTerrainBase::UpdateTerrainFieldId;
        bp::scope().attr("PerPixelLightingFieldId") = (int)OSG::QuadTreeTerrainBase::PerPixelLightingFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::QuadTreeTerrainBase::NextFieldId;
        { //::OSG::QuadTreeTerrainBase::copyFromBin
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::QuadTreeTerrainBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::copyToBin
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::QuadTreeTerrainBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::create
        
            typedef ::OSG::QuadTreeTerrainTransitPtr ( *create_function_type )(  );
            
            QuadTreeTerrainBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::QuadTreeTerrainBase::create ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::createDependent
        
            typedef ::OSG::QuadTreeTerrainTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            QuadTreeTerrainBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::QuadTreeTerrainBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::createLocal
        
            typedef ::OSG::QuadTreeTerrainTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            QuadTreeTerrainBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::QuadTreeTerrainBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::QuadTreeTerrainBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::QuadTreeTerrainBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getBorderDetail
        
            typedef ::OSG::Int32 ( ::OSG::QuadTreeTerrainBase::*getBorderDetail_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getBorderDetail"
                , getBorderDetail_function_type( &::OSG::QuadTreeTerrainBase::getBorderDetail ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            QuadTreeTerrainBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::QuadTreeTerrainBase::getClassGroupId ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            QuadTreeTerrainBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::QuadTreeTerrainBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            QuadTreeTerrainBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::QuadTreeTerrainBase::getClassTypeId ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::QuadTreeTerrainBase::*getContainerSize_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::QuadTreeTerrainBase::getContainerSize ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getDetail
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getDetail_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getDetail"
                , getDetail_function_type( &::OSG::QuadTreeTerrainBase::getDetail ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getEyePoint
        
            typedef ::OSG::Pnt3f const & ( ::OSG::QuadTreeTerrainBase::*getEyePoint_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getEyePoint"
                , getEyePoint_function_type( &::OSG::QuadTreeTerrainBase::getEyePoint )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getEyePointValid
        
            typedef bool ( ::OSG::QuadTreeTerrainBase::*getEyePointValid_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getEyePointValid"
                , getEyePointValid_function_type( &::OSG::QuadTreeTerrainBase::getEyePointValid ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getGeoMorphing
        
            typedef bool ( ::OSG::QuadTreeTerrainBase::*getGeoMorphing_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getGeoMorphing"
                , getGeoMorphing_function_type( &::OSG::QuadTreeTerrainBase::getGeoMorphing ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getHeightData
        
            typedef ::OSG::Image * ( ::OSG::QuadTreeTerrainBase::*getHeightData_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getHeightData"
                , getHeightData_function_type( &::OSG::QuadTreeTerrainBase::getHeightData )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getHeightError
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getHeightError_function_type )( ::OSG::UInt32 const ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getHeightError"
                , getHeightError_function_type( &::OSG::QuadTreeTerrainBase::getHeightError )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getHeightQuad
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getHeightQuad_function_type )( ::OSG::UInt32 const ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getHeightQuad"
                , getHeightQuad_function_type( &::OSG::QuadTreeTerrainBase::getHeightQuad )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getHeightScale
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getHeightScale_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getHeightScale"
                , getHeightScale_function_type( &::OSG::QuadTreeTerrainBase::getHeightScale ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getOriginTexX
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getOriginTexX_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getOriginTexX"
                , getOriginTexX_function_type( &::OSG::QuadTreeTerrainBase::getOriginTexX ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getOriginTexY
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getOriginTexY_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getOriginTexY"
                , getOriginTexY_function_type( &::OSG::QuadTreeTerrainBase::getOriginTexY ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getOriginX
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getOriginX_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getOriginX"
                , getOriginX_function_type( &::OSG::QuadTreeTerrainBase::getOriginX ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getOriginY
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getOriginY_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getOriginY"
                , getOriginY_function_type( &::OSG::QuadTreeTerrainBase::getOriginY ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getPerPixelLighting
        
            typedef bool ( ::OSG::QuadTreeTerrainBase::*getPerPixelLighting_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getPerPixelLighting"
                , getPerPixelLighting_function_type( &::OSG::QuadTreeTerrainBase::getPerPixelLighting ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFBorderDetail
        
            typedef ::OSG::SFInt32 const * ( ::OSG::QuadTreeTerrainBase::*getSFBorderDetail_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFBorderDetail"
                , getSFBorderDetail_function_type( &::OSG::QuadTreeTerrainBase::getSFBorderDetail )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFDetail
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFDetail_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFDetail"
                , getSFDetail_function_type( &::OSG::QuadTreeTerrainBase::getSFDetail )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFEyePoint
        
            typedef ::OSG::SFPnt3f const * ( ::OSG::QuadTreeTerrainBase::*getSFEyePoint_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFEyePoint"
                , getSFEyePoint_function_type( &::OSG::QuadTreeTerrainBase::getSFEyePoint )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFEyePointValid
        
            typedef ::OSG::SFBool const * ( ::OSG::QuadTreeTerrainBase::*getSFEyePointValid_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFEyePointValid"
                , getSFEyePointValid_function_type( &::OSG::QuadTreeTerrainBase::getSFEyePointValid )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFGeoMorphing
        
            typedef ::OSG::SFBool const * ( ::OSG::QuadTreeTerrainBase::*getSFGeoMorphing_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFGeoMorphing"
                , getSFGeoMorphing_function_type( &::OSG::QuadTreeTerrainBase::getSFGeoMorphing )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFHeightData
        
            typedef ::OSG::SFUnrecImagePtr const * ( ::OSG::QuadTreeTerrainBase::*getSFHeightData_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFHeightData"
                , getSFHeightData_function_type( &::OSG::QuadTreeTerrainBase::getSFHeightData )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFHeightScale
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFHeightScale_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFHeightScale"
                , getSFHeightScale_function_type( &::OSG::QuadTreeTerrainBase::getSFHeightScale )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFOriginTexX
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFOriginTexX_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFOriginTexX"
                , getSFOriginTexX_function_type( &::OSG::QuadTreeTerrainBase::getSFOriginTexX )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFOriginTexY
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFOriginTexY_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFOriginTexY"
                , getSFOriginTexY_function_type( &::OSG::QuadTreeTerrainBase::getSFOriginTexY )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFOriginX
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFOriginX_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFOriginX"
                , getSFOriginX_function_type( &::OSG::QuadTreeTerrainBase::getSFOriginX )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFOriginY
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFOriginY_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFOriginY"
                , getSFOriginY_function_type( &::OSG::QuadTreeTerrainBase::getSFOriginY )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFPerPixelLighting
        
            typedef ::OSG::SFBool const * ( ::OSG::QuadTreeTerrainBase::*getSFPerPixelLighting_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFPerPixelLighting"
                , getSFPerPixelLighting_function_type( &::OSG::QuadTreeTerrainBase::getSFPerPixelLighting )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFTexSpacing
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFTexSpacing_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFTexSpacing"
                , getSFTexSpacing_function_type( &::OSG::QuadTreeTerrainBase::getSFTexSpacing )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFTexYSpacing
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFTexYSpacing_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFTexYSpacing"
                , getSFTexYSpacing_function_type( &::OSG::QuadTreeTerrainBase::getSFTexYSpacing )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFUpdateTerrain
        
            typedef ::OSG::SFBool const * ( ::OSG::QuadTreeTerrainBase::*getSFUpdateTerrain_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFUpdateTerrain"
                , getSFUpdateTerrain_function_type( &::OSG::QuadTreeTerrainBase::getSFUpdateTerrain )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getSFVertexSpacing
        
            typedef ::OSG::SFReal32 const * ( ::OSG::QuadTreeTerrainBase::*getSFVertexSpacing_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getSFVertexSpacing"
                , getSFVertexSpacing_function_type( &::OSG::QuadTreeTerrainBase::getSFVertexSpacing )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getTexSpacing
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getTexSpacing_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getTexSpacing"
                , getTexSpacing_function_type( &::OSG::QuadTreeTerrainBase::getTexSpacing ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getTexYSpacing
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getTexYSpacing_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getTexYSpacing"
                , getTexYSpacing_function_type( &::OSG::QuadTreeTerrainBase::getTexYSpacing ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::QuadTreeTerrainBase::*getType_function_type )(  ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::QuadTreeTerrainBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::QuadTreeTerrainBase::*getType_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::QuadTreeTerrainBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::QuadTreeTerrainBase::getUpdateTerrain
        
            typedef bool ( ::OSG::QuadTreeTerrainBase::*getUpdateTerrain_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getUpdateTerrain"
                , getUpdateTerrain_function_type( &::OSG::QuadTreeTerrainBase::getUpdateTerrain ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::getVertexSpacing
        
            typedef ::OSG::Real32 ( ::OSG::QuadTreeTerrainBase::*getVertexSpacing_function_type )(  ) const;
            
            QuadTreeTerrainBase_exposer.def( 
                "getVertexSpacing"
                , getVertexSpacing_function_type( &::OSG::QuadTreeTerrainBase::getVertexSpacing ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setBorderDetail
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setBorderDetail_function_type )( ::OSG::Int32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setBorderDetail"
                , setBorderDetail_function_type( &::OSG::QuadTreeTerrainBase::setBorderDetail )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setDetail
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setDetail_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setDetail"
                , setDetail_function_type( &::OSG::QuadTreeTerrainBase::setDetail )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setEyePoint
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setEyePoint_function_type )( ::OSG::Pnt3f const & ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setEyePoint"
                , setEyePoint_function_type( &::OSG::QuadTreeTerrainBase::setEyePoint )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setEyePointValid
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setEyePointValid_function_type )( bool const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setEyePointValid"
                , setEyePointValid_function_type( &::OSG::QuadTreeTerrainBase::setEyePointValid )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setGeoMorphing
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setGeoMorphing_function_type )( bool const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setGeoMorphing"
                , setGeoMorphing_function_type( &::OSG::QuadTreeTerrainBase::setGeoMorphing )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setHeightData
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setHeightData_function_type )( ::OSG::Image * const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setHeightData"
                , setHeightData_function_type( &::OSG::QuadTreeTerrainBase::setHeightData )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setHeightScale
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setHeightScale_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setHeightScale"
                , setHeightScale_function_type( &::OSG::QuadTreeTerrainBase::setHeightScale )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setOriginTexX
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setOriginTexX_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setOriginTexX"
                , setOriginTexX_function_type( &::OSG::QuadTreeTerrainBase::setOriginTexX )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setOriginTexY
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setOriginTexY_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setOriginTexY"
                , setOriginTexY_function_type( &::OSG::QuadTreeTerrainBase::setOriginTexY )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setOriginX
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setOriginX_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setOriginX"
                , setOriginX_function_type( &::OSG::QuadTreeTerrainBase::setOriginX )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setOriginY
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setOriginY_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setOriginY"
                , setOriginY_function_type( &::OSG::QuadTreeTerrainBase::setOriginY )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setPerPixelLighting
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setPerPixelLighting_function_type )( bool const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setPerPixelLighting"
                , setPerPixelLighting_function_type( &::OSG::QuadTreeTerrainBase::setPerPixelLighting )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setTexSpacing
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setTexSpacing_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setTexSpacing"
                , setTexSpacing_function_type( &::OSG::QuadTreeTerrainBase::setTexSpacing )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setTexYSpacing
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setTexYSpacing_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setTexYSpacing"
                , setTexYSpacing_function_type( &::OSG::QuadTreeTerrainBase::setTexYSpacing )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setUpdateTerrain
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setUpdateTerrain_function_type )( bool const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setUpdateTerrain"
                , setUpdateTerrain_function_type( &::OSG::QuadTreeTerrainBase::setUpdateTerrain )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::QuadTreeTerrainBase::setVertexSpacing
        
            typedef void ( ::OSG::QuadTreeTerrainBase::*setVertexSpacing_function_type )( ::OSG::Real32 const ) ;
            
            QuadTreeTerrainBase_exposer.def( 
                "setVertexSpacing"
                , setVertexSpacing_function_type( &::OSG::QuadTreeTerrainBase::setVertexSpacing )
                , ( bp::arg("value") ) );
        
        }
        QuadTreeTerrainBase_exposer.staticmethod( "create" );
        QuadTreeTerrainBase_exposer.staticmethod( "createDependent" );
        QuadTreeTerrainBase_exposer.staticmethod( "createLocal" );
        QuadTreeTerrainBase_exposer.staticmethod( "getClassGroupId" );
        QuadTreeTerrainBase_exposer.staticmethod( "getClassType" );
        QuadTreeTerrainBase_exposer.staticmethod( "getClassTypeId" );
        QuadTreeTerrainBase_exposer.def("getMFHeightError",QuadTreeTerrainBase_getMFHeightError);
        QuadTreeTerrainBase_exposer.def("getMFHeightQuad",QuadTreeTerrainBase_getMFHeightQuad);
    }

}
