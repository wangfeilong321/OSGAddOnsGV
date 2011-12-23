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
#include "ShaderShadowMapEngineBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct ShaderShadowMapEngineBase_wrapper : OSG::ShaderShadowMapEngineBase, bp::wrapper< OSG::ShaderShadowMapEngineBase > {

    virtual ::OSG::ActionBase::ResultE runOnEnter( ::OSG::Light * pLight, ::OSG::LightEngine::LightTypeE eType, ::OSG::RenderAction * pAction ){
        bp::override func_runOnEnter = this->get_override( "runOnEnter" );
        return func_runOnEnter( boost::python::ptr(pLight), eType, boost::python::ptr(pAction) );
    }

    virtual ::OSG::ActionBase::ResultE runOnLeave( ::OSG::Light * pLight, ::OSG::LightEngine::LightTypeE eType, ::OSG::RenderAction * pAction ){
        bp::override func_runOnLeave = this->get_override( "runOnLeave" );
        return func_runOnLeave( boost::python::ptr(pLight), eType, boost::python::ptr(pAction) );
    }

};

void register_ShaderShadowMapEngineBase_class(){

    { //::OSG::ShaderShadowMapEngineBase
        typedef bp::class_< ShaderShadowMapEngineBase_wrapper, boost::noncopyable > ShaderShadowMapEngineBase_exposer_t;
        ShaderShadowMapEngineBase_exposer_t ShaderShadowMapEngineBase_exposer = ShaderShadowMapEngineBase_exposer_t( "ShaderShadowMapEngineBase", bp::no_init );
        bp::scope ShaderShadowMapEngineBase_scope( ShaderShadowMapEngineBase_exposer );
        bp::scope().attr("ShadowVertexProgramFieldId") = (int)OSG::ShaderShadowMapEngineBase::ShadowVertexProgramFieldId;
        bp::scope().attr("ShadowFragmentProgramFieldId") = (int)OSG::ShaderShadowMapEngineBase::ShadowFragmentProgramFieldId;
        bp::scope().attr("ForceTextureUnitFieldId") = (int)OSG::ShaderShadowMapEngineBase::ForceTextureUnitFieldId;
        bp::scope().attr("ShadowNearFieldId") = (int)OSG::ShaderShadowMapEngineBase::ShadowNearFieldId;
        bp::scope().attr("ShadowFarFieldId") = (int)OSG::ShaderShadowMapEngineBase::ShadowFarFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderShadowMapEngineBase::NextFieldId;
        { //::OSG::ShaderShadowMapEngineBase::copyFromBin
        
            typedef void ( ::OSG::ShaderShadowMapEngineBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderShadowMapEngineBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::copyToBin
        
            typedef void ( ::OSG::ShaderShadowMapEngineBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderShadowMapEngineBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::create
        
            typedef ::OSG::ShaderShadowMapEngineTransitPtr ( *create_function_type )(  );
            
            ShaderShadowMapEngineBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderShadowMapEngineBase::create ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::createDependent
        
            typedef ::OSG::ShaderShadowMapEngineTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderShadowMapEngineBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderShadowMapEngineBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::createLocal
        
            typedef ::OSG::ShaderShadowMapEngineTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderShadowMapEngineBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderShadowMapEngineBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderShadowMapEngineBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderShadowMapEngineBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderShadowMapEngineBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderShadowMapEngineBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderShadowMapEngineBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderShadowMapEngineBase::*getContainerSize_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderShadowMapEngineBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getForceTextureUnit
        
            typedef ::OSG::Int32 ( ::OSG::ShaderShadowMapEngineBase::*getForceTextureUnit_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getForceTextureUnit"
                , getForceTextureUnit_function_type( &::OSG::ShaderShadowMapEngineBase::getForceTextureUnit ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getSFForceTextureUnit
        
            typedef ::OSG::SFInt32 const * ( ::OSG::ShaderShadowMapEngineBase::*getSFForceTextureUnit_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getSFForceTextureUnit"
                , getSFForceTextureUnit_function_type( &::OSG::ShaderShadowMapEngineBase::getSFForceTextureUnit )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getSFShadowFar
        
            typedef ::OSG::SFReal32 const * ( ::OSG::ShaderShadowMapEngineBase::*getSFShadowFar_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getSFShadowFar"
                , getSFShadowFar_function_type( &::OSG::ShaderShadowMapEngineBase::getSFShadowFar )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getSFShadowFragmentProgram
        
            typedef ::OSG::SFUnrecShaderProgramPtr const * ( ::OSG::ShaderShadowMapEngineBase::*getSFShadowFragmentProgram_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getSFShadowFragmentProgram"
                , getSFShadowFragmentProgram_function_type( &::OSG::ShaderShadowMapEngineBase::getSFShadowFragmentProgram )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getSFShadowNear
        
            typedef ::OSG::SFReal32 const * ( ::OSG::ShaderShadowMapEngineBase::*getSFShadowNear_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getSFShadowNear"
                , getSFShadowNear_function_type( &::OSG::ShaderShadowMapEngineBase::getSFShadowNear )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getSFShadowVertexProgram
        
            typedef ::OSG::SFUnrecShaderProgramPtr const * ( ::OSG::ShaderShadowMapEngineBase::*getSFShadowVertexProgram_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getSFShadowVertexProgram"
                , getSFShadowVertexProgram_function_type( &::OSG::ShaderShadowMapEngineBase::getSFShadowVertexProgram )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getShadowFar
        
            typedef ::OSG::Real32 ( ::OSG::ShaderShadowMapEngineBase::*getShadowFar_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getShadowFar"
                , getShadowFar_function_type( &::OSG::ShaderShadowMapEngineBase::getShadowFar ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getShadowFragmentProgram
        
            typedef ::OSG::ShaderProgram * ( ::OSG::ShaderShadowMapEngineBase::*getShadowFragmentProgram_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getShadowFragmentProgram"
                , getShadowFragmentProgram_function_type( &::OSG::ShaderShadowMapEngineBase::getShadowFragmentProgram )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getShadowNear
        
            typedef ::OSG::Real32 ( ::OSG::ShaderShadowMapEngineBase::*getShadowNear_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getShadowNear"
                , getShadowNear_function_type( &::OSG::ShaderShadowMapEngineBase::getShadowNear ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getShadowVertexProgram
        
            typedef ::OSG::ShaderProgram * ( ::OSG::ShaderShadowMapEngineBase::*getShadowVertexProgram_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getShadowVertexProgram"
                , getShadowVertexProgram_function_type( &::OSG::ShaderShadowMapEngineBase::getShadowVertexProgram )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderShadowMapEngineBase::*getType_function_type )(  ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderShadowMapEngineBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderShadowMapEngineBase::*getType_function_type )(  ) const;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderShadowMapEngineBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::setForceTextureUnit
        
            typedef void ( ::OSG::ShaderShadowMapEngineBase::*setForceTextureUnit_function_type )( ::OSG::Int32 const ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "setForceTextureUnit"
                , setForceTextureUnit_function_type( &::OSG::ShaderShadowMapEngineBase::setForceTextureUnit )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::setShadowFar
        
            typedef void ( ::OSG::ShaderShadowMapEngineBase::*setShadowFar_function_type )( ::OSG::Real32 const ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "setShadowFar"
                , setShadowFar_function_type( &::OSG::ShaderShadowMapEngineBase::setShadowFar )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::setShadowFragmentProgram
        
            typedef void ( ::OSG::ShaderShadowMapEngineBase::*setShadowFragmentProgram_function_type )( ::OSG::ShaderProgram * const ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "setShadowFragmentProgram"
                , setShadowFragmentProgram_function_type( &::OSG::ShaderShadowMapEngineBase::setShadowFragmentProgram )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::setShadowNear
        
            typedef void ( ::OSG::ShaderShadowMapEngineBase::*setShadowNear_function_type )( ::OSG::Real32 const ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "setShadowNear"
                , setShadowNear_function_type( &::OSG::ShaderShadowMapEngineBase::setShadowNear )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShaderShadowMapEngineBase::setShadowVertexProgram
        
            typedef void ( ::OSG::ShaderShadowMapEngineBase::*setShadowVertexProgram_function_type )( ::OSG::ShaderProgram * const ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "setShadowVertexProgram"
                , setShadowVertexProgram_function_type( &::OSG::ShaderShadowMapEngineBase::setShadowVertexProgram )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ShadowMapEngine::runOnEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::ShadowMapEngine::*runOnEnter_function_type )( ::OSG::Light *,::OSG::LightEngine::LightTypeE,::OSG::RenderAction * ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "runOnEnter"
                , bp::pure_virtual( runOnEnter_function_type(&::OSG::ShadowMapEngine::runOnEnter) )
                , ( bp::arg("pLight"), bp::arg("eType"), bp::arg("pAction") ) );
        
        }
        { //::OSG::ShadowMapEngine::runOnLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::ShadowMapEngine::*runOnLeave_function_type )( ::OSG::Light *,::OSG::LightEngine::LightTypeE,::OSG::RenderAction * ) ;
            
            ShaderShadowMapEngineBase_exposer.def( 
                "runOnLeave"
                , bp::pure_virtual( runOnLeave_function_type(&::OSG::ShadowMapEngine::runOnLeave) )
                , ( bp::arg("pLight"), bp::arg("eType"), bp::arg("pAction") ) );
        
        }
        ShaderShadowMapEngineBase_exposer.staticmethod( "create" );
        ShaderShadowMapEngineBase_exposer.staticmethod( "createDependent" );
        ShaderShadowMapEngineBase_exposer.staticmethod( "createLocal" );
        ShaderShadowMapEngineBase_exposer.staticmethod( "getClassGroupId" );
        ShaderShadowMapEngineBase_exposer.staticmethod( "getClassType" );
        ShaderShadowMapEngineBase_exposer.staticmethod( "getClassTypeId" );
    }

}
