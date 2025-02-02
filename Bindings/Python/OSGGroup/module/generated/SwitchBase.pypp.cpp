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
#include "SwitchBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SwitchBase_class(){

    { //::OSG::SwitchBase
        typedef bp::class_< OSG::SwitchBase, bp::bases< ::OSG::Group >, boost::noncopyable > SwitchBase_exposer_t;
        SwitchBase_exposer_t SwitchBase_exposer = SwitchBase_exposer_t( "SwitchBase", bp::no_init );
        bp::scope SwitchBase_scope( SwitchBase_exposer );
        bp::scope().attr("ChoiceFieldId") = (int)OSG::SwitchBase::ChoiceFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SwitchBase::NextFieldId;
        { //::OSG::SwitchBase::copyFromBin
        
            typedef void ( ::OSG::SwitchBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SwitchBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SwitchBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SwitchBase::copyToBin
        
            typedef void ( ::OSG::SwitchBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SwitchBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SwitchBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SwitchBase::create
        
            typedef ::OSG::SwitchTransitPtr ( *create_function_type )(  );
            
            SwitchBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SwitchBase::create ) );
        
        }
        { //::OSG::SwitchBase::createDependent
        
            typedef ::OSG::SwitchTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SwitchBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SwitchBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SwitchBase::createLocal
        
            typedef ::OSG::SwitchTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SwitchBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SwitchBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SwitchBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SwitchBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SwitchBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SwitchBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SwitchBase::getChoice
        
            typedef ::OSG::Int32 ( ::OSG::SwitchBase::*getChoice_function_type )(  ) const;
            
            SwitchBase_exposer.def( 
                "getChoice"
                , getChoice_function_type( &::OSG::SwitchBase::getChoice ) );
        
        }
        { //::OSG::SwitchBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SwitchBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SwitchBase::getClassGroupId ) );
        
        }
        { //::OSG::SwitchBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SwitchBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SwitchBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SwitchBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SwitchBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SwitchBase::getClassTypeId ) );
        
        }
        { //::OSG::SwitchBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SwitchBase::*getContainerSize_function_type )(  ) const;
            
            SwitchBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SwitchBase::getContainerSize ) );
        
        }
        { //::OSG::SwitchBase::getSFChoice
        
            typedef ::OSG::SFInt32 const * ( ::OSG::SwitchBase::*getSFChoice_function_type )(  ) const;
            
            SwitchBase_exposer.def( 
                "getSFChoice"
                , getSFChoice_function_type( &::OSG::SwitchBase::getSFChoice )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SwitchBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SwitchBase::*getType_function_type )(  ) ;
            
            SwitchBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SwitchBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SwitchBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SwitchBase::*getType_function_type )(  ) const;
            
            SwitchBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SwitchBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SwitchBase::setChoice
        
            typedef void ( ::OSG::SwitchBase::*setChoice_function_type )( ::OSG::Int32 const ) ;
            
            SwitchBase_exposer.def( 
                "setChoice"
                , setChoice_function_type( &::OSG::SwitchBase::setChoice )
                , ( bp::arg("value") ) );
        
        }
        SwitchBase_exposer.staticmethod( "create" );
        SwitchBase_exposer.staticmethod( "createDependent" );
        SwitchBase_exposer.staticmethod( "createLocal" );
        SwitchBase_exposer.staticmethod( "getClassGroupId" );
        SwitchBase_exposer.staticmethod( "getClassType" );
        SwitchBase_exposer.staticmethod( "getClassTypeId" );
    }

}
