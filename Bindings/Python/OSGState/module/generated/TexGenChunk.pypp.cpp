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
#include "TexGenChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TexGenChunk_class(){

    { //::OSG::TexGenChunk
        typedef bp::class_< OSG::TexGenChunk, bp::bases< OSG::TexGenChunkBase >, OSG::TexGenChunk::ObjRecPtr, boost::noncopyable > TexGenChunk_exposer_t;
        TexGenChunk_exposer_t TexGenChunk_exposer = TexGenChunk_exposer_t( "TexGenChunk", bp::no_init );
        bp::scope TexGenChunk_scope( TexGenChunk_exposer );
        { //::OSG::TexGenChunk::changed
        
            typedef void ( ::OSG::TexGenChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TexGenChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TexGenChunk::changed )
                , ( bp::arg("whichField"), bp::arg("from"), bp::arg("details") ) );
        
        }
        { //::OSG::TexGenChunk::dump
        
            typedef void ( ::OSG::TexGenChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TexGenChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TexGenChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TexGenChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::TexGenChunk::*getClass_function_type )(  ) const;
            
            TexGenChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::TexGenChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            TexGenChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::TexGenChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TexGenChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            TexGenChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::TexGenChunk::getStaticClassId ) );
        
        }
        { //::OSG::TexGenChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::TexGenChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            TexGenChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::TexGenChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        TexGenChunk_exposer.staticmethod( "getStaticClass" );
        TexGenChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::TexGenChunk >::execute();
        bp::implicitly_convertible< OSG::TexGenChunk::ObjRecPtr, OSG::TexGenChunk* >();
        bp::implicitly_convertible< OSG::TexGenChunk::ObjRecPtr, OSG::TexGenChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::TexGenChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::TexGenChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TexGenChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
