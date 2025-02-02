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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimKeyFrameDataSource.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct AnimKeyFrameDataSource_wrapper : OSG::AnimKeyFrameDataSource, bp::wrapper< OSG::AnimKeyFrameDataSource > {



};

void register_AnimKeyFrameDataSource_class(){

    { //::OSG::AnimKeyFrameDataSource
        typedef bp::class_< AnimKeyFrameDataSource_wrapper, bp::bases< OSG::AnimKeyFrameDataSourceBase >, boost::noncopyable > AnimKeyFrameDataSource_exposer_t;
        AnimKeyFrameDataSource_exposer_t AnimKeyFrameDataSource_exposer = AnimKeyFrameDataSource_exposer_t( "AnimKeyFrameDataSource", bp::no_init );
        bp::scope AnimKeyFrameDataSource_scope( AnimKeyFrameDataSource_exposer );
        bp::enum_< OSG::AnimKeyFrameDataSource::InterpolationModeE>("InterpolationModeE")
            .value("IM_Step", OSG::AnimKeyFrameDataSource::IM_Step)
            .value("IM_Linear", OSG::AnimKeyFrameDataSource::IM_Linear)
            .value("IM_Bezier", OSG::AnimKeyFrameDataSource::IM_Bezier)
            .value("IM_Hermite", OSG::AnimKeyFrameDataSource::IM_Hermite)
            .export_values()
            ;
        { //::OSG::AnimKeyFrameDataSource::changed
        
            typedef void ( ::OSG::AnimKeyFrameDataSource::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            AnimKeyFrameDataSource_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::AnimKeyFrameDataSource::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::AnimKeyFrameDataSource::dump
        
            typedef void ( ::OSG::AnimKeyFrameDataSource::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            AnimKeyFrameDataSource_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::AnimKeyFrameDataSource::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::AnimKeyFrameDataSource::getLength
        
            typedef ::OSG::Real32 ( ::OSG::AnimKeyFrameDataSource::*getLength_function_type )(  ) const;
            
            AnimKeyFrameDataSource_exposer.def( 
                "getLength"
                , getLength_function_type( &::OSG::AnimKeyFrameDataSource::getLength ) );
        
        }
        { //::OSG::AnimDataSource::createBlender
        
            typedef ::OSG::AnimBlenderTransitPtr ( ::OSG::AnimDataSource::*createBlender_function_type )(  ) const;
            
            AnimKeyFrameDataSource_exposer.def( 
                "createBlender"
                , createBlender_function_type( &::OSG::AnimDataSource::createBlender ) );
        
        }
        { //::OSG::AnimDataSource::createChannel
        
            typedef ::OSG::AnimChannelTransitPtr ( ::OSG::AnimDataSource::*createChannel_function_type )(  ) const;
            
            AnimKeyFrameDataSource_exposer.def( 
                "createChannel"
                , createChannel_function_type( &::OSG::AnimDataSource::createChannel ) );
        
        }
        pyopensg::register_transit< OSG::AnimKeyFrameDataSource >::execute();
        bp::register_ptr_to_python< OSG::AnimKeyFrameDataSource::ObjRecPtr >();
        bp::implicitly_convertible< OSG::AnimKeyFrameDataSource::ObjRecPtr, OSG::AnimKeyFrameDataSource* >();
        bp::implicitly_convertible< OSG::AnimKeyFrameDataSource::ObjRecPtr, OSG::AnimKeyFrameDataSource::ObjCPtr >();
        bp::implicitly_convertible< OSG::AnimKeyFrameDataSource::ObjRecPtr, OSG::AnimDataSource* >();
        bp::implicitly_convertible< OSG::AnimKeyFrameDataSource::ObjRecPtr, OSG::AnimDataSource::ObjRecPtr >();
        bp::implicitly_convertible<OSG::AnimKeyFrameDataSource::ObjRecPtr, OSG::AnimDataSource::ObjCPtr>();
    }

}
