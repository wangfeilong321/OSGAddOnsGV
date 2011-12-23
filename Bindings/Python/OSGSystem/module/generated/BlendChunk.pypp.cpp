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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "BlendChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_BlendChunk_class(){

    { //::OSG::BlendChunk
        typedef bp::class_< OSG::BlendChunk, bp::bases< OSG::BlendChunkBase >, OSG::BlendChunk::ObjRecPtr, boost::noncopyable > BlendChunk_exposer_t;
        BlendChunk_exposer_t BlendChunk_exposer = BlendChunk_exposer_t( "BlendChunk", bp::no_init );
        bp::scope BlendChunk_scope( BlendChunk_exposer );
        { //::OSG::BlendChunk::changed
        
            typedef void ( ::OSG::BlendChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            BlendChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::BlendChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::BlendChunk::dump
        
            typedef void ( ::OSG::BlendChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            BlendChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::BlendChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::BlendChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::BlendChunk::*getClass_function_type )(  ) const;
            
            BlendChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::BlendChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            BlendChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::BlendChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BlendChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            BlendChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::BlendChunk::getStaticClassId ) );
        
        }
        { //::OSG::BlendChunk::isTransparent
        
            typedef bool ( ::OSG::BlendChunk::*isTransparent_function_type )(  ) const;
            
            BlendChunk_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::BlendChunk::isTransparent ) );
        
        }
        { //::OSG::BlendChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::BlendChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            BlendChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::BlendChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        BlendChunk_exposer.staticmethod( "getStaticClass" );
        BlendChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::BlendChunk >::execute();
        bp::implicitly_convertible< OSG::BlendChunk::ObjRecPtr, OSG::BlendChunk* >();
        bp::implicitly_convertible< OSG::BlendChunk::ObjRecPtr, OSG::BlendChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::BlendChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::BlendChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::BlendChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
