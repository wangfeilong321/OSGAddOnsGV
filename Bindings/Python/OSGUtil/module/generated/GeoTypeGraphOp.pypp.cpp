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
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GeoTypeGraphOp.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct GeoTypeGraphOp_wrapper : OSG::GeoTypeGraphOp, bp::wrapper< OSG::GeoTypeGraphOp > {

    virtual ::OSG::GraphOpTransitPtr clone(  ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->OSG::GeoTypeGraphOp::clone(  );
        }
    }
    
    ::OSG::GraphOpTransitPtr default_clone(  ) {
        return OSG::GeoTypeGraphOp::clone( );
    }

    virtual void setParams( ::std::string const params ) {
        if( bp::override func_setParams = this->get_override( "setParams" ) )
            func_setParams( params );
        else{
            this->OSG::GeoTypeGraphOp::setParams( params );
        }
    }
    
    void default_setParams( ::std::string const params ) {
        OSG::GeoTypeGraphOp::setParams( params );
    }

    virtual bool traverse( ::OSG::Node * root ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            return func_traverse( boost::python::ptr(root) );
        else{
            return this->OSG::GraphOp::traverse( boost::python::ptr(root) );
        }
    }
    
    bool default_traverse( ::OSG::Node * root ) {
        return OSG::GraphOp::traverse( boost::python::ptr(root) );
    }

    virtual ::OSG::ActionBase::ResultE traverseEnter( ::OSG::Node * const node ){
        bp::override func_traverseEnter = this->get_override( "traverseEnter" );
        return func_traverseEnter( node );
    }

    virtual ::OSG::ActionBase::ResultE traverseLeave( ::OSG::Node * const node, ::OSG::ActionBase::ResultE res ){
        bp::override func_traverseLeave = this->get_override( "traverseLeave" );
        return func_traverseLeave( node, res );
    }

};

void register_GeoTypeGraphOp_class(){

    { //::OSG::GeoTypeGraphOp
        typedef bp::class_< GeoTypeGraphOp_wrapper, boost::noncopyable > GeoTypeGraphOp_exposer_t;
        GeoTypeGraphOp_exposer_t GeoTypeGraphOp_exposer = GeoTypeGraphOp_exposer_t( "GeoTypeGraphOp", bp::no_init );
        bp::scope GeoTypeGraphOp_scope( GeoTypeGraphOp_exposer );
        { //::OSG::GeoTypeGraphOp::clone
        
            typedef ::OSG::GraphOpTransitPtr ( ::OSG::GeoTypeGraphOp::*clone_function_type )(  ) ;
            typedef ::OSG::GraphOpTransitPtr ( GeoTypeGraphOp_wrapper::*default_clone_function_type )(  ) ;
            
            GeoTypeGraphOp_exposer.def( 
                "clone"
                , clone_function_type(&::OSG::GeoTypeGraphOp::clone)
                , default_clone_function_type(&GeoTypeGraphOp_wrapper::default_clone) );
        
        }
        { //::OSG::GeoTypeGraphOp::create
        
            typedef ::OSG::TransitPtr< OSG::GeoTypeGraphOp > ( *create_function_type )(  );
            
            GeoTypeGraphOp_exposer.def( 
                "create"
                , create_function_type( &::OSG::GeoTypeGraphOp::create ) );
        
        }
        { //::OSG::GeoTypeGraphOp::getClassname
        
            typedef char const * ( *getClassname_function_type )(  );
            
            GeoTypeGraphOp_exposer.def( 
                "getClassname"
                , getClassname_function_type( &::OSG::GeoTypeGraphOp::getClassname ) );
        
        }
        { //::OSG::GeoTypeGraphOp::setFilter
        
            typedef void ( ::OSG::GeoTypeGraphOp::*setFilter_function_type )( long unsigned int const & ) ;
            
            GeoTypeGraphOp_exposer.def( 
                "setFilter"
                , setFilter_function_type( &::OSG::GeoTypeGraphOp::setFilter )
                , ( bp::arg("filter") ) );
        
        }
        { //::OSG::GeoTypeGraphOp::setParams
        
            typedef void ( ::OSG::GeoTypeGraphOp::*setParams_function_type )( ::std::string const ) ;
            typedef void ( GeoTypeGraphOp_wrapper::*default_setParams_function_type )( ::std::string const ) ;
            
            GeoTypeGraphOp_exposer.def( 
                "setParams"
                , setParams_function_type(&::OSG::GeoTypeGraphOp::setParams)
                , default_setParams_function_type(&GeoTypeGraphOp_wrapper::default_setParams)
                , ( bp::arg("params") ) );
        
        }
        { //::OSG::GraphOp::traverse
        
            typedef bool ( ::OSG::GraphOp::*traverse_function_type )( ::OSG::Node * ) ;
            typedef bool ( GeoTypeGraphOp_wrapper::*default_traverse_function_type )( ::OSG::Node * ) ;
            
            GeoTypeGraphOp_exposer.def( 
                "traverse"
                , traverse_function_type(&::OSG::GraphOp::traverse)
                , default_traverse_function_type(&GeoTypeGraphOp_wrapper::default_traverse)
                , ( bp::arg("root") ) );
        
        }
        { //::OSG::GraphOp::traverseEnter
        
            typedef ::OSG::ActionBase::ResultE ( GeoTypeGraphOp_wrapper::*traverseEnter_function_type )( ::OSG::Node * const ) ;
            
            GeoTypeGraphOp_exposer.def( 
                "traverseEnter"
                , traverseEnter_function_type( &GeoTypeGraphOp_wrapper::traverseEnter )
                , ( bp::arg("node") ) );
        
        }
        { //::OSG::GraphOp::traverseLeave
        
            typedef ::OSG::ActionBase::ResultE ( GeoTypeGraphOp_wrapper::*traverseLeave_function_type )( ::OSG::Node * const,::OSG::ActionBase::ResultE ) ;
            
            GeoTypeGraphOp_exposer.def( 
                "traverseLeave"
                , traverseLeave_function_type( &GeoTypeGraphOp_wrapper::traverseLeave )
                , ( bp::arg("node"), bp::arg("res") ) );
        
        }
        GeoTypeGraphOp_exposer.staticmethod( "create" );
        GeoTypeGraphOp_exposer.staticmethod( "getClassname" );
        bp::implicitly_convertible<OSG::GeoTypeGraphOp::ObjRefPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::GeoTypeGraphOp::ObjTransitPtr, OSG::GraphOp::ObjRefPtr>();
        bp::implicitly_convertible<OSG::GeoTypeGraphOp::ObjTransitPtr, OSG::GeoTypeGraphOp::ObjRefPtr>();
    }

}
