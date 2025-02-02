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
#include "MatrixCameraBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_MatrixCameraBase_class(){

    { //::OSG::MatrixCameraBase
        typedef bp::class_< OSG::MatrixCameraBase, bp::bases< OSG::Camera >, boost::noncopyable > MatrixCameraBase_exposer_t;
        MatrixCameraBase_exposer_t MatrixCameraBase_exposer = MatrixCameraBase_exposer_t( "MatrixCameraBase", bp::no_init );
        bp::scope MatrixCameraBase_scope( MatrixCameraBase_exposer );
        bp::scope().attr("ProjectionMatrixFieldId") = (int)OSG::MatrixCameraBase::ProjectionMatrixFieldId;
        bp::scope().attr("ModelviewMatrixFieldId") = (int)OSG::MatrixCameraBase::ModelviewMatrixFieldId;
        bp::scope().attr("UseBeaconFieldId") = (int)OSG::MatrixCameraBase::UseBeaconFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::MatrixCameraBase::NextFieldId;
        { //::OSG::MatrixCameraBase::copyFromBin
        
            typedef void ( ::OSG::MatrixCameraBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MatrixCameraBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::MatrixCameraBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MatrixCameraBase::copyToBin
        
            typedef void ( ::OSG::MatrixCameraBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MatrixCameraBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::MatrixCameraBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MatrixCameraBase::create
        
            typedef ::OSG::MatrixCameraTransitPtr ( *create_function_type )(  );
            
            MatrixCameraBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::MatrixCameraBase::create ) );
        
        }
        { //::OSG::MatrixCameraBase::createDependent
        
            typedef ::OSG::MatrixCameraTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            MatrixCameraBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::MatrixCameraBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::MatrixCameraBase::createLocal
        
            typedef ::OSG::MatrixCameraTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            MatrixCameraBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::MatrixCameraBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::MatrixCameraBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::MatrixCameraBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            MatrixCameraBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::MatrixCameraBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::MatrixCameraBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            MatrixCameraBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::MatrixCameraBase::getClassGroupId ) );
        
        }
        { //::OSG::MatrixCameraBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            MatrixCameraBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::MatrixCameraBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::MatrixCameraBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            MatrixCameraBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::MatrixCameraBase::getClassTypeId ) );
        
        }
        { //::OSG::MatrixCameraBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::MatrixCameraBase::*getContainerSize_function_type )(  ) const;
            
            MatrixCameraBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::MatrixCameraBase::getContainerSize ) );
        
        }
        { //::OSG::MatrixCameraBase::getModelviewMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::MatrixCameraBase::*getModelviewMatrix_function_type )(  ) const;
            
            MatrixCameraBase_exposer.def( 
                "getModelviewMatrix"
                , getModelviewMatrix_function_type( &::OSG::MatrixCameraBase::getModelviewMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::MatrixCameraBase::getProjectionMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::MatrixCameraBase::*getProjectionMatrix_function_type )(  ) const;
            
            MatrixCameraBase_exposer.def( 
                "getProjectionMatrix"
                , getProjectionMatrix_function_type( &::OSG::MatrixCameraBase::getProjectionMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::MatrixCameraBase::getSFModelviewMatrix
        
            typedef ::OSG::SFMatrix const * ( ::OSG::MatrixCameraBase::*getSFModelviewMatrix_function_type )(  ) const;
            
            MatrixCameraBase_exposer.def( 
                "getSFModelviewMatrix"
                , getSFModelviewMatrix_function_type( &::OSG::MatrixCameraBase::getSFModelviewMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MatrixCameraBase::getSFProjectionMatrix
        
            typedef ::OSG::SFMatrix const * ( ::OSG::MatrixCameraBase::*getSFProjectionMatrix_function_type )(  ) const;
            
            MatrixCameraBase_exposer.def( 
                "getSFProjectionMatrix"
                , getSFProjectionMatrix_function_type( &::OSG::MatrixCameraBase::getSFProjectionMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MatrixCameraBase::getSFUseBeacon
        
            typedef ::OSG::SFBool const * ( ::OSG::MatrixCameraBase::*getSFUseBeacon_function_type )(  ) const;
            
            MatrixCameraBase_exposer.def( 
                "getSFUseBeacon"
                , getSFUseBeacon_function_type( &::OSG::MatrixCameraBase::getSFUseBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MatrixCameraBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::MatrixCameraBase::*getType_function_type )(  ) ;
            
            MatrixCameraBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MatrixCameraBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MatrixCameraBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::MatrixCameraBase::*getType_function_type )(  ) const;
            
            MatrixCameraBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MatrixCameraBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MatrixCameraBase::getUseBeacon
        
            typedef bool ( ::OSG::MatrixCameraBase::*getUseBeacon_function_type )(  ) const;
            
            MatrixCameraBase_exposer.def( 
                "getUseBeacon"
                , getUseBeacon_function_type( &::OSG::MatrixCameraBase::getUseBeacon ) );
        
        }
        { //::OSG::MatrixCameraBase::setModelviewMatrix
        
            typedef void ( ::OSG::MatrixCameraBase::*setModelviewMatrix_function_type )( ::OSG::Matrix const & ) ;
            
            MatrixCameraBase_exposer.def( 
                "setModelviewMatrix"
                , setModelviewMatrix_function_type( &::OSG::MatrixCameraBase::setModelviewMatrix )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::MatrixCameraBase::setProjectionMatrix
        
            typedef void ( ::OSG::MatrixCameraBase::*setProjectionMatrix_function_type )( ::OSG::Matrix const & ) ;
            
            MatrixCameraBase_exposer.def( 
                "setProjectionMatrix"
                , setProjectionMatrix_function_type( &::OSG::MatrixCameraBase::setProjectionMatrix )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::MatrixCameraBase::setUseBeacon
        
            typedef void ( ::OSG::MatrixCameraBase::*setUseBeacon_function_type )( bool const ) ;
            
            MatrixCameraBase_exposer.def( 
                "setUseBeacon"
                , setUseBeacon_function_type( &::OSG::MatrixCameraBase::setUseBeacon )
                , ( bp::arg("value") ) );
        
        }
        MatrixCameraBase_exposer.staticmethod( "create" );
        MatrixCameraBase_exposer.staticmethod( "createDependent" );
        MatrixCameraBase_exposer.staticmethod( "createLocal" );
        MatrixCameraBase_exposer.staticmethod( "getClassGroupId" );
        MatrixCameraBase_exposer.staticmethod( "getClassType" );
        MatrixCameraBase_exposer.staticmethod( "getClassTypeId" );
    }

}
