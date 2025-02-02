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
#include "PerspectiveCameraBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PerspectiveCameraBase_class(){

    { //::OSG::PerspectiveCameraBase
        typedef bp::class_< OSG::PerspectiveCameraBase, bp::bases< OSG::Camera >, boost::noncopyable > PerspectiveCameraBase_exposer_t;
        PerspectiveCameraBase_exposer_t PerspectiveCameraBase_exposer = PerspectiveCameraBase_exposer_t( "PerspectiveCameraBase", bp::no_init );
        bp::scope PerspectiveCameraBase_scope( PerspectiveCameraBase_exposer );
        bp::scope().attr("FovFieldId") = (int)OSG::PerspectiveCameraBase::FovFieldId;
        bp::scope().attr("FovModeFieldId") = (int)OSG::PerspectiveCameraBase::FovModeFieldId;
        bp::scope().attr("AspectFieldId") = (int)OSG::PerspectiveCameraBase::AspectFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::PerspectiveCameraBase::NextFieldId;
        { //::OSG::PerspectiveCameraBase::copyFromBin
        
            typedef void ( ::OSG::PerspectiveCameraBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PerspectiveCameraBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PerspectiveCameraBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PerspectiveCameraBase::copyToBin
        
            typedef void ( ::OSG::PerspectiveCameraBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PerspectiveCameraBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PerspectiveCameraBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PerspectiveCameraBase::create
        
            typedef ::OSG::PerspectiveCameraTransitPtr ( *create_function_type )(  );
            
            PerspectiveCameraBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PerspectiveCameraBase::create ) );
        
        }
        { //::OSG::PerspectiveCameraBase::createDependent
        
            typedef ::OSG::PerspectiveCameraTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PerspectiveCameraBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PerspectiveCameraBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PerspectiveCameraBase::createLocal
        
            typedef ::OSG::PerspectiveCameraTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PerspectiveCameraBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PerspectiveCameraBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PerspectiveCameraBase::getAspect
        
            typedef ::OSG::Real32 ( ::OSG::PerspectiveCameraBase::*getAspect_function_type )(  ) const;
            
            PerspectiveCameraBase_exposer.def( 
                "getAspect"
                , getAspect_function_type( &::OSG::PerspectiveCameraBase::getAspect ) );
        
        }
        { //::OSG::PerspectiveCameraBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PerspectiveCameraBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PerspectiveCameraBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PerspectiveCameraBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PerspectiveCameraBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PerspectiveCameraBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PerspectiveCameraBase::getClassGroupId ) );
        
        }
        { //::OSG::PerspectiveCameraBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PerspectiveCameraBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PerspectiveCameraBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PerspectiveCameraBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PerspectiveCameraBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PerspectiveCameraBase::getClassTypeId ) );
        
        }
        { //::OSG::PerspectiveCameraBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PerspectiveCameraBase::*getContainerSize_function_type )(  ) const;
            
            PerspectiveCameraBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PerspectiveCameraBase::getContainerSize ) );
        
        }
        { //::OSG::PerspectiveCameraBase::getFov
        
            typedef ::OSG::Real32 ( ::OSG::PerspectiveCameraBase::*getFov_function_type )(  ) const;
            
            PerspectiveCameraBase_exposer.def( 
                "getFov"
                , getFov_function_type( &::OSG::PerspectiveCameraBase::getFov ) );
        
        }
        { //::OSG::PerspectiveCameraBase::getFovMode
        
            typedef ::OSG::UInt32 ( ::OSG::PerspectiveCameraBase::*getFovMode_function_type )(  ) const;
            
            PerspectiveCameraBase_exposer.def( 
                "getFovMode"
                , getFovMode_function_type( &::OSG::PerspectiveCameraBase::getFovMode ) );
        
        }
        { //::OSG::PerspectiveCameraBase::getSFAspect
        
            typedef ::OSG::SFReal32 const * ( ::OSG::PerspectiveCameraBase::*getSFAspect_function_type )(  ) const;
            
            PerspectiveCameraBase_exposer.def( 
                "getSFAspect"
                , getSFAspect_function_type( &::OSG::PerspectiveCameraBase::getSFAspect )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PerspectiveCameraBase::getSFFov
        
            typedef ::OSG::SFReal32 const * ( ::OSG::PerspectiveCameraBase::*getSFFov_function_type )(  ) const;
            
            PerspectiveCameraBase_exposer.def( 
                "getSFFov"
                , getSFFov_function_type( &::OSG::PerspectiveCameraBase::getSFFov )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PerspectiveCameraBase::getSFFovMode
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::PerspectiveCameraBase::*getSFFovMode_function_type )(  ) const;
            
            PerspectiveCameraBase_exposer.def( 
                "getSFFovMode"
                , getSFFovMode_function_type( &::OSG::PerspectiveCameraBase::getSFFovMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PerspectiveCameraBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PerspectiveCameraBase::*getType_function_type )(  ) ;
            
            PerspectiveCameraBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PerspectiveCameraBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PerspectiveCameraBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PerspectiveCameraBase::*getType_function_type )(  ) const;
            
            PerspectiveCameraBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PerspectiveCameraBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PerspectiveCameraBase::setAspect
        
            typedef void ( ::OSG::PerspectiveCameraBase::*setAspect_function_type )( ::OSG::Real32 const ) ;
            
            PerspectiveCameraBase_exposer.def( 
                "setAspect"
                , setAspect_function_type( &::OSG::PerspectiveCameraBase::setAspect )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PerspectiveCameraBase::setFov
        
            typedef void ( ::OSG::PerspectiveCameraBase::*setFov_function_type )( ::OSG::Real32 const ) ;
            
            PerspectiveCameraBase_exposer.def( 
                "setFov"
                , setFov_function_type( &::OSG::PerspectiveCameraBase::setFov )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::PerspectiveCameraBase::setFovMode
        
            typedef void ( ::OSG::PerspectiveCameraBase::*setFovMode_function_type )( ::OSG::UInt32 const ) ;
            
            PerspectiveCameraBase_exposer.def( 
                "setFovMode"
                , setFovMode_function_type( &::OSG::PerspectiveCameraBase::setFovMode )
                , ( bp::arg("value") ) );
        
        }
        PerspectiveCameraBase_exposer.staticmethod( "create" );
        PerspectiveCameraBase_exposer.staticmethod( "createDependent" );
        PerspectiveCameraBase_exposer.staticmethod( "createLocal" );
        PerspectiveCameraBase_exposer.staticmethod( "getClassGroupId" );
        PerspectiveCameraBase_exposer.staticmethod( "getClassType" );
        PerspectiveCameraBase_exposer.staticmethod( "getClassTypeId" );
    }

}
