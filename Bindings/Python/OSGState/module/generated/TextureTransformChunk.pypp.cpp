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
#include "TextureTransformChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TextureTransformChunk_class(){

    { //::OSG::TextureTransformChunk
        typedef bp::class_< OSG::TextureTransformChunk, bp::bases< OSG::TextureTransformChunkBase >, OSG::TextureTransformChunk::ObjRecPtr, boost::noncopyable > TextureTransformChunk_exposer_t;
        TextureTransformChunk_exposer_t TextureTransformChunk_exposer = TextureTransformChunk_exposer_t( "TextureTransformChunk", bp::no_init );
        bp::scope TextureTransformChunk_scope( TextureTransformChunk_exposer );
        { //::OSG::TextureTransformChunk::changed
        
            typedef void ( ::OSG::TextureTransformChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TextureTransformChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TextureTransformChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::TextureTransformChunk::dump
        
            typedef void ( ::OSG::TextureTransformChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TextureTransformChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TextureTransformChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TextureTransformChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::TextureTransformChunk::*getClass_function_type )(  ) const;
            
            TextureTransformChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::TextureTransformChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureTransformChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            TextureTransformChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::TextureTransformChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureTransformChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            TextureTransformChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::TextureTransformChunk::getStaticClassId ) );
        
        }
        { //::OSG::TextureTransformChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::TextureTransformChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            TextureTransformChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::TextureTransformChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        TextureTransformChunk_exposer.staticmethod( "getStaticClass" );
        TextureTransformChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::TextureTransformChunk >::execute();
        bp::implicitly_convertible< OSG::TextureTransformChunk::ObjRecPtr, OSG::TextureTransformChunk* >();
        bp::implicitly_convertible< OSG::TextureTransformChunk::ObjRecPtr, OSG::TextureTransformChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::TextureTransformChunk::ObjRecPtr, OSG::TransformChunk* >();
        bp::implicitly_convertible< OSG::TextureTransformChunk::ObjRecPtr, OSG::TransformChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TextureTransformChunk::ObjRecPtr, OSG::TransformChunk::ObjCPtr>();
    }

}
