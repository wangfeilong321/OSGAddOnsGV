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
#include "ChunkOverrideGroup.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ChunkOverrideGroup_class(){

    { //::OSG::ChunkOverrideGroup
        typedef bp::class_< OSG::ChunkOverrideGroup, OSG::ChunkOverrideGroup::ObjRecPtr, boost::noncopyable > ChunkOverrideGroup_exposer_t;
        ChunkOverrideGroup_exposer_t ChunkOverrideGroup_exposer = ChunkOverrideGroup_exposer_t( "ChunkOverrideGroup", bp::no_init );
        bp::scope ChunkOverrideGroup_scope( ChunkOverrideGroup_exposer );
        { //::OSG::ChunkOverrideGroup::addChunk
        
            typedef bool ( ::OSG::ChunkOverrideGroup::*addChunk_function_type )( ::OSG::StateChunk *,::OSG::Int32 ) ;
            
            ChunkOverrideGroup_exposer.def( 
                "addChunk"
                , addChunk_function_type( &::OSG::ChunkOverrideGroup::addChunk )
                , ( bp::arg("chunk"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) ) );
        
        }
        { //::OSG::ChunkOverrideGroup::addChunkBlock
        
            typedef void ( ::OSG::ChunkOverrideGroup::*addChunkBlock_function_type )( ::OSG::ChunkBlock * const,::OSG::ChunkBlockMapKey ) ;
            
            ChunkOverrideGroup_exposer.def( 
                "addChunkBlock"
                , addChunkBlock_function_type( &::OSG::ChunkOverrideGroup::addChunkBlock )
                , ( bp::arg("pChunkBlock"), bp::arg("key")=(::OSG::ChunkBlockMapKey)(0) ) );
        
        }
        { //::OSG::ChunkOverrideGroup::changed
        
            typedef void ( ::OSG::ChunkOverrideGroup::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ChunkOverrideGroup_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ChunkOverrideGroup::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ChunkOverrideGroup::dump
        
            typedef void ( ::OSG::ChunkOverrideGroup::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ChunkOverrideGroup_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ChunkOverrideGroup::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ChunkOverrideGroup::find
        
            typedef ::OSG::Int32 ( ::OSG::ChunkOverrideGroup::*find_function_type )( ::OSG::StateChunk * ) ;
            
            ChunkOverrideGroup_exposer.def( 
                "find"
                , find_function_type( &::OSG::ChunkOverrideGroup::find )
                , ( bp::arg("chunk") ) );
        
        }
        { //::OSG::ChunkOverrideGroup::find
        
            typedef ::OSG::StateChunk * ( ::OSG::ChunkOverrideGroup::*find_function_type )( ::OSG::StateChunkClass const &,::OSG::Int32 ) ;
            
            ChunkOverrideGroup_exposer.def( 
                "find"
                , find_function_type( &::OSG::ChunkOverrideGroup::find )
                , ( bp::arg("type"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ChunkOverrideGroup::findChunkBlock
        
            typedef ::OSG::ChunkBlock * ( ::OSG::ChunkOverrideGroup::*findChunkBlock_function_type )( ::OSG::ChunkBlockMapKey ) const;
            
            ChunkOverrideGroup_exposer.def( 
                "findChunkBlock"
                , findChunkBlock_function_type( &::OSG::ChunkOverrideGroup::findChunkBlock )
                , ( bp::arg("key") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ChunkOverrideGroup::getSFChunkBlockStore
        
            typedef ::OSG::SFChunkBlockPtrMap const * ( ::OSG::ChunkOverrideGroup::*getSFChunkBlockStore_function_type )(  ) const;
            
            ChunkOverrideGroup_exposer.def( 
                "getSFChunkBlockStore"
                , getSFChunkBlockStore_function_type( &::OSG::ChunkOverrideGroup::getSFChunkBlockStore )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ChunkOverrideGroup::subChunk
        
            typedef bool ( ::OSG::ChunkOverrideGroup::*subChunk_function_type )( ::OSG::StateChunk *,::OSG::Int32 ) ;
            
            ChunkOverrideGroup_exposer.def( 
                "subChunk"
                , subChunk_function_type( &::OSG::ChunkOverrideGroup::subChunk )
                , ( bp::arg("chunk"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) ) );
        
        }
        { //::OSG::ChunkOverrideGroup::subChunkBlock
        
            typedef void ( ::OSG::ChunkOverrideGroup::*subChunkBlock_function_type )( ::OSG::ChunkBlockMapKey ) ;
            
            ChunkOverrideGroup_exposer.def( 
                "subChunkBlock"
                , subChunkBlock_function_type( &::OSG::ChunkOverrideGroup::subChunkBlock )
                , ( bp::arg("key")=(::OSG::ChunkBlockMapKey)(0) ) );
        
        }
        pyopensg::register_transit< OSG::ChunkOverrideGroup >::execute();
        bp::implicitly_convertible< OSG::ChunkOverrideGroup::ObjRecPtr, OSG::ChunkOverrideGroup* >();
        bp::implicitly_convertible< OSG::ChunkOverrideGroup::ObjRecPtr, OSG::ChunkOverrideGroup::ObjCPtr >();
        bp::implicitly_convertible< OSG::ChunkOverrideGroup::ObjRecPtr, OSG::Group* >();
        bp::implicitly_convertible< OSG::ChunkOverrideGroup::ObjRecPtr, OSG::Group::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ChunkOverrideGroup::ObjRecPtr, OSG::Group::ObjCPtr>();
    }

}
