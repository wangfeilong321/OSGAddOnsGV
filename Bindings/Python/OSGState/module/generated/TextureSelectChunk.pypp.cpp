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
#include "TextureSelectChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TextureSelectChunk_class(){

    { //::OSG::TextureSelectChunk
        typedef bp::class_< OSG::TextureSelectChunk, bp::bases< OSG::TextureSelectChunkBase >, OSG::TextureSelectChunk::ObjRecPtr, boost::noncopyable > TextureSelectChunk_exposer_t;
        TextureSelectChunk_exposer_t TextureSelectChunk_exposer = TextureSelectChunk_exposer_t( "TextureSelectChunk", bp::no_init );
        bp::scope TextureSelectChunk_scope( TextureSelectChunk_exposer );
        { //::OSG::TextureSelectChunk::changed
        
            typedef void ( ::OSG::TextureSelectChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TextureSelectChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TextureSelectChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::TextureSelectChunk::dump
        
            typedef void ( ::OSG::TextureSelectChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TextureSelectChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TextureSelectChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TextureSelectChunk::isTransparent
        
            typedef bool ( ::OSG::TextureSelectChunk::*isTransparent_function_type )(  ) const;
            
            TextureSelectChunk_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::TextureSelectChunk::isTransparent ) );
        
        }
        { //::OSG::TextureSelectChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::TextureSelectChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            TextureSelectChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::TextureSelectChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        pyopensg::register_transit< OSG::TextureSelectChunk >::execute();
        bp::implicitly_convertible< OSG::TextureSelectChunk::ObjRecPtr, OSG::TextureSelectChunk* >();
        bp::implicitly_convertible< OSG::TextureSelectChunk::ObjRecPtr, OSG::TextureSelectChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::TextureSelectChunk::ObjRecPtr, OSG::TextureBaseChunk* >();
        bp::implicitly_convertible< OSG::TextureSelectChunk::ObjRecPtr, OSG::TextureBaseChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TextureSelectChunk::ObjRecPtr, OSG::TextureBaseChunk::ObjCPtr>();
    }

}
