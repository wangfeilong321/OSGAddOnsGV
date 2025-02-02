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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Transform.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Transform_class(){

    { //::OSG::Transform
        typedef bp::class_< OSG::Transform, bp::bases< OSG::TransformBase >, OSG::Transform::ObjRecPtr, boost::noncopyable > Transform_exposer_t;
        Transform_exposer_t Transform_exposer = Transform_exposer_t( "Transform", bp::no_init );
        bp::scope Transform_scope( Transform_exposer );
        { //::OSG::Transform::accumulateMatrix
        
            typedef void ( ::OSG::Transform::*accumulateMatrix_function_type )( ::OSG::Matrix & ) ;
            
            Transform_exposer.def( 
                "accumulateMatrix"
                , accumulateMatrix_function_type( &::OSG::Transform::accumulateMatrix )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::Transform::changed
        
            typedef void ( ::OSG::Transform::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            Transform_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::Transform::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::Transform::dump
        
            typedef void ( ::OSG::Transform::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            Transform_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::Transform::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::Transform >::execute();
        bp::implicitly_convertible< OSG::Transform::ObjRecPtr, OSG::Transform* >();
        bp::implicitly_convertible< OSG::Transform::ObjRecPtr, OSG::Transform::ObjCPtr >();
        bp::implicitly_convertible< OSG::Transform::ObjRecPtr, OSG::Group* >();
        bp::implicitly_convertible< OSG::Transform::ObjRecPtr, OSG::Group::ObjRecPtr >();
        bp::implicitly_convertible<OSG::Transform::ObjRecPtr, OSG::Group::ObjCPtr>();
    }

}
