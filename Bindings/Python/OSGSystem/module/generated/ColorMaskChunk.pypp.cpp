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
#include "ColorMaskChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ColorMaskChunk_class(){

    { //::OSG::ColorMaskChunk
        typedef bp::class_< OSG::ColorMaskChunk, bp::bases< OSG::ColorMaskChunkBase >, OSG::ColorMaskChunk::ObjRecPtr, boost::noncopyable > ColorMaskChunk_exposer_t;
        ColorMaskChunk_exposer_t ColorMaskChunk_exposer = ColorMaskChunk_exposer_t( "ColorMaskChunk", bp::no_init );
        bp::scope ColorMaskChunk_scope( ColorMaskChunk_exposer );
        { //::OSG::ColorMaskChunk::changed
        
            typedef void ( ::OSG::ColorMaskChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ColorMaskChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ColorMaskChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ColorMaskChunk::dump
        
            typedef void ( ::OSG::ColorMaskChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ColorMaskChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ColorMaskChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ColorMaskChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::ColorMaskChunk::*getClass_function_type )(  ) const;
            
            ColorMaskChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::ColorMaskChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorMaskChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            ColorMaskChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::ColorMaskChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorMaskChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            ColorMaskChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::ColorMaskChunk::getStaticClassId ) );
        
        }
        { //::OSG::ColorMaskChunk::setMask
        
            typedef void ( ::OSG::ColorMaskChunk::*setMask_function_type )( bool const &,bool const &,bool const &,bool const & ) ;
            
            ColorMaskChunk_exposer.def( 
                "setMask"
                , setMask_function_type( &::OSG::ColorMaskChunk::setMask )
                , ( bp::arg("r"), bp::arg("g"), bp::arg("b"), bp::arg("a") ) );
        
        }
        { //::OSG::ColorMaskChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::ColorMaskChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            ColorMaskChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::ColorMaskChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        ColorMaskChunk_exposer.staticmethod( "getStaticClass" );
        ColorMaskChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::ColorMaskChunk >::execute();
        bp::implicitly_convertible< OSG::ColorMaskChunk::ObjRecPtr, OSG::ColorMaskChunk* >();
        bp::implicitly_convertible< OSG::ColorMaskChunk::ObjRecPtr, OSG::ColorMaskChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::ColorMaskChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::ColorMaskChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ColorMaskChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
