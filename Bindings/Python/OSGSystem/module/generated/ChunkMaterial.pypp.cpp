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
#include "ChunkMaterial.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ChunkMaterial_getMFChunks(OSG::ChunkMaterial *self)
{
   boost::python::list result;
   OSG::MFUnrecStateChunkPtr const * mf_data = self->getMFChunks();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::StateChunk::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list ChunkMaterial_getMFSlots(OSG::ChunkMaterial *self)
{
   boost::python::list result;
   OSG::MFInt32 const * mf_data = self->getMFSlots();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ChunkMaterial_class(){

    { //::OSG::ChunkMaterial
        typedef bp::class_< OSG::ChunkMaterial, bp::bases< OSG::ChunkMaterialBase >, OSG::ChunkMaterial::ObjRecPtr, boost::noncopyable > ChunkMaterial_exposer_t;
        ChunkMaterial_exposer_t ChunkMaterial_exposer = ChunkMaterial_exposer_t( "ChunkMaterial", bp::no_init );
        bp::scope ChunkMaterial_scope( ChunkMaterial_exposer );
        { //::OSG::ChunkMaterial::addChunk
        
            typedef bool ( ::OSG::ChunkMaterial::*addChunk_function_type )( ::OSG::StateChunk *,::OSG::Int32 ) ;
            
            ChunkMaterial_exposer.def( 
                "addChunk"
                , addChunk_function_type( &::OSG::ChunkMaterial::addChunk )
                , ( bp::arg("chunk"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) ) );
        
        }
        { //::OSG::ChunkMaterial::changed
        
            typedef void ( ::OSG::ChunkMaterial::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ChunkMaterial_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ChunkMaterial::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::ChunkMaterial::clearChunks
        
            typedef void ( ::OSG::ChunkMaterial::*clearChunks_function_type )(  ) ;
            
            ChunkMaterial_exposer.def( 
                "clearChunks"
                , clearChunks_function_type( &::OSG::ChunkMaterial::clearChunks ) );
        
        }
        { //::OSG::ChunkMaterial::dump
        
            typedef void ( ::OSG::ChunkMaterial::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ChunkMaterial_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ChunkMaterial::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ChunkMaterial::fill
        
            typedef void ( ::OSG::ChunkMaterial::*fill_function_type )( ::OSG::ChunkBlock * ) ;
            
            ChunkMaterial_exposer.def( 
                "fill"
                , fill_function_type( &::OSG::ChunkMaterial::fill )
                , ( bp::arg("pBlock") ) );
        
        }
        { //::OSG::ChunkMaterial::find
        
            typedef ::OSG::Int32 ( ::OSG::ChunkMaterial::*find_function_type )( ::OSG::StateChunk * ) const;
            
            ChunkMaterial_exposer.def( 
                "find"
                , find_function_type( &::OSG::ChunkMaterial::find )
                , ( bp::arg("chunk") ) );
        
        }
        { //::OSG::ChunkMaterial::find
        
            typedef ::OSG::StateChunk * ( ::OSG::ChunkMaterial::*find_function_type )( ::OSG::FieldContainerType const &,::OSG::Int32 ) const;
            
            ChunkMaterial_exposer.def( 
                "find"
                , find_function_type( &::OSG::ChunkMaterial::find )
                , ( bp::arg("type"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ChunkMaterial::getChunk
        
            typedef ::OSG::StateChunk * ( ::OSG::ChunkMaterial::*getChunk_function_type )( ::OSG::UInt32 const ) const;
            
            ChunkMaterial_exposer.def( 
                "getChunk"
                , getChunk_function_type( &::OSG::ChunkMaterial::getChunk )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ChunkMaterial::getChunkSlot
        
            typedef bool ( ::OSG::ChunkMaterial::*getChunkSlot_function_type )( ::OSG::StateChunk *,::OSG::Int32 & ) const;
            
            ChunkMaterial_exposer.def( 
                "getChunkSlot"
                , getChunkSlot_function_type( &::OSG::ChunkMaterial::getChunkSlot )
                , ( bp::arg("chunk"), bp::arg("slot") ) );
        
        }
        { //::OSG::ChunkMaterial::insertChunk
        
            typedef bool ( ::OSG::ChunkMaterial::*insertChunk_function_type )( ::OSG::StateChunk *,::OSG::UInt32,::OSG::Int32 ) ;
            
            ChunkMaterial_exposer.def( 
                "insertChunk"
                , insertChunk_function_type( &::OSG::ChunkMaterial::insertChunk )
                , ( bp::arg("chunk"), bp::arg("chunkIndex"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) ) );
        
        }
        { //::OSG::ChunkMaterial::isTransparent
        
            typedef bool ( ::OSG::ChunkMaterial::*isTransparent_function_type )(  ) const;
            
            ChunkMaterial_exposer.def( 
                "isTransparent"
                , isTransparent_function_type( &::OSG::ChunkMaterial::isTransparent ) );
        
        }
        { //::OSG::ChunkMaterial::rebuildState
        
            typedef void ( ::OSG::ChunkMaterial::*rebuildState_function_type )(  ) ;
            
            ChunkMaterial_exposer.def( 
                "rebuildState"
                , rebuildState_function_type( &::OSG::ChunkMaterial::rebuildState ) );
        
        }
        { //::OSG::ChunkMaterial::setChunkSlot
        
            typedef bool ( ::OSG::ChunkMaterial::*setChunkSlot_function_type )( ::OSG::StateChunk *,::OSG::Int32 ) ;
            
            ChunkMaterial_exposer.def( 
                "setChunkSlot"
                , setChunkSlot_function_type( &::OSG::ChunkMaterial::setChunkSlot )
                , ( bp::arg("chunk"), bp::arg("slot") ) );
        
        }
        { //::OSG::ChunkMaterial::subChunk
        
            typedef bool ( ::OSG::ChunkMaterial::*subChunk_function_type )( ::OSG::StateChunk *,::OSG::Int32 ) ;
            
            ChunkMaterial_exposer.def( 
                "subChunk"
                , subChunk_function_type( &::OSG::ChunkMaterial::subChunk )
                , ( bp::arg("chunk"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) ) );
        
        }
        ChunkMaterial_exposer.def("getMFChunks",ChunkMaterial_getMFChunks);
        ChunkMaterial_exposer.def("getMFSlots",ChunkMaterial_getMFSlots);
        pyopensg::register_transit< OSG::ChunkMaterial >::execute();
        bp::implicitly_convertible< OSG::ChunkMaterial::ObjRecPtr, OSG::ChunkMaterial* >();
        bp::implicitly_convertible< OSG::ChunkMaterial::ObjRecPtr, OSG::ChunkMaterial::ObjCPtr >();
        bp::implicitly_convertible< OSG::ChunkMaterial::ObjRecPtr, OSG::Material* >();
        bp::implicitly_convertible< OSG::ChunkMaterial::ObjRecPtr, OSG::Material::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ChunkMaterial::ObjRecPtr, OSG::Material::ObjCPtr>();
    }

}
