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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MouseDataInterfaceSensor.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_MouseDataInterfaceSensor_class(){

    { //::OSG::MouseDataInterfaceSensor
        typedef bp::class_< OSG::MouseDataInterfaceSensor, bp::bases< OSG::MouseDataInterfaceSensorBase >, OSG::MouseDataInterfaceSensor::ObjRecPtr, boost::noncopyable > MouseDataInterfaceSensor_exposer_t;
        MouseDataInterfaceSensor_exposer_t MouseDataInterfaceSensor_exposer = MouseDataInterfaceSensor_exposer_t( "MouseDataInterfaceSensor", bp::no_init );
        bp::scope MouseDataInterfaceSensor_scope( MouseDataInterfaceSensor_exposer );
        { //::OSG::MouseDataInterfaceSensor::changed
        
            typedef void ( ::OSG::MouseDataInterfaceSensor::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            MouseDataInterfaceSensor_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::MouseDataInterfaceSensor::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::MouseDataInterfaceSensor::dump
        
            typedef void ( ::OSG::MouseDataInterfaceSensor::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            MouseDataInterfaceSensor_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::MouseDataInterfaceSensor::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::MouseDataInterfaceSensor::frame
        
            typedef void ( ::OSG::MouseDataInterfaceSensor::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            MouseDataInterfaceSensor_exposer.def( 
                "frame"
                , frame_function_type( &::OSG::MouseDataInterfaceSensor::frame )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        { //::OSG::MouseDataInterfaceSensor::init
        
            typedef bool ( ::OSG::MouseDataInterfaceSensor::*init_function_type )(  ) ;
            
            MouseDataInterfaceSensor_exposer.def( 
                "init"
                , init_function_type( &::OSG::MouseDataInterfaceSensor::init ) );
        
        }
        { //::OSG::MouseDataInterfaceSensor::shutdown
        
            typedef void ( ::OSG::MouseDataInterfaceSensor::*shutdown_function_type )(  ) ;
            
            MouseDataInterfaceSensor_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::OSG::MouseDataInterfaceSensor::shutdown ) );
        
        }
        pyopensg::register_transit< OSG::MouseDataInterfaceSensor >::execute();
        bp::implicitly_convertible< OSG::MouseDataInterfaceSensor::ObjRecPtr, OSG::MouseDataInterfaceSensor* >();
        bp::implicitly_convertible< OSG::MouseDataInterfaceSensor::ObjRecPtr, OSG::MouseDataInterfaceSensor::ObjCPtr >();
        bp::implicitly_convertible< OSG::MouseDataInterfaceSensor::ObjRecPtr, OSG::DeviceInterfaceSensor* >();
        bp::implicitly_convertible< OSG::MouseDataInterfaceSensor::ObjRecPtr, OSG::DeviceInterfaceSensor::ObjRecPtr >();
        bp::implicitly_convertible<OSG::MouseDataInterfaceSensor::ObjRecPtr, OSG::DeviceInterfaceSensor::ObjCPtr>();
    }

}
