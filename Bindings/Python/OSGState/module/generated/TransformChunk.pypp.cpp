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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TransformChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TransformChunk_class(){

    { //::OSG::TransformChunk
        typedef bp::class_< OSG::TransformChunk, bp::bases< OSG::TransformChunkBase >, OSG::TransformChunk::ObjRecPtr, boost::noncopyable > TransformChunk_exposer_t;
        TransformChunk_exposer_t TransformChunk_exposer = TransformChunk_exposer_t( "TransformChunk", bp::no_init );
        bp::scope TransformChunk_scope( TransformChunk_exposer );
        { //::OSG::TransformChunk::changed
        
            typedef void ( ::OSG::TransformChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TransformChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TransformChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::TransformChunk::dump
        
            typedef void ( ::OSG::TransformChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TransformChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TransformChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TransformChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::TransformChunk::*getClass_function_type )(  ) const;
            
            TransformChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::TransformChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TransformChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            TransformChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::TransformChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TransformChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            TransformChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::TransformChunk::getStaticClassId ) );
        
        }
        { //::OSG::TransformChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::TransformChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            TransformChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::TransformChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        TransformChunk_exposer.staticmethod( "getStaticClass" );
        TransformChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::TransformChunk >::execute();
        bp::implicitly_convertible< OSG::TransformChunk::ObjRecPtr, OSG::TransformChunk* >();
        bp::implicitly_convertible< OSG::TransformChunk::ObjRecPtr, OSG::TransformChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::TransformChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::TransformChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TransformChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
