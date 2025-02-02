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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TextureEnvChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TextureEnvChunk_class(){

    { //::OSG::TextureEnvChunk
        typedef bp::class_< OSG::TextureEnvChunk, bp::bases< OSG::TextureEnvChunkBase >, OSG::TextureEnvChunk::ObjRecPtr, boost::noncopyable > TextureEnvChunk_exposer_t;
        TextureEnvChunk_exposer_t TextureEnvChunk_exposer = TextureEnvChunk_exposer_t( "TextureEnvChunk", bp::no_init );
        bp::scope TextureEnvChunk_scope( TextureEnvChunk_exposer );
        { //::OSG::TextureEnvChunk::changed
        
            typedef void ( ::OSG::TextureEnvChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TextureEnvChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TextureEnvChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::TextureEnvChunk::dump
        
            typedef void ( ::OSG::TextureEnvChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TextureEnvChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TextureEnvChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TextureEnvChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::TextureEnvChunk::*getClass_function_type )(  ) const;
            
            TextureEnvChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::TextureEnvChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureEnvChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            TextureEnvChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::TextureEnvChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureEnvChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            TextureEnvChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::TextureEnvChunk::getStaticClassId ) );
        
        }
        { //::OSG::TextureEnvChunk::isTransparent
        
            typedef bool ( ::OSG::TextureEnvChunk::*isTransparent_function_type )(  ) const;
            
            TextureEnvChunk_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::TextureEnvChunk::isTransparent ) );
        
        }
        { //::OSG::TextureEnvChunk::setShaderOffsetMatrix
        
            typedef void ( ::OSG::TextureEnvChunk::*setShaderOffsetMatrix_function_type )( ::OSG::Real32,::OSG::Real32,::OSG::Real32,::OSG::Real32 ) ;
            
            TextureEnvChunk_exposer.def( 
                "setShaderOffsetMatrix"
                , setShaderOffsetMatrix_function_type( &::OSG::TextureEnvChunk::setShaderOffsetMatrix )
                , ( bp::arg("m11"), bp::arg("m12"), bp::arg("m21"), bp::arg("m22") ) );
        
        }
        { //::OSG::TextureEnvChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::TextureEnvChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            TextureEnvChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::TextureEnvChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        TextureEnvChunk_exposer.staticmethod( "getStaticClass" );
        TextureEnvChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::TextureEnvChunk >::execute();
        bp::implicitly_convertible< OSG::TextureEnvChunk::ObjRecPtr, OSG::TextureEnvChunk* >();
        bp::implicitly_convertible< OSG::TextureEnvChunk::ObjRecPtr, OSG::TextureEnvChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::TextureEnvChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::TextureEnvChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TextureEnvChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
