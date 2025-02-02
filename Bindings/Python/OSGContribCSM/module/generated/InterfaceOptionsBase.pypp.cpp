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
#include "InterfaceOptionsBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_InterfaceOptionsBase_class(){

    { //::OSG::InterfaceOptionsBase
        typedef bp::class_< OSG::InterfaceOptionsBase, bp::bases< ::OSG::FieldContainer >, boost::noncopyable > InterfaceOptionsBase_exposer_t;
        InterfaceOptionsBase_exposer_t InterfaceOptionsBase_exposer = InterfaceOptionsBase_exposer_t( "InterfaceOptionsBase", bp::no_init );
        bp::scope InterfaceOptionsBase_scope( InterfaceOptionsBase_exposer );
        bp::scope().attr("ParentFieldId") = (int)OSG::InterfaceOptionsBase::ParentFieldId;
        bp::scope().attr("NapTimeFieldId") = (int)OSG::InterfaceOptionsBase::NapTimeFieldId;
        bp::scope().attr("BufferSizeFieldId") = (int)OSG::InterfaceOptionsBase::BufferSizeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::InterfaceOptionsBase::NextFieldId;
        { //::OSG::InterfaceOptionsBase::copyFromBin
        
            typedef void ( ::OSG::InterfaceOptionsBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            InterfaceOptionsBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::InterfaceOptionsBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::InterfaceOptionsBase::copyToBin
        
            typedef void ( ::OSG::InterfaceOptionsBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            InterfaceOptionsBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::InterfaceOptionsBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::InterfaceOptionsBase::create
        
            typedef ::OSG::InterfaceOptionsTransitPtr ( *create_function_type )(  );
            
            InterfaceOptionsBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::InterfaceOptionsBase::create ) );
        
        }
        { //::OSG::InterfaceOptionsBase::createDependent
        
            typedef ::OSG::InterfaceOptionsTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            InterfaceOptionsBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::InterfaceOptionsBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::InterfaceOptionsBase::createLocal
        
            typedef ::OSG::InterfaceOptionsTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            InterfaceOptionsBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::InterfaceOptionsBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::InterfaceOptionsBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::InterfaceOptionsBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            InterfaceOptionsBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::InterfaceOptionsBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::InterfaceOptionsBase::getBufferSize
        
            typedef ::OSG::UInt32 ( ::OSG::InterfaceOptionsBase::*getBufferSize_function_type )(  ) const;
            
            InterfaceOptionsBase_exposer.def( 
                "getBufferSize"
                , getBufferSize_function_type( &::OSG::InterfaceOptionsBase::getBufferSize ) );
        
        }
        { //::OSG::InterfaceOptionsBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            InterfaceOptionsBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::InterfaceOptionsBase::getClassGroupId ) );
        
        }
        { //::OSG::InterfaceOptionsBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            InterfaceOptionsBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::InterfaceOptionsBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::InterfaceOptionsBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            InterfaceOptionsBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::InterfaceOptionsBase::getClassTypeId ) );
        
        }
        { //::OSG::InterfaceOptionsBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::InterfaceOptionsBase::*getContainerSize_function_type )(  ) const;
            
            InterfaceOptionsBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::InterfaceOptionsBase::getContainerSize ) );
        
        }
        { //::OSG::InterfaceOptionsBase::getNapTime
        
            typedef ::OSG::UInt32 ( ::OSG::InterfaceOptionsBase::*getNapTime_function_type )(  ) const;
            
            InterfaceOptionsBase_exposer.def( 
                "getNapTime"
                , getNapTime_function_type( &::OSG::InterfaceOptionsBase::getNapTime ) );
        
        }
        { //::OSG::InterfaceOptionsBase::getSFBufferSize
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::InterfaceOptionsBase::*getSFBufferSize_function_type )(  ) const;
            
            InterfaceOptionsBase_exposer.def( 
                "getSFBufferSize"
                , getSFBufferSize_function_type( &::OSG::InterfaceOptionsBase::getSFBufferSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::InterfaceOptionsBase::getSFNapTime
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::InterfaceOptionsBase::*getSFNapTime_function_type )(  ) const;
            
            InterfaceOptionsBase_exposer.def( 
                "getSFNapTime"
                , getSFNapTime_function_type( &::OSG::InterfaceOptionsBase::getSFNapTime )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::InterfaceOptionsBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::InterfaceOptionsBase::*getType_function_type )(  ) ;
            
            InterfaceOptionsBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::InterfaceOptionsBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::InterfaceOptionsBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::InterfaceOptionsBase::*getType_function_type )(  ) const;
            
            InterfaceOptionsBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::InterfaceOptionsBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::InterfaceOptionsBase::setBufferSize
        
            typedef void ( ::OSG::InterfaceOptionsBase::*setBufferSize_function_type )( ::OSG::UInt32 const ) ;
            
            InterfaceOptionsBase_exposer.def( 
                "setBufferSize"
                , setBufferSize_function_type( &::OSG::InterfaceOptionsBase::setBufferSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::InterfaceOptionsBase::setNapTime
        
            typedef void ( ::OSG::InterfaceOptionsBase::*setNapTime_function_type )( ::OSG::UInt32 const ) ;
            
            InterfaceOptionsBase_exposer.def( 
                "setNapTime"
                , setNapTime_function_type( &::OSG::InterfaceOptionsBase::setNapTime )
                , ( bp::arg("value") ) );
        
        }
        InterfaceOptionsBase_exposer.staticmethod( "create" );
        InterfaceOptionsBase_exposer.staticmethod( "createDependent" );
        InterfaceOptionsBase_exposer.staticmethod( "createLocal" );
        InterfaceOptionsBase_exposer.staticmethod( "getClassGroupId" );
        InterfaceOptionsBase_exposer.staticmethod( "getClassType" );
        InterfaceOptionsBase_exposer.staticmethod( "getClassTypeId" );
    }

}
