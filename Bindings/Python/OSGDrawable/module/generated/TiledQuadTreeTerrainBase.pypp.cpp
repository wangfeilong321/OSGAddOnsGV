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
#include "TiledQuadTreeTerrainBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list TiledQuadTreeTerrainBase_getMFHeightTiles(OSG::TiledQuadTreeTerrainBase *self)
{
   boost::python::list result;
   OSG::MFUnrecImagePtr const * mf_data = self->getMFHeightTiles();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::Image::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list TiledQuadTreeTerrainBase_getMFHeightTextures(OSG::TiledQuadTreeTerrainBase *self)
{
   boost::python::list result;
   OSG::MFUnrecMaterialPtr const * mf_data = self->getMFHeightTextures();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::Material::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_TiledQuadTreeTerrainBase_class(){

    { //::OSG::TiledQuadTreeTerrainBase
        typedef bp::class_< OSG::TiledQuadTreeTerrainBase, bp::bases< ::OSG::MaterialGroup >, boost::noncopyable > TiledQuadTreeTerrainBase_exposer_t;
        TiledQuadTreeTerrainBase_exposer_t TiledQuadTreeTerrainBase_exposer = TiledQuadTreeTerrainBase_exposer_t( "TiledQuadTreeTerrainBase", bp::no_init );
        bp::scope TiledQuadTreeTerrainBase_scope( TiledQuadTreeTerrainBase_exposer );
        bp::scope().attr("HeightTilesFieldId") = (int)OSG::TiledQuadTreeTerrainBase::HeightTilesFieldId;
        bp::scope().attr("HeightTexturesFieldId") = (int)OSG::TiledQuadTreeTerrainBase::HeightTexturesFieldId;
        bp::scope().attr("SizeXFieldId") = (int)OSG::TiledQuadTreeTerrainBase::SizeXFieldId;
        bp::scope().attr("SizeYFieldId") = (int)OSG::TiledQuadTreeTerrainBase::SizeYFieldId;
        bp::scope().attr("HeightScaleFieldId") = (int)OSG::TiledQuadTreeTerrainBase::HeightScaleFieldId;
        bp::scope().attr("VertexSpacingFieldId") = (int)OSG::TiledQuadTreeTerrainBase::VertexSpacingFieldId;
        bp::scope().attr("GeoMorphingFieldId") = (int)OSG::TiledQuadTreeTerrainBase::GeoMorphingFieldId;
        bp::scope().attr("DetailFieldId") = (int)OSG::TiledQuadTreeTerrainBase::DetailFieldId;
        bp::scope().attr("CurrentXFieldId") = (int)OSG::TiledQuadTreeTerrainBase::CurrentXFieldId;
        bp::scope().attr("CurrentYFieldId") = (int)OSG::TiledQuadTreeTerrainBase::CurrentYFieldId;
        bp::scope().attr("SizeROIFieldId") = (int)OSG::TiledQuadTreeTerrainBase::SizeROIFieldId;
        bp::scope().attr("UpdateFieldId") = (int)OSG::TiledQuadTreeTerrainBase::UpdateFieldId;
        bp::scope().attr("UpdateTerrainFieldId") = (int)OSG::TiledQuadTreeTerrainBase::UpdateTerrainFieldId;
        bp::scope().attr("PerPixelLightingFieldId") = (int)OSG::TiledQuadTreeTerrainBase::PerPixelLightingFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TiledQuadTreeTerrainBase::NextFieldId;
        { //::OSG::TiledQuadTreeTerrainBase::assignHeightTextures
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*assignHeightTextures_function_type )( ::OSG::MFUnrecMaterialPtr const & ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "assignHeightTextures"
                , assignHeightTextures_function_type( &::OSG::TiledQuadTreeTerrainBase::assignHeightTextures )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::assignHeightTiles
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*assignHeightTiles_function_type )( ::OSG::MFUnrecImagePtr const & ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "assignHeightTiles"
                , assignHeightTiles_function_type( &::OSG::TiledQuadTreeTerrainBase::assignHeightTiles )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::clearHeightTextures
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*clearHeightTextures_function_type )(  ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "clearHeightTextures"
                , clearHeightTextures_function_type( &::OSG::TiledQuadTreeTerrainBase::clearHeightTextures ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::clearHeightTiles
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*clearHeightTiles_function_type )(  ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "clearHeightTiles"
                , clearHeightTiles_function_type( &::OSG::TiledQuadTreeTerrainBase::clearHeightTiles ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::copyFromBin
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TiledQuadTreeTerrainBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::copyToBin
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TiledQuadTreeTerrainBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::create
        
            typedef ::OSG::TiledQuadTreeTerrainTransitPtr ( *create_function_type )(  );
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::TiledQuadTreeTerrainBase::create ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::createDependent
        
            typedef ::OSG::TiledQuadTreeTerrainTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TiledQuadTreeTerrainBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::createLocal
        
            typedef ::OSG::TiledQuadTreeTerrainTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TiledQuadTreeTerrainBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TiledQuadTreeTerrainBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TiledQuadTreeTerrainBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TiledQuadTreeTerrainBase::getClassGroupId ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TiledQuadTreeTerrainBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TiledQuadTreeTerrainBase::getClassTypeId ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TiledQuadTreeTerrainBase::*getContainerSize_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TiledQuadTreeTerrainBase::getContainerSize ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getCurrentX
        
            typedef ::OSG::Int32 ( ::OSG::TiledQuadTreeTerrainBase::*getCurrentX_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getCurrentX"
                , getCurrentX_function_type( &::OSG::TiledQuadTreeTerrainBase::getCurrentX ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getCurrentY
        
            typedef ::OSG::Int32 ( ::OSG::TiledQuadTreeTerrainBase::*getCurrentY_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getCurrentY"
                , getCurrentY_function_type( &::OSG::TiledQuadTreeTerrainBase::getCurrentY ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getDetail
        
            typedef ::OSG::Real32 ( ::OSG::TiledQuadTreeTerrainBase::*getDetail_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getDetail"
                , getDetail_function_type( &::OSG::TiledQuadTreeTerrainBase::getDetail ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getGeoMorphing
        
            typedef bool ( ::OSG::TiledQuadTreeTerrainBase::*getGeoMorphing_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getGeoMorphing"
                , getGeoMorphing_function_type( &::OSG::TiledQuadTreeTerrainBase::getGeoMorphing ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getHeightScale
        
            typedef ::OSG::Real32 ( ::OSG::TiledQuadTreeTerrainBase::*getHeightScale_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getHeightScale"
                , getHeightScale_function_type( &::OSG::TiledQuadTreeTerrainBase::getHeightScale ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getHeightTextures
        
            typedef ::OSG::Material * ( ::OSG::TiledQuadTreeTerrainBase::*getHeightTextures_function_type )( ::OSG::UInt32 const ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getHeightTextures"
                , getHeightTextures_function_type( &::OSG::TiledQuadTreeTerrainBase::getHeightTextures )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getHeightTiles
        
            typedef ::OSG::Image * ( ::OSG::TiledQuadTreeTerrainBase::*getHeightTiles_function_type )( ::OSG::UInt32 const ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getHeightTiles"
                , getHeightTiles_function_type( &::OSG::TiledQuadTreeTerrainBase::getHeightTiles )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getPerPixelLighting
        
            typedef bool ( ::OSG::TiledQuadTreeTerrainBase::*getPerPixelLighting_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getPerPixelLighting"
                , getPerPixelLighting_function_type( &::OSG::TiledQuadTreeTerrainBase::getPerPixelLighting ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFCurrentX
        
            typedef ::OSG::SFInt32 const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFCurrentX_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFCurrentX"
                , getSFCurrentX_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFCurrentX )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFCurrentY
        
            typedef ::OSG::SFInt32 const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFCurrentY_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFCurrentY"
                , getSFCurrentY_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFCurrentY )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFDetail
        
            typedef ::OSG::SFReal32 const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFDetail_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFDetail"
                , getSFDetail_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFDetail )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFGeoMorphing
        
            typedef ::OSG::SFBool const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFGeoMorphing_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFGeoMorphing"
                , getSFGeoMorphing_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFGeoMorphing )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFHeightScale
        
            typedef ::OSG::SFReal32 const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFHeightScale_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFHeightScale"
                , getSFHeightScale_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFHeightScale )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFPerPixelLighting
        
            typedef ::OSG::SFBool const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFPerPixelLighting_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFPerPixelLighting"
                , getSFPerPixelLighting_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFPerPixelLighting )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFSizeROI
        
            typedef ::OSG::SFInt32 const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFSizeROI_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFSizeROI"
                , getSFSizeROI_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFSizeROI )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFSizeX
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFSizeX_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFSizeX"
                , getSFSizeX_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFSizeX )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFSizeY
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFSizeY_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFSizeY"
                , getSFSizeY_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFSizeY )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFUpdate
        
            typedef ::OSG::SFBool const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFUpdate_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFUpdate"
                , getSFUpdate_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFUpdate )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFUpdateTerrain
        
            typedef ::OSG::SFBool const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFUpdateTerrain_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFUpdateTerrain"
                , getSFUpdateTerrain_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFUpdateTerrain )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSFVertexSpacing
        
            typedef ::OSG::SFReal32 const * ( ::OSG::TiledQuadTreeTerrainBase::*getSFVertexSpacing_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSFVertexSpacing"
                , getSFVertexSpacing_function_type( &::OSG::TiledQuadTreeTerrainBase::getSFVertexSpacing )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSizeROI
        
            typedef ::OSG::Int32 ( ::OSG::TiledQuadTreeTerrainBase::*getSizeROI_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSizeROI"
                , getSizeROI_function_type( &::OSG::TiledQuadTreeTerrainBase::getSizeROI ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSizeX
        
            typedef ::OSG::UInt32 ( ::OSG::TiledQuadTreeTerrainBase::*getSizeX_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSizeX"
                , getSizeX_function_type( &::OSG::TiledQuadTreeTerrainBase::getSizeX ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getSizeY
        
            typedef ::OSG::UInt32 ( ::OSG::TiledQuadTreeTerrainBase::*getSizeY_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getSizeY"
                , getSizeY_function_type( &::OSG::TiledQuadTreeTerrainBase::getSizeY ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TiledQuadTreeTerrainBase::*getType_function_type )(  ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TiledQuadTreeTerrainBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TiledQuadTreeTerrainBase::*getType_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TiledQuadTreeTerrainBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getUpdate
        
            typedef bool ( ::OSG::TiledQuadTreeTerrainBase::*getUpdate_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getUpdate"
                , getUpdate_function_type( &::OSG::TiledQuadTreeTerrainBase::getUpdate ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getUpdateTerrain
        
            typedef bool ( ::OSG::TiledQuadTreeTerrainBase::*getUpdateTerrain_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getUpdateTerrain"
                , getUpdateTerrain_function_type( &::OSG::TiledQuadTreeTerrainBase::getUpdateTerrain ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::getVertexSpacing
        
            typedef ::OSG::Real32 ( ::OSG::TiledQuadTreeTerrainBase::*getVertexSpacing_function_type )(  ) const;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "getVertexSpacing"
                , getVertexSpacing_function_type( &::OSG::TiledQuadTreeTerrainBase::getVertexSpacing ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::pushToHeightTextures
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*pushToHeightTextures_function_type )( ::OSG::Material * const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "pushToHeightTextures"
                , pushToHeightTextures_function_type( &::OSG::TiledQuadTreeTerrainBase::pushToHeightTextures )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::pushToHeightTiles
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*pushToHeightTiles_function_type )( ::OSG::Image * const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "pushToHeightTiles"
                , pushToHeightTiles_function_type( &::OSG::TiledQuadTreeTerrainBase::pushToHeightTiles )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::removeFromHeightTextures
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*removeFromHeightTextures_function_type )( ::OSG::UInt32 ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "removeFromHeightTextures"
                , removeFromHeightTextures_function_type( &::OSG::TiledQuadTreeTerrainBase::removeFromHeightTextures )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::removeFromHeightTiles
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*removeFromHeightTiles_function_type )( ::OSG::UInt32 ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "removeFromHeightTiles"
                , removeFromHeightTiles_function_type( &::OSG::TiledQuadTreeTerrainBase::removeFromHeightTiles )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::removeObjFromHeightTextures
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*removeObjFromHeightTextures_function_type )( ::OSG::Material * const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "removeObjFromHeightTextures"
                , removeObjFromHeightTextures_function_type( &::OSG::TiledQuadTreeTerrainBase::removeObjFromHeightTextures )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::removeObjFromHeightTiles
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*removeObjFromHeightTiles_function_type )( ::OSG::Image * const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "removeObjFromHeightTiles"
                , removeObjFromHeightTiles_function_type( &::OSG::TiledQuadTreeTerrainBase::removeObjFromHeightTiles )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setCurrentX
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setCurrentX_function_type )( ::OSG::Int32 const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setCurrentX"
                , setCurrentX_function_type( &::OSG::TiledQuadTreeTerrainBase::setCurrentX )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setCurrentY
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setCurrentY_function_type )( ::OSG::Int32 const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setCurrentY"
                , setCurrentY_function_type( &::OSG::TiledQuadTreeTerrainBase::setCurrentY )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setDetail
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setDetail_function_type )( ::OSG::Real32 const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setDetail"
                , setDetail_function_type( &::OSG::TiledQuadTreeTerrainBase::setDetail )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setGeoMorphing
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setGeoMorphing_function_type )( bool const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setGeoMorphing"
                , setGeoMorphing_function_type( &::OSG::TiledQuadTreeTerrainBase::setGeoMorphing )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setHeightScale
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setHeightScale_function_type )( ::OSG::Real32 const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setHeightScale"
                , setHeightScale_function_type( &::OSG::TiledQuadTreeTerrainBase::setHeightScale )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setPerPixelLighting
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setPerPixelLighting_function_type )( bool const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setPerPixelLighting"
                , setPerPixelLighting_function_type( &::OSG::TiledQuadTreeTerrainBase::setPerPixelLighting )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setSizeROI
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setSizeROI_function_type )( ::OSG::Int32 const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setSizeROI"
                , setSizeROI_function_type( &::OSG::TiledQuadTreeTerrainBase::setSizeROI )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setSizeX
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setSizeX_function_type )( ::OSG::UInt32 const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setSizeX"
                , setSizeX_function_type( &::OSG::TiledQuadTreeTerrainBase::setSizeX )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setSizeY
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setSizeY_function_type )( ::OSG::UInt32 const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setSizeY"
                , setSizeY_function_type( &::OSG::TiledQuadTreeTerrainBase::setSizeY )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setUpdate
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setUpdate_function_type )( bool const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setUpdate"
                , setUpdate_function_type( &::OSG::TiledQuadTreeTerrainBase::setUpdate )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setUpdateTerrain
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setUpdateTerrain_function_type )( bool const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setUpdateTerrain"
                , setUpdateTerrain_function_type( &::OSG::TiledQuadTreeTerrainBase::setUpdateTerrain )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TiledQuadTreeTerrainBase::setVertexSpacing
        
            typedef void ( ::OSG::TiledQuadTreeTerrainBase::*setVertexSpacing_function_type )( ::OSG::Real32 const ) ;
            
            TiledQuadTreeTerrainBase_exposer.def( 
                "setVertexSpacing"
                , setVertexSpacing_function_type( &::OSG::TiledQuadTreeTerrainBase::setVertexSpacing )
                , ( bp::arg("value") ) );
        
        }
        TiledQuadTreeTerrainBase_exposer.staticmethod( "create" );
        TiledQuadTreeTerrainBase_exposer.staticmethod( "createDependent" );
        TiledQuadTreeTerrainBase_exposer.staticmethod( "createLocal" );
        TiledQuadTreeTerrainBase_exposer.staticmethod( "getClassGroupId" );
        TiledQuadTreeTerrainBase_exposer.staticmethod( "getClassType" );
        TiledQuadTreeTerrainBase_exposer.staticmethod( "getClassTypeId" );
        TiledQuadTreeTerrainBase_exposer.def("getMFHeightTiles",TiledQuadTreeTerrainBase_getMFHeightTiles);
        TiledQuadTreeTerrainBase_exposer.def("getMFHeightTextures",TiledQuadTreeTerrainBase_getMFHeightTextures);
    }

}
