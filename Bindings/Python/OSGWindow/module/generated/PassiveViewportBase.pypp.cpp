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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PassiveViewportBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PassiveViewportBase_class(){

    { //::OSG::PassiveViewportBase
        typedef bp::class_< OSG::PassiveViewportBase, bp::bases< ::OSG::Viewport >, boost::noncopyable > PassiveViewportBase_exposer_t;
        PassiveViewportBase_exposer_t PassiveViewportBase_exposer = PassiveViewportBase_exposer_t( "PassiveViewportBase", bp::no_init );
        bp::scope PassiveViewportBase_scope( PassiveViewportBase_exposer );
        { //::OSG::PassiveViewportBase::copyFromBin
        
            typedef void ( ::OSG::PassiveViewportBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PassiveViewportBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PassiveViewportBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveViewportBase::copyToBin
        
            typedef void ( ::OSG::PassiveViewportBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PassiveViewportBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PassiveViewportBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveViewportBase::create
        
            typedef ::OSG::PassiveViewportTransitPtr ( *create_function_type )(  );
            
            PassiveViewportBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PassiveViewportBase::create ) );
        
        }
        { //::OSG::PassiveViewportBase::createDependent
        
            typedef ::OSG::PassiveViewportTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PassiveViewportBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PassiveViewportBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PassiveViewportBase::createLocal
        
            typedef ::OSG::PassiveViewportTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PassiveViewportBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PassiveViewportBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PassiveViewportBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PassiveViewportBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PassiveViewportBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PassiveViewportBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PassiveViewportBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PassiveViewportBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PassiveViewportBase::getClassGroupId ) );
        
        }
        { //::OSG::PassiveViewportBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PassiveViewportBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PassiveViewportBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PassiveViewportBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PassiveViewportBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PassiveViewportBase::getClassTypeId ) );
        
        }
        { //::OSG::PassiveViewportBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PassiveViewportBase::*getContainerSize_function_type )(  ) const;
            
            PassiveViewportBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PassiveViewportBase::getContainerSize ) );
        
        }
        { //::OSG::PassiveViewportBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PassiveViewportBase::*getType_function_type )(  ) ;
            
            PassiveViewportBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PassiveViewportBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PassiveViewportBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PassiveViewportBase::*getType_function_type )(  ) const;
            
            PassiveViewportBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PassiveViewportBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        PassiveViewportBase_exposer.staticmethod( "create" );
        PassiveViewportBase_exposer.staticmethod( "createDependent" );
        PassiveViewportBase_exposer.staticmethod( "createLocal" );
        PassiveViewportBase_exposer.staticmethod( "getClassGroupId" );
        PassiveViewportBase_exposer.staticmethod( "getClassType" );
        PassiveViewportBase_exposer.staticmethod( "getClassTypeId" );
    }

}
