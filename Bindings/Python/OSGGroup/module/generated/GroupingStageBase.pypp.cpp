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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GroupingStageBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GroupingStageBase_class(){

    { //::OSG::GroupingStageBase
        typedef bp::class_< OSG::GroupingStageBase, bp::bases< OSG::RenderCallbackStage >, boost::noncopyable > GroupingStageBase_exposer_t;
        GroupingStageBase_exposer_t GroupingStageBase_exposer = GroupingStageBase_exposer_t( "GroupingStageBase", bp::no_init );
        bp::scope GroupingStageBase_scope( GroupingStageBase_exposer );
        { //::OSG::GroupingStageBase::copyFromBin
        
            typedef void ( ::OSG::GroupingStageBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GroupingStageBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GroupingStageBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GroupingStageBase::copyToBin
        
            typedef void ( ::OSG::GroupingStageBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GroupingStageBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GroupingStageBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GroupingStageBase::create
        
            typedef ::OSG::GroupingStageTransitPtr ( *create_function_type )(  );
            
            GroupingStageBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GroupingStageBase::create ) );
        
        }
        { //::OSG::GroupingStageBase::createDependent
        
            typedef ::OSG::GroupingStageTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GroupingStageBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GroupingStageBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GroupingStageBase::createLocal
        
            typedef ::OSG::GroupingStageTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GroupingStageBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GroupingStageBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GroupingStageBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GroupingStageBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GroupingStageBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GroupingStageBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GroupingStageBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GroupingStageBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GroupingStageBase::getClassGroupId ) );
        
        }
        { //::OSG::GroupingStageBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GroupingStageBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GroupingStageBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GroupingStageBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GroupingStageBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GroupingStageBase::getClassTypeId ) );
        
        }
        { //::OSG::GroupingStageBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GroupingStageBase::*getContainerSize_function_type )(  ) const;
            
            GroupingStageBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GroupingStageBase::getContainerSize ) );
        
        }
        { //::OSG::GroupingStageBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GroupingStageBase::*getType_function_type )(  ) ;
            
            GroupingStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GroupingStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GroupingStageBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GroupingStageBase::*getType_function_type )(  ) const;
            
            GroupingStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GroupingStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        GroupingStageBase_exposer.staticmethod( "create" );
        GroupingStageBase_exposer.staticmethod( "createDependent" );
        GroupingStageBase_exposer.staticmethod( "createLocal" );
        GroupingStageBase_exposer.staticmethod( "getClassGroupId" );
        GroupingStageBase_exposer.staticmethod( "getClassType" );
        GroupingStageBase_exposer.staticmethod( "getClassTypeId" );
    }

}
