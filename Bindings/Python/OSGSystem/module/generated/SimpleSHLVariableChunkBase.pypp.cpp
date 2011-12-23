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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SimpleSHLVariableChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SimpleSHLVariableChunkBase_class(){

    { //::OSG::SimpleSHLVariableChunkBase
        typedef bp::class_< OSG::SimpleSHLVariableChunkBase, bp::bases< OSG::StateChunk >, boost::noncopyable > SimpleSHLVariableChunkBase_exposer_t;
        SimpleSHLVariableChunkBase_exposer_t SimpleSHLVariableChunkBase_exposer = SimpleSHLVariableChunkBase_exposer_t( "SimpleSHLVariableChunkBase", bp::no_init );
        bp::scope SimpleSHLVariableChunkBase_scope( SimpleSHLVariableChunkBase_exposer );
        bp::scope().attr("VariablesFieldId") = (int)OSG::SimpleSHLVariableChunkBase::VariablesFieldId;
        bp::scope().attr("VariableLocationsFieldId") = (int)OSG::SimpleSHLVariableChunkBase::VariableLocationsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SimpleSHLVariableChunkBase::NextFieldId;
        { //::OSG::SimpleSHLVariableChunkBase::copyFromBin
        
            typedef void ( ::OSG::SimpleSHLVariableChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SimpleSHLVariableChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::copyToBin
        
            typedef void ( ::OSG::SimpleSHLVariableChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SimpleSHLVariableChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::create
        
            typedef ::OSG::SimpleSHLVariableChunkTransitPtr ( *create_function_type )(  );
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SimpleSHLVariableChunkBase::create ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::createDependent
        
            typedef ::OSG::SimpleSHLVariableChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SimpleSHLVariableChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::createLocal
        
            typedef ::OSG::SimpleSHLVariableChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SimpleSHLVariableChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SimpleSHLVariableChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SimpleSHLVariableChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SimpleSHLVariableChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SimpleSHLVariableChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SimpleSHLVariableChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SimpleSHLVariableChunkBase::*getContainerSize_function_type )(  ) const;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SimpleSHLVariableChunkBase::getContainerSize ) );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getSFVariables
        
            typedef ::OSG::SFUnrecChildShaderProgramVariablesPtr const * ( ::OSG::SimpleSHLVariableChunkBase::*getSFVariables_function_type )(  ) const;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getSFVariables"
                , getSFVariables_function_type( &::OSG::SimpleSHLVariableChunkBase::getSFVariables )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SimpleSHLVariableChunkBase::*getType_function_type )(  ) ;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SimpleSHLVariableChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SimpleSHLVariableChunkBase::*getType_function_type )(  ) const;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SimpleSHLVariableChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::getVariables
        
            typedef ::OSG::ShaderProgramVariables * ( ::OSG::SimpleSHLVariableChunkBase::*getVariables_function_type )(  ) const;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "getVariables"
                , getVariables_function_type( &::OSG::SimpleSHLVariableChunkBase::getVariables )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleSHLVariableChunkBase::setVariables
        
            typedef void ( ::OSG::SimpleSHLVariableChunkBase::*setVariables_function_type )( ::OSG::ShaderProgramVariables * const ) ;
            
            SimpleSHLVariableChunkBase_exposer.def( 
                "setVariables"
                , setVariables_function_type( &::OSG::SimpleSHLVariableChunkBase::setVariables )
                , ( bp::arg("value") ) );
        
        }
        SimpleSHLVariableChunkBase_exposer.staticmethod( "create" );
        SimpleSHLVariableChunkBase_exposer.staticmethod( "createDependent" );
        SimpleSHLVariableChunkBase_exposer.staticmethod( "createLocal" );
        SimpleSHLVariableChunkBase_exposer.staticmethod( "getClassGroupId" );
        SimpleSHLVariableChunkBase_exposer.staticmethod( "getClassType" );
        SimpleSHLVariableChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
