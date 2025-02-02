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
#include "RootGroup.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_RootGroup_class(){

    { //::OSG::RootGroup
        typedef bp::class_< OSG::RootGroup, bp::bases< OSG::RootGroupBase >, boost::noncopyable > RootGroup_exposer_t;
        RootGroup_exposer_t RootGroup_exposer = RootGroup_exposer_t( "RootGroup", bp::no_init );
        bp::scope RootGroup_scope( RootGroup_exposer );
        { //::OSG::RootGroup::changed
        
            typedef void ( ::OSG::RootGroup::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            RootGroup_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::RootGroup::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::RootGroup::dump
        
            typedef void ( ::OSG::RootGroup::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            RootGroup_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::RootGroup::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::RootGroup::getRoot
        
            typedef ::OSG::Node * ( ::OSG::RootGroup::*getRoot_function_type )(  ) const;
            
            RootGroup_exposer.def( 
                "getRoot"
                , getRoot_function_type( &::OSG::RootGroup::getRoot )
                , bp::return_internal_reference< >() );
        
        }
        pyopensg::register_transit< OSG::RootGroup >::execute();
        bp::register_ptr_to_python< OSG::RootGroup::ObjRecPtr >();
        bp::implicitly_convertible< OSG::RootGroup::ObjRecPtr, OSG::RootGroup* >();
        bp::implicitly_convertible< OSG::RootGroup::ObjRecPtr, OSG::RootGroup::ObjCPtr >();
        bp::implicitly_convertible< OSG::RootGroup::ObjRecPtr, OSG::NodeCore* >();
        bp::implicitly_convertible< OSG::RootGroup::ObjRecPtr, OSG::NodeCore::ObjRecPtr >();
        bp::implicitly_convertible<OSG::RootGroup::ObjRecPtr, OSG::NodeCore::ObjCPtr>();
    }

}
