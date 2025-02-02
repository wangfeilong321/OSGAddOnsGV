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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PassiveBackgroundBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct PassiveBackgroundBase_wrapper : OSG::PassiveBackgroundBase, bp::wrapper< OSG::PassiveBackgroundBase > {

    virtual void clear( ::OSG::DrawEnv * pEnv ){
        bp::override func_clear = this->get_override( "clear" );
        func_clear( boost::python::ptr(pEnv) );
    }

};

void register_PassiveBackgroundBase_class(){

    { //::OSG::PassiveBackgroundBase
        typedef bp::class_< PassiveBackgroundBase_wrapper, bp::bases< ::OSG::Background >, boost::noncopyable > PassiveBackgroundBase_exposer_t;
        PassiveBackgroundBase_exposer_t PassiveBackgroundBase_exposer = PassiveBackgroundBase_exposer_t( "PassiveBackgroundBase", bp::no_init );
        bp::scope PassiveBackgroundBase_scope( PassiveBackgroundBase_exposer );
        bp::scope().attr("ClearFrameBufferObjectFieldId") = (int)OSG::PassiveBackgroundBase::ClearFrameBufferObjectFieldId;
        bp::scope().attr("ClearCallbackFieldId") = (int)OSG::PassiveBackgroundBase::ClearCallbackFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::PassiveBackgroundBase::NextFieldId;
        { //::OSG::PassiveBackgroundBase::copyFromBin
        
            typedef void ( ::OSG::PassiveBackgroundBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PassiveBackgroundBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PassiveBackgroundBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveBackgroundBase::copyToBin
        
            typedef void ( ::OSG::PassiveBackgroundBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PassiveBackgroundBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PassiveBackgroundBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveBackgroundBase::create
        
            typedef ::OSG::PassiveBackgroundTransitPtr ( *create_function_type )(  );
            
            PassiveBackgroundBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PassiveBackgroundBase::create ) );
        
        }
        { //::OSG::PassiveBackgroundBase::createDependent
        
            typedef ::OSG::PassiveBackgroundTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PassiveBackgroundBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PassiveBackgroundBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PassiveBackgroundBase::createLocal
        
            typedef ::OSG::PassiveBackgroundTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PassiveBackgroundBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PassiveBackgroundBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PassiveBackgroundBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PassiveBackgroundBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PassiveBackgroundBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PassiveBackgroundBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveBackgroundBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PassiveBackgroundBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PassiveBackgroundBase::getClassGroupId ) );
        
        }
        { //::OSG::PassiveBackgroundBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PassiveBackgroundBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PassiveBackgroundBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PassiveBackgroundBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PassiveBackgroundBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PassiveBackgroundBase::getClassTypeId ) );
        
        }
        { //::OSG::PassiveBackgroundBase::getClearFrameBufferObject
        
            typedef bool ( ::OSG::PassiveBackgroundBase::*getClearFrameBufferObject_function_type )(  ) const;
            
            PassiveBackgroundBase_exposer.def( 
                "getClearFrameBufferObject"
                , getClearFrameBufferObject_function_type( &::OSG::PassiveBackgroundBase::getClearFrameBufferObject ) );
        
        }
        { //::OSG::PassiveBackgroundBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PassiveBackgroundBase::*getContainerSize_function_type )(  ) const;
            
            PassiveBackgroundBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PassiveBackgroundBase::getContainerSize ) );
        
        }
        { //::OSG::PassiveBackgroundBase::getSFClearFrameBufferObject
        
            typedef ::OSG::SFBool const * ( ::OSG::PassiveBackgroundBase::*getSFClearFrameBufferObject_function_type )(  ) const;
            
            PassiveBackgroundBase_exposer.def( 
                "getSFClearFrameBufferObject"
                , getSFClearFrameBufferObject_function_type( &::OSG::PassiveBackgroundBase::getSFClearFrameBufferObject )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PassiveBackgroundBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PassiveBackgroundBase::*getType_function_type )(  ) ;
            
            PassiveBackgroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PassiveBackgroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PassiveBackgroundBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PassiveBackgroundBase::*getType_function_type )(  ) const;
            
            PassiveBackgroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PassiveBackgroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PassiveBackgroundBase::setClearFrameBufferObject
        
            typedef void ( ::OSG::PassiveBackgroundBase::*setClearFrameBufferObject_function_type )( bool const ) ;
            
            PassiveBackgroundBase_exposer.def( 
                "setClearFrameBufferObject"
                , setClearFrameBufferObject_function_type( &::OSG::PassiveBackgroundBase::setClearFrameBufferObject )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Background::clear
        
            typedef void ( ::OSG::Background::*clear_function_type )( ::OSG::DrawEnv * ) ;
            
            PassiveBackgroundBase_exposer.def( 
                "clear"
                , bp::pure_virtual( clear_function_type(&::OSG::Background::clear) )
                , ( bp::arg("pEnv") ) );
        
        }
        PassiveBackgroundBase_exposer.staticmethod( "create" );
        PassiveBackgroundBase_exposer.staticmethod( "createDependent" );
        PassiveBackgroundBase_exposer.staticmethod( "createLocal" );
        PassiveBackgroundBase_exposer.staticmethod( "getClassGroupId" );
        PassiveBackgroundBase_exposer.staticmethod( "getClassType" );
        PassiveBackgroundBase_exposer.staticmethod( "getClassTypeId" );
    }

}
