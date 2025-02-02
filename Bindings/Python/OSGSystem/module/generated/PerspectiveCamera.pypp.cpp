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
#include "PerspectiveCamera.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PerspectiveCamera_class(){

    { //::OSG::PerspectiveCamera
        typedef bp::class_< OSG::PerspectiveCamera, bp::bases< OSG::PerspectiveCameraBase >, OSG::PerspectiveCamera::ObjRecPtr, boost::noncopyable > PerspectiveCamera_exposer_t;
        PerspectiveCamera_exposer_t PerspectiveCamera_exposer = PerspectiveCamera_exposer_t( "PerspectiveCamera", bp::no_init );
        bp::scope PerspectiveCamera_scope( PerspectiveCamera_exposer );
        bp::enum_< OSG::PerspectiveCamera::FovMode>("FovMode")
            .value("VerticalFoV", OSG::PerspectiveCamera::VerticalFoV)
            .value("HorizontalFoV", OSG::PerspectiveCamera::HorizontalFoV)
            .value("SmallerFoV", OSG::PerspectiveCamera::SmallerFoV)
            .export_values()
            ;
        { //::OSG::PerspectiveCamera::changed
        
            typedef void ( ::OSG::PerspectiveCamera::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            PerspectiveCamera_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::PerspectiveCamera::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::PerspectiveCamera::dump
        
            typedef void ( ::OSG::PerspectiveCamera::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PerspectiveCamera_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PerspectiveCamera::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::PerspectiveCamera::getProjection
        
            typedef void ( ::OSG::PerspectiveCamera::*getProjection_function_type )( ::OSG::Matrix &,::OSG::UInt32,::OSG::UInt32 ) ;
            
            PerspectiveCamera_exposer.def( 
                "getProjection"
                , getProjection_function_type( &::OSG::PerspectiveCamera::getProjection )
                , ( bp::arg("result"), bp::arg("width"), bp::arg("height") ) );
        
        }
        pyopensg::register_transit< OSG::PerspectiveCamera >::execute();
        bp::implicitly_convertible< OSG::PerspectiveCamera::ObjRecPtr, OSG::PerspectiveCamera* >();
        bp::implicitly_convertible< OSG::PerspectiveCamera::ObjRecPtr, OSG::PerspectiveCamera::ObjCPtr >();
        bp::implicitly_convertible< OSG::PerspectiveCamera::ObjRecPtr, OSG::Camera* >();
        bp::implicitly_convertible< OSG::PerspectiveCamera::ObjRecPtr, OSG::Camera::ObjRecPtr >();
        bp::implicitly_convertible<OSG::PerspectiveCamera::ObjRecPtr, OSG::Camera::ObjCPtr>();
    }

}
