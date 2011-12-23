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
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShaderShadowMapEngineDataBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ShaderShadowMapEngineDataBase_getMFRenderTargets(OSG::ShaderShadowMapEngineDataBase *self)
{
   boost::python::list result;
   OSG::MFUnrecFrameBufferObjectPtr const * mf_data = self->getMFRenderTargets();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::FrameBufferObject::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list ShaderShadowMapEngineDataBase_getMFShadowTexBuffers(OSG::ShaderShadowMapEngineDataBase *self)
{
   boost::python::list result;
   OSG::MFUnrecTextureBufferPtr const * mf_data = self->getMFShadowTexBuffers();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::TextureBuffer::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list ShaderShadowMapEngineDataBase_getMFLightPassMaterials(OSG::ShaderShadowMapEngineDataBase *self)
{
   boost::python::list result;
   OSG::MFUnrecChunkMaterialPtr const * mf_data = self->getMFLightPassMaterials();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::ChunkMaterial::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_ShaderShadowMapEngineDataBase_class(){

    { //::OSG::ShaderShadowMapEngineDataBase
        typedef bp::class_< OSG::ShaderShadowMapEngineDataBase, bp::bases< OSG::StageData >, boost::noncopyable > ShaderShadowMapEngineDataBase_exposer_t;
        ShaderShadowMapEngineDataBase_exposer_t ShaderShadowMapEngineDataBase_exposer = ShaderShadowMapEngineDataBase_exposer_t( "ShaderShadowMapEngineDataBase", bp::no_init );
        bp::scope ShaderShadowMapEngineDataBase_scope( ShaderShadowMapEngineDataBase_exposer );
        bp::scope().attr("RenderTargetsFieldId") = (int)OSG::ShaderShadowMapEngineDataBase::RenderTargetsFieldId;
        bp::scope().attr("ShadowTexBuffersFieldId") = (int)OSG::ShaderShadowMapEngineDataBase::ShadowTexBuffersFieldId;
        bp::scope().attr("ShadowTexChunkFieldId") = (int)OSG::ShaderShadowMapEngineDataBase::ShadowTexChunkFieldId;
        bp::scope().attr("ShadowTexImageFieldId") = (int)OSG::ShaderShadowMapEngineDataBase::ShadowTexImageFieldId;
        bp::scope().attr("LightPassMaterialsFieldId") = (int)OSG::ShaderShadowMapEngineDataBase::LightPassMaterialsFieldId;
        bp::scope().attr("BackgroundFieldId") = (int)OSG::ShaderShadowMapEngineDataBase::BackgroundFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderShadowMapEngineDataBase::NextFieldId;
        { //::OSG::ShaderShadowMapEngineDataBase::assignLightPassMaterials
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*assignLightPassMaterials_function_type )( ::OSG::MFUnrecChunkMaterialPtr const & ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "assignLightPassMaterials"
                , assignLightPassMaterials_function_type( &::OSG::ShaderShadowMapEngineDataBase::assignLightPassMaterials )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::assignRenderTargets
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*assignRenderTargets_function_type )( ::OSG::MFUnrecFrameBufferObjectPtr const & ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "assignRenderTargets"
                , assignRenderTargets_function_type( &::OSG::ShaderShadowMapEngineDataBase::assignRenderTargets )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::assignShadowTexBuffers
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*assignShadowTexBuffers_function_type )( ::OSG::MFUnrecTextureBufferPtr const & ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "assignShadowTexBuffers"
                , assignShadowTexBuffers_function_type( &::OSG::ShaderShadowMapEngineDataBase::assignShadowTexBuffers )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::clearLightPassMaterials
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*clearLightPassMaterials_function_type )(  ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "clearLightPassMaterials"
                , clearLightPassMaterials_function_type( &::OSG::ShaderShadowMapEngineDataBase::clearLightPassMaterials ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::clearRenderTargets
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*clearRenderTargets_function_type )(  ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "clearRenderTargets"
                , clearRenderTargets_function_type( &::OSG::ShaderShadowMapEngineDataBase::clearRenderTargets ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::clearShadowTexBuffers
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*clearShadowTexBuffers_function_type )(  ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "clearShadowTexBuffers"
                , clearShadowTexBuffers_function_type( &::OSG::ShaderShadowMapEngineDataBase::clearShadowTexBuffers ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::copyFromBin
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderShadowMapEngineDataBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::copyToBin
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderShadowMapEngineDataBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::create
        
            typedef ::OSG::ShaderShadowMapEngineDataTransitPtr ( *create_function_type )(  );
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderShadowMapEngineDataBase::create ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::createDependent
        
            typedef ::OSG::ShaderShadowMapEngineDataTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderShadowMapEngineDataBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::createLocal
        
            typedef ::OSG::ShaderShadowMapEngineDataTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderShadowMapEngineDataBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getBackground
        
            typedef ::OSG::Background * ( ::OSG::ShaderShadowMapEngineDataBase::*getBackground_function_type )(  ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getBackground"
                , getBackground_function_type( &::OSG::ShaderShadowMapEngineDataBase::getBackground )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderShadowMapEngineDataBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderShadowMapEngineDataBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderShadowMapEngineDataBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderShadowMapEngineDataBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderShadowMapEngineDataBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderShadowMapEngineDataBase::*getContainerSize_function_type )(  ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderShadowMapEngineDataBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getLightPassMaterials
        
            typedef ::OSG::ChunkMaterial * ( ::OSG::ShaderShadowMapEngineDataBase::*getLightPassMaterials_function_type )( ::OSG::UInt32 const ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getLightPassMaterials"
                , getLightPassMaterials_function_type( &::OSG::ShaderShadowMapEngineDataBase::getLightPassMaterials )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getRenderTargets
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::ShaderShadowMapEngineDataBase::*getRenderTargets_function_type )( ::OSG::UInt32 const ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getRenderTargets"
                , getRenderTargets_function_type( &::OSG::ShaderShadowMapEngineDataBase::getRenderTargets )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getSFBackground
        
            typedef ::OSG::SFUnrecBackgroundPtr const * ( ::OSG::ShaderShadowMapEngineDataBase::*getSFBackground_function_type )(  ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getSFBackground"
                , getSFBackground_function_type( &::OSG::ShaderShadowMapEngineDataBase::getSFBackground )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getSFShadowTexChunk
        
            typedef ::OSG::SFUnrecTextureObjChunkPtr const * ( ::OSG::ShaderShadowMapEngineDataBase::*getSFShadowTexChunk_function_type )(  ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getSFShadowTexChunk"
                , getSFShadowTexChunk_function_type( &::OSG::ShaderShadowMapEngineDataBase::getSFShadowTexChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getSFShadowTexImage
        
            typedef ::OSG::SFUnrecImagePtr const * ( ::OSG::ShaderShadowMapEngineDataBase::*getSFShadowTexImage_function_type )(  ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getSFShadowTexImage"
                , getSFShadowTexImage_function_type( &::OSG::ShaderShadowMapEngineDataBase::getSFShadowTexImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getShadowTexBuffers
        
            typedef ::OSG::TextureBuffer * ( ::OSG::ShaderShadowMapEngineDataBase::*getShadowTexBuffers_function_type )( ::OSG::UInt32 const ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getShadowTexBuffers"
                , getShadowTexBuffers_function_type( &::OSG::ShaderShadowMapEngineDataBase::getShadowTexBuffers )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getShadowTexChunk
        
            typedef ::OSG::TextureObjChunk * ( ::OSG::ShaderShadowMapEngineDataBase::*getShadowTexChunk_function_type )(  ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getShadowTexChunk"
                , getShadowTexChunk_function_type( &::OSG::ShaderShadowMapEngineDataBase::getShadowTexChunk )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getShadowTexImage
        
            typedef ::OSG::Image * ( ::OSG::ShaderShadowMapEngineDataBase::*getShadowTexImage_function_type )(  ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getShadowTexImage"
                , getShadowTexImage_function_type( &::OSG::ShaderShadowMapEngineDataBase::getShadowTexImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderShadowMapEngineDataBase::*getType_function_type )(  ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderShadowMapEngineDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderShadowMapEngineDataBase::*getType_function_type )(  ) const;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderShadowMapEngineDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::pushToLightPassMaterials
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*pushToLightPassMaterials_function_type )( ::OSG::ChunkMaterial * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "pushToLightPassMaterials"
                , pushToLightPassMaterials_function_type( &::OSG::ShaderShadowMapEngineDataBase::pushToLightPassMaterials )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::pushToRenderTargets
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*pushToRenderTargets_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "pushToRenderTargets"
                , pushToRenderTargets_function_type( &::OSG::ShaderShadowMapEngineDataBase::pushToRenderTargets )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::pushToShadowTexBuffers
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*pushToShadowTexBuffers_function_type )( ::OSG::TextureBuffer * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "pushToShadowTexBuffers"
                , pushToShadowTexBuffers_function_type( &::OSG::ShaderShadowMapEngineDataBase::pushToShadowTexBuffers )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::removeFromLightPassMaterials
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*removeFromLightPassMaterials_function_type )( ::OSG::UInt32 ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "removeFromLightPassMaterials"
                , removeFromLightPassMaterials_function_type( &::OSG::ShaderShadowMapEngineDataBase::removeFromLightPassMaterials )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::removeFromRenderTargets
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*removeFromRenderTargets_function_type )( ::OSG::UInt32 ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "removeFromRenderTargets"
                , removeFromRenderTargets_function_type( &::OSG::ShaderShadowMapEngineDataBase::removeFromRenderTargets )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::removeFromShadowTexBuffers
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*removeFromShadowTexBuffers_function_type )( ::OSG::UInt32 ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "removeFromShadowTexBuffers"
                , removeFromShadowTexBuffers_function_type( &::OSG::ShaderShadowMapEngineDataBase::removeFromShadowTexBuffers )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::removeObjFromLightPassMaterials
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*removeObjFromLightPassMaterials_function_type )( ::OSG::ChunkMaterial * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "removeObjFromLightPassMaterials"
                , removeObjFromLightPassMaterials_function_type( &::OSG::ShaderShadowMapEngineDataBase::removeObjFromLightPassMaterials )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::removeObjFromRenderTargets
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*removeObjFromRenderTargets_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "removeObjFromRenderTargets"
                , removeObjFromRenderTargets_function_type( &::OSG::ShaderShadowMapEngineDataBase::removeObjFromRenderTargets )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::removeObjFromShadowTexBuffers
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*removeObjFromShadowTexBuffers_function_type )( ::OSG::TextureBuffer * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "removeObjFromShadowTexBuffers"
                , removeObjFromShadowTexBuffers_function_type( &::OSG::ShaderShadowMapEngineDataBase::removeObjFromShadowTexBuffers )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::setBackground
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*setBackground_function_type )( ::OSG::Background * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "setBackground"
                , setBackground_function_type( &::OSG::ShaderShadowMapEngineDataBase::setBackground )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::setShadowTexChunk
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*setShadowTexChunk_function_type )( ::OSG::TextureObjChunk * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "setShadowTexChunk"
                , setShadowTexChunk_function_type( &::OSG::ShaderShadowMapEngineDataBase::setShadowTexChunk )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineDataBase::setShadowTexImage
        
            typedef void ( ::OSG::ShaderShadowMapEngineDataBase::*setShadowTexImage_function_type )( ::OSG::Image * const ) ;
            
            ShaderShadowMapEngineDataBase_exposer.def( 
                "setShadowTexImage"
                , setShadowTexImage_function_type( &::OSG::ShaderShadowMapEngineDataBase::setShadowTexImage )
                , ( bp::arg("value") ) );
        
        }
        ShaderShadowMapEngineDataBase_exposer.staticmethod( "create" );
        ShaderShadowMapEngineDataBase_exposer.staticmethod( "createDependent" );
        ShaderShadowMapEngineDataBase_exposer.staticmethod( "createLocal" );
        ShaderShadowMapEngineDataBase_exposer.staticmethod( "getClassGroupId" );
        ShaderShadowMapEngineDataBase_exposer.staticmethod( "getClassType" );
        ShaderShadowMapEngineDataBase_exposer.staticmethod( "getClassTypeId" );
        ShaderShadowMapEngineDataBase_exposer.def("getMFRenderTargets",ShaderShadowMapEngineDataBase_getMFRenderTargets);
        ShaderShadowMapEngineDataBase_exposer.def("getMFShadowTexBuffers",ShaderShadowMapEngineDataBase_getMFShadowTexBuffers);
        ShaderShadowMapEngineDataBase_exposer.def("getMFLightPassMaterials",ShaderShadowMapEngineDataBase_getMFLightPassMaterials);
    }

}
