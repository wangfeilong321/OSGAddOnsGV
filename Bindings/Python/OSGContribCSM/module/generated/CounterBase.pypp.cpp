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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CounterBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CounterBase_class(){

    { //::OSG::CounterBase
        typedef bp::class_< OSG::CounterBase, bp::bases< ::OSG::NodeCore >, boost::noncopyable > CounterBase_exposer_t;
        CounterBase_exposer_t CounterBase_exposer = CounterBase_exposer_t( "CounterBase", bp::no_init );
        bp::scope CounterBase_scope( CounterBase_exposer );
        bp::scope().attr("IncTriggerFieldId") = (int)OSG::CounterBase::IncTriggerFieldId;
        bp::scope().attr("DecTriggerFieldId") = (int)OSG::CounterBase::DecTriggerFieldId;
        bp::scope().attr("ResetTriggerFieldId") = (int)OSG::CounterBase::ResetTriggerFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CounterBase::NextFieldId;
        { //::OSG::CounterBase::copyFromBin
        
            typedef void ( ::OSG::CounterBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CounterBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CounterBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CounterBase::copyToBin
        
            typedef void ( ::OSG::CounterBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CounterBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CounterBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CounterBase::create
        
            typedef ::OSG::CounterTransitPtr ( *create_function_type )(  );
            
            CounterBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CounterBase::create ) );
        
        }
        { //::OSG::CounterBase::createDependent
        
            typedef ::OSG::CounterTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CounterBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CounterBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CounterBase::createLocal
        
            typedef ::OSG::CounterTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CounterBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CounterBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CounterBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CounterBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CounterBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CounterBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CounterBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CounterBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CounterBase::getClassGroupId ) );
        
        }
        { //::OSG::CounterBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CounterBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CounterBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CounterBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CounterBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CounterBase::getClassTypeId ) );
        
        }
        { //::OSG::CounterBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CounterBase::*getContainerSize_function_type )(  ) const;
            
            CounterBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CounterBase::getContainerSize ) );
        
        }
        { //::OSG::CounterBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CounterBase::*getType_function_type )(  ) ;
            
            CounterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CounterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CounterBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CounterBase::*getType_function_type )(  ) const;
            
            CounterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CounterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        CounterBase_exposer.staticmethod( "create" );
        CounterBase_exposer.staticmethod( "createDependent" );
        CounterBase_exposer.staticmethod( "createLocal" );
        CounterBase_exposer.staticmethod( "getClassGroupId" );
        CounterBase_exposer.staticmethod( "getClassType" );
        CounterBase_exposer.staticmethod( "getClassTypeId" );
    }

}
