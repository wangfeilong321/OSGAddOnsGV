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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShadowStageDataBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShadowStageDataBase_class(){

    { //::OSG::ShadowStageDataBase
        typedef bp::class_< OSG::ShadowStageDataBase, bp::bases< ::OSG::StageData >, boost::noncopyable > ShadowStageDataBase_exposer_t;
        ShadowStageDataBase_exposer_t ShadowStageDataBase_exposer = ShadowStageDataBase_exposer_t( "ShadowStageDataBase", bp::no_init );
        bp::scope ShadowStageDataBase_scope( ShadowStageDataBase_exposer );
        bp::scope().attr("ToneMappingMaterialFieldId") = (int)OSG::ShadowStageDataBase::ToneMappingMaterialFieldId;
        bp::scope().attr("BlurRenderTargetFieldId") = (int)OSG::ShadowStageDataBase::BlurRenderTargetFieldId;
        bp::scope().attr("BlurMaterialFieldId") = (int)OSG::ShadowStageDataBase::BlurMaterialFieldId;
        bp::scope().attr("HBlurShaderFieldId") = (int)OSG::ShadowStageDataBase::HBlurShaderFieldId;
        bp::scope().attr("VBlurShaderFieldId") = (int)OSG::ShadowStageDataBase::VBlurShaderFieldId;
        bp::scope().attr("WidthFieldId") = (int)OSG::ShadowStageDataBase::WidthFieldId;
        bp::scope().attr("HeightFieldId") = (int)OSG::ShadowStageDataBase::HeightFieldId;
        bp::scope().attr("ShrinkRenderTargetFieldId") = (int)OSG::ShadowStageDataBase::ShrinkRenderTargetFieldId;
        bp::scope().attr("ShrinkMaterialFieldId") = (int)OSG::ShadowStageDataBase::ShrinkMaterialFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShadowStageDataBase::NextFieldId;
        { //::OSG::ShadowStageDataBase::copyFromBin
        
            typedef void ( ::OSG::ShadowStageDataBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShadowStageDataBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShadowStageDataBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShadowStageDataBase::copyToBin
        
            typedef void ( ::OSG::ShadowStageDataBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShadowStageDataBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShadowStageDataBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShadowStageDataBase::create
        
            typedef ::OSG::ShadowStageDataTransitPtr ( *create_function_type )(  );
            
            ShadowStageDataBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShadowStageDataBase::create ) );
        
        }
        { //::OSG::ShadowStageDataBase::createDependent
        
            typedef ::OSG::ShadowStageDataTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShadowStageDataBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShadowStageDataBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShadowStageDataBase::createLocal
        
            typedef ::OSG::ShadowStageDataTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShadowStageDataBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShadowStageDataBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShadowStageDataBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShadowStageDataBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShadowStageDataBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShadowStageDataBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShadowStageDataBase::getBlurMaterial
        
            typedef ::OSG::ChunkMaterial * ( ::OSG::ShadowStageDataBase::*getBlurMaterial_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getBlurMaterial"
                , getBlurMaterial_function_type( &::OSG::ShadowStageDataBase::getBlurMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getBlurRenderTarget
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::ShadowStageDataBase::*getBlurRenderTarget_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getBlurRenderTarget"
                , getBlurRenderTarget_function_type( &::OSG::ShadowStageDataBase::getBlurRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShadowStageDataBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShadowStageDataBase::getClassGroupId ) );
        
        }
        { //::OSG::ShadowStageDataBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShadowStageDataBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShadowStageDataBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShadowStageDataBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShadowStageDataBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShadowStageDataBase::getClassTypeId ) );
        
        }
        { //::OSG::ShadowStageDataBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShadowStageDataBase::*getContainerSize_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShadowStageDataBase::getContainerSize ) );
        
        }
        { //::OSG::ShadowStageDataBase::getHBlurShader
        
            typedef ::OSG::SimpleSHLChunk * ( ::OSG::ShadowStageDataBase::*getHBlurShader_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getHBlurShader"
                , getHBlurShader_function_type( &::OSG::ShadowStageDataBase::getHBlurShader )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getHeight
        
            typedef ::OSG::UInt32 ( ::OSG::ShadowStageDataBase::*getHeight_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getHeight"
                , getHeight_function_type( &::OSG::ShadowStageDataBase::getHeight ) );
        
        }
        { //::OSG::ShadowStageDataBase::getSFBlurMaterial
        
            typedef ::OSG::SFUnrecChunkMaterialPtr const * ( ::OSG::ShadowStageDataBase::*getSFBlurMaterial_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFBlurMaterial"
                , getSFBlurMaterial_function_type( &::OSG::ShadowStageDataBase::getSFBlurMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getSFBlurRenderTarget
        
            typedef ::OSG::SFUnrecFrameBufferObjectPtr const * ( ::OSG::ShadowStageDataBase::*getSFBlurRenderTarget_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFBlurRenderTarget"
                , getSFBlurRenderTarget_function_type( &::OSG::ShadowStageDataBase::getSFBlurRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getSFHBlurShader
        
            typedef ::OSG::SFUnrecSimpleSHLChunkPtr const * ( ::OSG::ShadowStageDataBase::*getSFHBlurShader_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFHBlurShader"
                , getSFHBlurShader_function_type( &::OSG::ShadowStageDataBase::getSFHBlurShader )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getSFHeight
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ShadowStageDataBase::*getSFHeight_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFHeight"
                , getSFHeight_function_type( &::OSG::ShadowStageDataBase::getSFHeight )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getSFShrinkMaterial
        
            typedef ::OSG::SFUnrecChunkMaterialPtr const * ( ::OSG::ShadowStageDataBase::*getSFShrinkMaterial_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFShrinkMaterial"
                , getSFShrinkMaterial_function_type( &::OSG::ShadowStageDataBase::getSFShrinkMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getSFShrinkRenderTarget
        
            typedef ::OSG::SFUnrecFrameBufferObjectPtr const * ( ::OSG::ShadowStageDataBase::*getSFShrinkRenderTarget_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFShrinkRenderTarget"
                , getSFShrinkRenderTarget_function_type( &::OSG::ShadowStageDataBase::getSFShrinkRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getSFToneMappingMaterial
        
            typedef ::OSG::SFUnrecChunkMaterialPtr const * ( ::OSG::ShadowStageDataBase::*getSFToneMappingMaterial_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFToneMappingMaterial"
                , getSFToneMappingMaterial_function_type( &::OSG::ShadowStageDataBase::getSFToneMappingMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getSFVBlurShader
        
            typedef ::OSG::SFUnrecSimpleSHLChunkPtr const * ( ::OSG::ShadowStageDataBase::*getSFVBlurShader_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFVBlurShader"
                , getSFVBlurShader_function_type( &::OSG::ShadowStageDataBase::getSFVBlurShader )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getSFWidth
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ShadowStageDataBase::*getSFWidth_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getSFWidth"
                , getSFWidth_function_type( &::OSG::ShadowStageDataBase::getSFWidth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getShrinkMaterial
        
            typedef ::OSG::ChunkMaterial * ( ::OSG::ShadowStageDataBase::*getShrinkMaterial_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getShrinkMaterial"
                , getShrinkMaterial_function_type( &::OSG::ShadowStageDataBase::getShrinkMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getShrinkRenderTarget
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::ShadowStageDataBase::*getShrinkRenderTarget_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getShrinkRenderTarget"
                , getShrinkRenderTarget_function_type( &::OSG::ShadowStageDataBase::getShrinkRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getToneMappingMaterial
        
            typedef ::OSG::ChunkMaterial * ( ::OSG::ShadowStageDataBase::*getToneMappingMaterial_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getToneMappingMaterial"
                , getToneMappingMaterial_function_type( &::OSG::ShadowStageDataBase::getToneMappingMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShadowStageDataBase::*getType_function_type )(  ) ;
            
            ShadowStageDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShadowStageDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShadowStageDataBase::*getType_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShadowStageDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getVBlurShader
        
            typedef ::OSG::SimpleSHLChunk * ( ::OSG::ShadowStageDataBase::*getVBlurShader_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getVBlurShader"
                , getVBlurShader_function_type( &::OSG::ShadowStageDataBase::getVBlurShader )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageDataBase::getWidth
        
            typedef ::OSG::UInt32 ( ::OSG::ShadowStageDataBase::*getWidth_function_type )(  ) const;
            
            ShadowStageDataBase_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::OSG::ShadowStageDataBase::getWidth ) );
        
        }
        { //::OSG::ShadowStageDataBase::setBlurMaterial
        
            typedef void ( ::OSG::ShadowStageDataBase::*setBlurMaterial_function_type )( ::OSG::ChunkMaterial * const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setBlurMaterial"
                , setBlurMaterial_function_type( &::OSG::ShadowStageDataBase::setBlurMaterial )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowStageDataBase::setBlurRenderTarget
        
            typedef void ( ::OSG::ShadowStageDataBase::*setBlurRenderTarget_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setBlurRenderTarget"
                , setBlurRenderTarget_function_type( &::OSG::ShadowStageDataBase::setBlurRenderTarget )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowStageDataBase::setHBlurShader
        
            typedef void ( ::OSG::ShadowStageDataBase::*setHBlurShader_function_type )( ::OSG::SimpleSHLChunk * const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setHBlurShader"
                , setHBlurShader_function_type( &::OSG::ShadowStageDataBase::setHBlurShader )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowStageDataBase::setHeight
        
            typedef void ( ::OSG::ShadowStageDataBase::*setHeight_function_type )( ::OSG::UInt32 const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setHeight"
                , setHeight_function_type( &::OSG::ShadowStageDataBase::setHeight )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowStageDataBase::setShrinkMaterial
        
            typedef void ( ::OSG::ShadowStageDataBase::*setShrinkMaterial_function_type )( ::OSG::ChunkMaterial * const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setShrinkMaterial"
                , setShrinkMaterial_function_type( &::OSG::ShadowStageDataBase::setShrinkMaterial )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowStageDataBase::setShrinkRenderTarget
        
            typedef void ( ::OSG::ShadowStageDataBase::*setShrinkRenderTarget_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setShrinkRenderTarget"
                , setShrinkRenderTarget_function_type( &::OSG::ShadowStageDataBase::setShrinkRenderTarget )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowStageDataBase::setToneMappingMaterial
        
            typedef void ( ::OSG::ShadowStageDataBase::*setToneMappingMaterial_function_type )( ::OSG::ChunkMaterial * const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setToneMappingMaterial"
                , setToneMappingMaterial_function_type( &::OSG::ShadowStageDataBase::setToneMappingMaterial )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowStageDataBase::setVBlurShader
        
            typedef void ( ::OSG::ShadowStageDataBase::*setVBlurShader_function_type )( ::OSG::SimpleSHLChunk * const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setVBlurShader"
                , setVBlurShader_function_type( &::OSG::ShadowStageDataBase::setVBlurShader )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowStageDataBase::setWidth
        
            typedef void ( ::OSG::ShadowStageDataBase::*setWidth_function_type )( ::OSG::UInt32 const ) ;
            
            ShadowStageDataBase_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::OSG::ShadowStageDataBase::setWidth )
                , ( bp::arg("value") ) );
        
        }
        ShadowStageDataBase_exposer.staticmethod( "create" );
        ShadowStageDataBase_exposer.staticmethod( "createDependent" );
        ShadowStageDataBase_exposer.staticmethod( "createLocal" );
        ShadowStageDataBase_exposer.staticmethod( "getClassGroupId" );
        ShadowStageDataBase_exposer.staticmethod( "getClassType" );
        ShadowStageDataBase_exposer.staticmethod( "getClassTypeId" );
    }

}
