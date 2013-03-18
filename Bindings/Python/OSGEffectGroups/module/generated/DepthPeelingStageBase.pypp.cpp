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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DepthPeelingStageBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DepthPeelingStageBase_class(){

    { //::OSG::DepthPeelingStageBase
        typedef bp::class_< OSG::DepthPeelingStageBase, bp::bases< ::OSG::Stage >, boost::noncopyable > DepthPeelingStageBase_exposer_t;
        DepthPeelingStageBase_exposer_t DepthPeelingStageBase_exposer = DepthPeelingStageBase_exposer_t( "DepthPeelingStageBase", bp::no_init );
        bp::scope DepthPeelingStageBase_scope( DepthPeelingStageBase_exposer );
        bp::scope().attr("NumPassesFieldId") = (int)OSG::DepthPeelingStageBase::NumPassesFieldId;
        bp::scope().attr("DepthTexUnitFieldId") = (int)OSG::DepthPeelingStageBase::DepthTexUnitFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::DepthPeelingStageBase::NextFieldId;
        { //::OSG::DepthPeelingStageBase::copyFromBin
        
            typedef void ( ::OSG::DepthPeelingStageBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DepthPeelingStageBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::DepthPeelingStageBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DepthPeelingStageBase::copyToBin
        
            typedef void ( ::OSG::DepthPeelingStageBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DepthPeelingStageBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::DepthPeelingStageBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DepthPeelingStageBase::create
        
            typedef ::OSG::DepthPeelingStageTransitPtr ( *create_function_type )(  );
            
            DepthPeelingStageBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::DepthPeelingStageBase::create ) );
        
        }
        { //::OSG::DepthPeelingStageBase::createDependent
        
            typedef ::OSG::DepthPeelingStageTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            DepthPeelingStageBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::DepthPeelingStageBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::DepthPeelingStageBase::createLocal
        
            typedef ::OSG::DepthPeelingStageTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            DepthPeelingStageBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::DepthPeelingStageBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::DepthPeelingStageBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::DepthPeelingStageBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            DepthPeelingStageBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::DepthPeelingStageBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::DepthPeelingStageBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            DepthPeelingStageBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::DepthPeelingStageBase::getClassGroupId ) );
        
        }
        { //::OSG::DepthPeelingStageBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            DepthPeelingStageBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::DepthPeelingStageBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::DepthPeelingStageBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            DepthPeelingStageBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::DepthPeelingStageBase::getClassTypeId ) );
        
        }
        { //::OSG::DepthPeelingStageBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::DepthPeelingStageBase::*getContainerSize_function_type )(  ) const;
            
            DepthPeelingStageBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::DepthPeelingStageBase::getContainerSize ) );
        
        }
        { //::OSG::DepthPeelingStageBase::getDepthTexUnit
        
            typedef ::OSG::UInt32 ( ::OSG::DepthPeelingStageBase::*getDepthTexUnit_function_type )(  ) const;
            
            DepthPeelingStageBase_exposer.def( 
                "getDepthTexUnit"
                , getDepthTexUnit_function_type( &::OSG::DepthPeelingStageBase::getDepthTexUnit ) );
        
        }
        { //::OSG::DepthPeelingStageBase::getNumPasses
        
            typedef ::OSG::UInt32 ( ::OSG::DepthPeelingStageBase::*getNumPasses_function_type )(  ) const;
            
            DepthPeelingStageBase_exposer.def( 
                "getNumPasses"
                , getNumPasses_function_type( &::OSG::DepthPeelingStageBase::getNumPasses ) );
        
        }
        { //::OSG::DepthPeelingStageBase::getSFDepthTexUnit
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::DepthPeelingStageBase::*getSFDepthTexUnit_function_type )(  ) const;
            
            DepthPeelingStageBase_exposer.def( 
                "getSFDepthTexUnit"
                , getSFDepthTexUnit_function_type( &::OSG::DepthPeelingStageBase::getSFDepthTexUnit )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DepthPeelingStageBase::getSFNumPasses
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::DepthPeelingStageBase::*getSFNumPasses_function_type )(  ) const;
            
            DepthPeelingStageBase_exposer.def( 
                "getSFNumPasses"
                , getSFNumPasses_function_type( &::OSG::DepthPeelingStageBase::getSFNumPasses )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DepthPeelingStageBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::DepthPeelingStageBase::*getType_function_type )(  ) ;
            
            DepthPeelingStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DepthPeelingStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DepthPeelingStageBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::DepthPeelingStageBase::*getType_function_type )(  ) const;
            
            DepthPeelingStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DepthPeelingStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DepthPeelingStageBase::setDepthTexUnit
        
            typedef void ( ::OSG::DepthPeelingStageBase::*setDepthTexUnit_function_type )( ::OSG::UInt32 const ) ;
            
            DepthPeelingStageBase_exposer.def( 
                "setDepthTexUnit"
                , setDepthTexUnit_function_type( &::OSG::DepthPeelingStageBase::setDepthTexUnit )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DepthPeelingStageBase::setNumPasses
        
            typedef void ( ::OSG::DepthPeelingStageBase::*setNumPasses_function_type )( ::OSG::UInt32 const ) ;
            
            DepthPeelingStageBase_exposer.def( 
                "setNumPasses"
                , setNumPasses_function_type( &::OSG::DepthPeelingStageBase::setNumPasses )
                , ( bp::arg("value") ) );
        
        }
        DepthPeelingStageBase_exposer.staticmethod( "create" );
        DepthPeelingStageBase_exposer.staticmethod( "createDependent" );
        DepthPeelingStageBase_exposer.staticmethod( "createLocal" );
        DepthPeelingStageBase_exposer.staticmethod( "getClassGroupId" );
        DepthPeelingStageBase_exposer.staticmethod( "getClassType" );
        DepthPeelingStageBase_exposer.staticmethod( "getClassTypeId" );
    }

}
