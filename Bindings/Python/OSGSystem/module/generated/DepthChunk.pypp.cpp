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
#include "DepthChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DepthChunk_class(){

    { //::OSG::DepthChunk
        typedef bp::class_< OSG::DepthChunk, bp::bases< OSG::DepthChunkBase >, OSG::DepthChunk::ObjRecPtr, boost::noncopyable > DepthChunk_exposer_t;
        DepthChunk_exposer_t DepthChunk_exposer = DepthChunk_exposer_t( "DepthChunk", bp::no_init );
        bp::scope DepthChunk_scope( DepthChunk_exposer );
        { //::OSG::DepthChunk::changed
        
            typedef void ( ::OSG::DepthChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DepthChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DepthChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::DepthChunk::dump
        
            typedef void ( ::OSG::DepthChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DepthChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DepthChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::DepthChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::DepthChunk::*getClass_function_type )(  ) const;
            
            DepthChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::DepthChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DepthChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            DepthChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::DepthChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DepthChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            DepthChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::DepthChunk::getStaticClassId ) );
        
        }
        { //::OSG::DepthChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::DepthChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            DepthChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::DepthChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        DepthChunk_exposer.staticmethod( "getStaticClass" );
        DepthChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::DepthChunk >::execute();
        bp::implicitly_convertible< OSG::DepthChunk::ObjRecPtr, OSG::DepthChunk* >();
        bp::implicitly_convertible< OSG::DepthChunk::ObjRecPtr, OSG::DepthChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::DepthChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::DepthChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DepthChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
