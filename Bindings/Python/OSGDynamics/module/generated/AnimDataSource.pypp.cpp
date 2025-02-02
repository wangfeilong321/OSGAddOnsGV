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
#include "AnimDataSource.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_AnimDataSource_class(){

    { //::OSG::AnimDataSource
        typedef bp::class_< OSG::AnimDataSource, bp::bases< OSG::AnimDataSourceBase >, boost::noncopyable > AnimDataSource_exposer_t;
        AnimDataSource_exposer_t AnimDataSource_exposer = AnimDataSource_exposer_t( "AnimDataSource", bp::no_init );
        bp::scope AnimDataSource_scope( AnimDataSource_exposer );
        { //::OSG::AnimDataSource::changed
        
            typedef void ( ::OSG::AnimDataSource::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            AnimDataSource_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::AnimDataSource::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::AnimDataSource::createBlender
        
            typedef ::OSG::AnimBlenderTransitPtr ( ::OSG::AnimDataSource::*createBlender_function_type )(  ) const;
            
            AnimDataSource_exposer.def( 
                "createBlender"
                , createBlender_function_type( &::OSG::AnimDataSource::createBlender ) );
        
        }
        { //::OSG::AnimDataSource::createChannel
        
            typedef ::OSG::AnimChannelTransitPtr ( ::OSG::AnimDataSource::*createChannel_function_type )(  ) const;
            
            AnimDataSource_exposer.def( 
                "createChannel"
                , createChannel_function_type( &::OSG::AnimDataSource::createChannel ) );
        
        }
        { //::OSG::AnimDataSource::dump
        
            typedef void ( ::OSG::AnimDataSource::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            AnimDataSource_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::AnimDataSource::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::AnimDataSource::getLength
        
            typedef ::OSG::Real32 ( ::OSG::AnimDataSource::*getLength_function_type )(  ) const;
            
            AnimDataSource_exposer.def( 
                "getLength"
                , getLength_function_type( &::OSG::AnimDataSource::getLength ) );
        
        }
        pyopensg::register_transit< OSG::AnimDataSource >::execute();
        bp::register_ptr_to_python< OSG::AnimDataSource::ObjRecPtr >();
        bp::implicitly_convertible< OSG::AnimDataSource::ObjRecPtr, OSG::AnimDataSource* >();
        bp::implicitly_convertible< OSG::AnimDataSource::ObjRecPtr, OSG::AnimDataSource::ObjCPtr >();
        bp::implicitly_convertible< OSG::AnimDataSource::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::AnimDataSource::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::AnimDataSource::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
    }

}
