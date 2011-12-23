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
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SharePtrGraphOp.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct SharePtrGraphOp_wrapper : OSG::SharePtrGraphOp, bp::wrapper< OSG::SharePtrGraphOp > {

    virtual ::OSG::GraphOpTransitPtr clone(  ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->OSG::SharePtrGraphOp::clone(  );
        }
    }
    
    ::OSG::GraphOpTransitPtr default_clone(  ) {
        return OSG::SharePtrGraphOp::clone( );
    }

    virtual void setParams( ::std::string const params ) {
        if( bp::override func_setParams = this->get_override( "setParams" ) )
            func_setParams( params );
        else{
            this->OSG::SharePtrGraphOp::setParams( params );
        }
    }
    
    void default_setParams( ::std::string const params ) {
        OSG::SharePtrGraphOp::setParams( params );
    }

    virtual bool traverse( ::OSG::Node * root ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            return func_traverse( boost::python::ptr(root) );
        else{
            return this->OSG::SharePtrGraphOp::traverse( boost::python::ptr(root) );
        }
    }
    
    bool default_traverse( ::OSG::Node * root ) {
        return OSG::SharePtrGraphOp::traverse( boost::python::ptr(root) );
    }

};

void register_SharePtrGraphOp_class(){

    { //::OSG::SharePtrGraphOp
        typedef bp::class_< SharePtrGraphOp_wrapper, bp::bases< OSG::GraphOp >, boost::noncopyable > SharePtrGraphOp_exposer_t;
        SharePtrGraphOp_exposer_t SharePtrGraphOp_exposer = SharePtrGraphOp_exposer_t( "SharePtrGraphOp", bp::no_init );
        bp::scope SharePtrGraphOp_scope( SharePtrGraphOp_exposer );
        { //::OSG::SharePtrGraphOp::clone
        
            typedef ::OSG::GraphOpTransitPtr ( ::OSG::SharePtrGraphOp::*clone_function_type )(  ) ;
            typedef ::OSG::GraphOpTransitPtr ( SharePtrGraphOp_wrapper::*default_clone_function_type )(  ) ;
            
            SharePtrGraphOp_exposer.def( 
                "clone"
                , clone_function_type(&::OSG::SharePtrGraphOp::clone)
                , default_clone_function_type(&SharePtrGraphOp_wrapper::default_clone) );
        
        }
        { //::OSG::SharePtrGraphOp::create
        
            typedef ::OSG::TransitPtr< OSG::SharePtrGraphOp > ( *create_function_type )(  );
            
            SharePtrGraphOp_exposer.def( 
                "create"
                , create_function_type( &::OSG::SharePtrGraphOp::create ) );
        
        }
        { //::OSG::SharePtrGraphOp::getClassname
        
            typedef char const * ( *getClassname_function_type )(  );
            
            SharePtrGraphOp_exposer.def( 
                "getClassname"
                , getClassname_function_type( &::OSG::SharePtrGraphOp::getClassname ) );
        
        }
        { //::OSG::SharePtrGraphOp::setExcludes
        
            typedef void ( ::OSG::SharePtrGraphOp::*setExcludes_function_type )( ::std::string const & ) ;
            
            SharePtrGraphOp_exposer.def( 
                "setExcludes"
                , setExcludes_function_type( &::OSG::SharePtrGraphOp::setExcludes )
                , ( bp::arg("excludes") ) );
        
        }
        { //::OSG::SharePtrGraphOp::setIncludes
        
            typedef void ( ::OSG::SharePtrGraphOp::*setIncludes_function_type )( ::std::string const & ) ;
            
            SharePtrGraphOp_exposer.def( 
                "setIncludes"
                , setIncludes_function_type( &::OSG::SharePtrGraphOp::setIncludes )
                , ( bp::arg("includes") ) );
        
        }
        { //::OSG::SharePtrGraphOp::setParams
        
            typedef void ( ::OSG::SharePtrGraphOp::*setParams_function_type )( ::std::string const ) ;
            typedef void ( SharePtrGraphOp_wrapper::*default_setParams_function_type )( ::std::string const ) ;
            
            SharePtrGraphOp_exposer.def( 
                "setParams"
                , setParams_function_type(&::OSG::SharePtrGraphOp::setParams)
                , default_setParams_function_type(&SharePtrGraphOp_wrapper::default_setParams)
                , ( bp::arg("params") ) );
        
        }
        { //::OSG::SharePtrGraphOp::traverse
        
            typedef bool ( ::OSG::SharePtrGraphOp::*traverse_function_type )( ::OSG::Node * ) ;
            typedef bool ( SharePtrGraphOp_wrapper::*default_traverse_function_type )( ::OSG::Node * ) ;
            
            SharePtrGraphOp_exposer.def( 
                "traverse"
                , traverse_function_type(&::OSG::SharePtrGraphOp::traverse)
                , default_traverse_function_type(&SharePtrGraphOp_wrapper::default_traverse)
                , ( bp::arg("root") ) );
        
        }
        SharePtrGraphOp_exposer.staticmethod( "create" );
        SharePtrGraphOp_exposer.staticmethod( "getClassname" );
        bp::implicitly_convertible<OSG::SharePtrGraphOp::ObjRefPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::SharePtrGraphOp::ObjTransitPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::SharePtrGraphOp::ObjTransitPtr, OSG::SharePtrGraphOp::ObjRefPtr>();
    }

}
