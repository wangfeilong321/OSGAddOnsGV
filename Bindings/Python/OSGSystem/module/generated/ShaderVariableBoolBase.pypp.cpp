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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShaderVariableBoolBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableBoolBase_class(){

    { //::OSG::ShaderVariableBoolBase
        typedef bp::class_< OSG::ShaderVariableBoolBase, bp::bases< OSG::ShaderValueVariable >, boost::noncopyable > ShaderVariableBoolBase_exposer_t;
        ShaderVariableBoolBase_exposer_t ShaderVariableBoolBase_exposer = ShaderVariableBoolBase_exposer_t( "ShaderVariableBoolBase", bp::no_init );
        bp::scope ShaderVariableBoolBase_scope( ShaderVariableBoolBase_exposer );
        bp::scope().attr("ValueFieldId") = (int)OSG::ShaderVariableBoolBase::ValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderVariableBoolBase::NextFieldId;
        { //::OSG::ShaderVariableBoolBase::copyFromBin
        
            typedef void ( ::OSG::ShaderVariableBoolBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableBoolBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderVariableBoolBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::copyToBin
        
            typedef void ( ::OSG::ShaderVariableBoolBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableBoolBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderVariableBoolBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::create
        
            typedef ::OSG::ShaderVariableBoolTransitPtr ( *create_function_type )(  );
            
            ShaderVariableBoolBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ShaderVariableBoolBase::create ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::createDependent
        
            typedef ::OSG::ShaderVariableBoolTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ShaderVariableBoolBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ShaderVariableBoolBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::createLocal
        
            typedef ::OSG::ShaderVariableBoolTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ShaderVariableBoolBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ShaderVariableBoolBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderVariableBoolBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderVariableBoolBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderVariableBoolBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderVariableBoolBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderVariableBoolBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderVariableBoolBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderVariableBoolBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderVariableBoolBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderVariableBoolBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderVariableBoolBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderVariableBoolBase::*getContainerSize_function_type )(  ) const;
            
            ShaderVariableBoolBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderVariableBoolBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::getSFValue
        
            typedef ::OSG::SFBool const * ( ::OSG::ShaderVariableBoolBase::*getSFValue_function_type )(  ) const;
            
            ShaderVariableBoolBase_exposer.def( 
                "getSFValue"
                , getSFValue_function_type( &::OSG::ShaderVariableBoolBase::getSFValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableBoolBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderVariableBoolBase::*getType_function_type )(  ) ;
            
            ShaderVariableBoolBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableBoolBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableBoolBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderVariableBoolBase::*getType_function_type )(  ) const;
            
            ShaderVariableBoolBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderVariableBoolBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderVariableBoolBase::getValue
        
            typedef bool ( ::OSG::ShaderVariableBoolBase::*getValue_function_type )(  ) const;
            
            ShaderVariableBoolBase_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::ShaderVariableBoolBase::getValue ) );
        
        }
        { //::OSG::ShaderVariableBoolBase::setValue
        
            typedef void ( ::OSG::ShaderVariableBoolBase::*setValue_function_type )( bool const ) ;
            
            ShaderVariableBoolBase_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::ShaderVariableBoolBase::setValue )
                , ( bp::arg("value") ) );
        
        }
        ShaderVariableBoolBase_exposer.staticmethod( "create" );
        ShaderVariableBoolBase_exposer.staticmethod( "createDependent" );
        ShaderVariableBoolBase_exposer.staticmethod( "createLocal" );
        ShaderVariableBoolBase_exposer.staticmethod( "getClassGroupId" );
        ShaderVariableBoolBase_exposer.staticmethod( "getClassType" );
        ShaderVariableBoolBase_exposer.staticmethod( "getClassTypeId" );
    }

}
