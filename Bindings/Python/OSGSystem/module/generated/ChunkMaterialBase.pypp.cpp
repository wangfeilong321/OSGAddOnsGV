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
#include "ChunkMaterialBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ChunkMaterialBase_class(){

    { //::OSG::ChunkMaterialBase
        typedef bp::class_< OSG::ChunkMaterialBase, bp::bases< OSG::PrimeMaterial >, boost::noncopyable > ChunkMaterialBase_exposer_t;
        ChunkMaterialBase_exposer_t ChunkMaterialBase_exposer = ChunkMaterialBase_exposer_t( "ChunkMaterialBase", bp::no_init );
        bp::scope ChunkMaterialBase_scope( ChunkMaterialBase_exposer );
        bp::scope().attr("ChunksFieldId") = (int)OSG::ChunkMaterialBase::ChunksFieldId;
        bp::scope().attr("SlotsFieldId") = (int)OSG::ChunkMaterialBase::SlotsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ChunkMaterialBase::NextFieldId;
        { //::OSG::ChunkMaterialBase::copyFromBin
        
            typedef void ( ::OSG::ChunkMaterialBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ChunkMaterialBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ChunkMaterialBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ChunkMaterialBase::copyToBin
        
            typedef void ( ::OSG::ChunkMaterialBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ChunkMaterialBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ChunkMaterialBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ChunkMaterialBase::create
        
            typedef ::OSG::ChunkMaterialTransitPtr ( *create_function_type )(  );
            
            ChunkMaterialBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ChunkMaterialBase::create ) );
        
        }
        { //::OSG::ChunkMaterialBase::createDependent
        
            typedef ::OSG::ChunkMaterialTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ChunkMaterialBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ChunkMaterialBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ChunkMaterialBase::createLocal
        
            typedef ::OSG::ChunkMaterialTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ChunkMaterialBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ChunkMaterialBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ChunkMaterialBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ChunkMaterialBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ChunkMaterialBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ChunkMaterialBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ChunkMaterialBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ChunkMaterialBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ChunkMaterialBase::getClassGroupId ) );
        
        }
        { //::OSG::ChunkMaterialBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ChunkMaterialBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ChunkMaterialBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ChunkMaterialBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ChunkMaterialBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ChunkMaterialBase::getClassTypeId ) );
        
        }
        { //::OSG::ChunkMaterialBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ChunkMaterialBase::*getContainerSize_function_type )(  ) const;
            
            ChunkMaterialBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ChunkMaterialBase::getContainerSize ) );
        
        }
        { //::OSG::ChunkMaterialBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ChunkMaterialBase::*getType_function_type )(  ) ;
            
            ChunkMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ChunkMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ChunkMaterialBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ChunkMaterialBase::*getType_function_type )(  ) const;
            
            ChunkMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ChunkMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        ChunkMaterialBase_exposer.staticmethod( "create" );
        ChunkMaterialBase_exposer.staticmethod( "createDependent" );
        ChunkMaterialBase_exposer.staticmethod( "createLocal" );
        ChunkMaterialBase_exposer.staticmethod( "getClassGroupId" );
        ChunkMaterialBase_exposer.staticmethod( "getClassType" );
        ChunkMaterialBase_exposer.staticmethod( "getClassTypeId" );
    }

}
