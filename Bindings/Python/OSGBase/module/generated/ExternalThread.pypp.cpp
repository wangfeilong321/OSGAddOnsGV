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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ExternalThread.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct ExternalThread_wrapper : OSG::ExternalThread, bp::wrapper< OSG::ExternalThread > {

    virtual void shutdown(  ) {
        if( bp::override func_shutdown = this->get_override( "shutdown" ) )
            func_shutdown(  );
        else{
            this->OSG::ExternalThread::shutdown(  );
        }
    }
    
    void default_shutdown(  ) {
        OSG::ExternalThread::shutdown( );
    }

    void addRef(  ){
        OSG::MemoryObject::addRef(  );
    }

    void addReferenceUnrecorded(  ){
        OSG::MemoryObject::addReferenceUnrecorded(  );
    }

    ::OSG::Int32 getRefCount(  ){
        return OSG::MemoryObject::getRefCount(  );
    }

    void subRef(  ){
        OSG::MemoryObject::subRef(  );
    }

    void subReferenceUnrecorded(  ){
        OSG::MemoryObject::subReferenceUnrecorded(  );
    }

};

void register_ExternalThread_class(){

    { //::OSG::ExternalThread
        typedef bp::class_< ExternalThread_wrapper, OSG::ExternalThread::ObjRefPtr, boost::noncopyable > ExternalThread_exposer_t;
        ExternalThread_exposer_t ExternalThread_exposer = ExternalThread_exposer_t( "ExternalThread", bp::no_init );
        bp::scope ExternalThread_scope( ExternalThread_exposer );
        { //::OSG::ExternalThread::find
        
            typedef ::OSG::ExternalThread * ( *find_function_type )( ::OSG::Char8 const * );
            
            ExternalThread_exposer.def( 
                "find"
                , find_function_type( &::OSG::ExternalThread::find )
                , ( bp::arg("szName") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ExternalThread::get
        
            typedef ::OSG::TransitPtr< OSG::ExternalThread > ( *get_function_type )( ::OSG::Char8 const *,bool );
            
            ExternalThread_exposer.def( 
                "get"
                , get_function_type( &::OSG::ExternalThread::get )
                , ( bp::arg("szName"), bp::arg("bGlobal") ) );
        
        }
        { //::OSG::ExternalThread::initialize
        
            typedef void ( ::OSG::ExternalThread::*initialize_function_type )( ::OSG::UInt32 ) ;
            
            ExternalThread_exposer.def( 
                "initialize"
                , initialize_function_type( &::OSG::ExternalThread::initialize )
                , ( bp::arg("uiAspectId") ) );
        
        }
        { //::OSG::ExternalThread::shutdown
        
            typedef void ( ::OSG::ExternalThread::*shutdown_function_type )(  ) ;
            typedef void ( ExternalThread_wrapper::*default_shutdown_function_type )(  ) ;
            
            ExternalThread_exposer.def( 
                "shutdown"
                , shutdown_function_type(&::OSG::ExternalThread::shutdown)
                , default_shutdown_function_type(&ExternalThread_wrapper::default_shutdown) );
        
        }
        { //::OSG::MemoryObject::addRef
        
            typedef void ( ExternalThread_wrapper::*addRef_function_type )(  ) ;
            
            ExternalThread_exposer.def( 
                "addRef"
                , addRef_function_type( &ExternalThread_wrapper::addRef ) );
        
        }
        { //::OSG::MemoryObject::addReferenceUnrecorded
        
            typedef void ( ExternalThread_wrapper::*addReferenceUnrecorded_function_type )(  ) ;
            
            ExternalThread_exposer.def( 
                "addReferenceUnrecorded"
                , addReferenceUnrecorded_function_type( &ExternalThread_wrapper::addReferenceUnrecorded ) );
        
        }
        { //::OSG::MemoryObject::getRefCount
        
            typedef ::OSG::Int32 ( ExternalThread_wrapper::*getRefCount_function_type )(  ) ;
            
            ExternalThread_exposer.def( 
                "getRefCount"
                , getRefCount_function_type( &ExternalThread_wrapper::getRefCount ) );
        
        }
        { //::OSG::MemoryObject::subRef
        
            typedef void ( ExternalThread_wrapper::*subRef_function_type )(  ) ;
            
            ExternalThread_exposer.def( 
                "subRef"
                , subRef_function_type( &ExternalThread_wrapper::subRef ) );
        
        }
        { //::OSG::MemoryObject::subReferenceUnrecorded
        
            typedef void ( ExternalThread_wrapper::*subReferenceUnrecorded_function_type )(  ) ;
            
            ExternalThread_exposer.def( 
                "subReferenceUnrecorded"
                , subReferenceUnrecorded_function_type( &ExternalThread_wrapper::subReferenceUnrecorded ) );
        
        }
        ExternalThread_exposer.staticmethod( "find" );
        ExternalThread_exposer.staticmethod( "get" );
        pyopensg::register_transit<OSG::ExternalThread, OSG::ExternalThread::ObjRefPtr>::execute();
        bp::implicitly_convertible<OSG::ExternalThread::ObjRefPtr, OSG::ExternalThread*>();
    }

}
