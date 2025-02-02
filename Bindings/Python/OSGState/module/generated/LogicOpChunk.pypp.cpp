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
#include "LogicOpChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_LogicOpChunk_class(){

    { //::OSG::LogicOpChunk
        typedef bp::class_< OSG::LogicOpChunk, bp::bases< OSG::LogicOpChunkBase >, OSG::LogicOpChunk::ObjRecPtr, boost::noncopyable > LogicOpChunk_exposer_t;
        LogicOpChunk_exposer_t LogicOpChunk_exposer = LogicOpChunk_exposer_t( "LogicOpChunk", bp::no_init );
        bp::scope LogicOpChunk_scope( LogicOpChunk_exposer );
        { //::OSG::LogicOpChunk::changed
        
            typedef void ( ::OSG::LogicOpChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            LogicOpChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::LogicOpChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::LogicOpChunk::dump
        
            typedef void ( ::OSG::LogicOpChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            LogicOpChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::LogicOpChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::LogicOpChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::LogicOpChunk::*getClass_function_type )(  ) const;
            
            LogicOpChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::LogicOpChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LogicOpChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            LogicOpChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::LogicOpChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LogicOpChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            LogicOpChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::LogicOpChunk::getStaticClassId ) );
        
        }
        { //::OSG::LogicOpChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::LogicOpChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            LogicOpChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::LogicOpChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        LogicOpChunk_exposer.staticmethod( "getStaticClass" );
        LogicOpChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::LogicOpChunk >::execute();
        bp::implicitly_convertible< OSG::LogicOpChunk::ObjRecPtr, OSG::LogicOpChunk* >();
        bp::implicitly_convertible< OSG::LogicOpChunk::ObjRecPtr, OSG::LogicOpChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::LogicOpChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::LogicOpChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::LogicOpChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
