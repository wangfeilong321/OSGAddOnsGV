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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ScreenTransformBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ScreenTransformBase_class(){

    { //::OSG::ScreenTransformBase
        typedef bp::class_< OSG::ScreenTransformBase, bp::bases< ::OSG::Group >, boost::noncopyable > ScreenTransformBase_exposer_t;
        ScreenTransformBase_exposer_t ScreenTransformBase_exposer = ScreenTransformBase_exposer_t( "ScreenTransformBase", bp::no_init );
        bp::scope ScreenTransformBase_scope( ScreenTransformBase_exposer );
        bp::scope().attr("BeaconFieldId") = (int)OSG::ScreenTransformBase::BeaconFieldId;
        bp::scope().attr("InvertWorldTransformFieldId") = (int)OSG::ScreenTransformBase::InvertWorldTransformFieldId;
        bp::scope().attr("InvertViewTransformFieldId") = (int)OSG::ScreenTransformBase::InvertViewTransformFieldId;
        bp::scope().attr("ApplyBeaconRotationFieldId") = (int)OSG::ScreenTransformBase::ApplyBeaconRotationFieldId;
        bp::scope().attr("ApplyBeaconScreenTranslationFieldId") = (int)OSG::ScreenTransformBase::ApplyBeaconScreenTranslationFieldId;
        bp::scope().attr("ViewFieldId") = (int)OSG::ScreenTransformBase::ViewFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ScreenTransformBase::NextFieldId;
        { //::OSG::ScreenTransformBase::copyFromBin
        
            typedef void ( ::OSG::ScreenTransformBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ScreenTransformBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ScreenTransformBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ScreenTransformBase::copyToBin
        
            typedef void ( ::OSG::ScreenTransformBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ScreenTransformBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ScreenTransformBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ScreenTransformBase::create
        
            typedef ::OSG::ScreenTransformTransitPtr ( *create_function_type )(  );
            
            ScreenTransformBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ScreenTransformBase::create ) );
        
        }
        { //::OSG::ScreenTransformBase::createDependent
        
            typedef ::OSG::ScreenTransformTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ScreenTransformBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ScreenTransformBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ScreenTransformBase::createLocal
        
            typedef ::OSG::ScreenTransformTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ScreenTransformBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ScreenTransformBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ScreenTransformBase::getApplyBeaconRotation
        
            typedef bool ( ::OSG::ScreenTransformBase::*getApplyBeaconRotation_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getApplyBeaconRotation"
                , getApplyBeaconRotation_function_type( &::OSG::ScreenTransformBase::getApplyBeaconRotation ) );
        
        }
        { //::OSG::ScreenTransformBase::getApplyBeaconScreenTranslation
        
            typedef bool ( ::OSG::ScreenTransformBase::*getApplyBeaconScreenTranslation_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getApplyBeaconScreenTranslation"
                , getApplyBeaconScreenTranslation_function_type( &::OSG::ScreenTransformBase::getApplyBeaconScreenTranslation ) );
        
        }
        { //::OSG::ScreenTransformBase::getBeacon
        
            typedef ::OSG::Node * ( ::OSG::ScreenTransformBase::*getBeacon_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getBeacon"
                , getBeacon_function_type( &::OSG::ScreenTransformBase::getBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ScreenTransformBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ScreenTransformBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ScreenTransformBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ScreenTransformBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ScreenTransformBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ScreenTransformBase::getClassGroupId ) );
        
        }
        { //::OSG::ScreenTransformBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ScreenTransformBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ScreenTransformBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ScreenTransformBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ScreenTransformBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ScreenTransformBase::getClassTypeId ) );
        
        }
        { //::OSG::ScreenTransformBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ScreenTransformBase::*getContainerSize_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ScreenTransformBase::getContainerSize ) );
        
        }
        { //::OSG::ScreenTransformBase::getInvertViewTransform
        
            typedef bool ( ::OSG::ScreenTransformBase::*getInvertViewTransform_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getInvertViewTransform"
                , getInvertViewTransform_function_type( &::OSG::ScreenTransformBase::getInvertViewTransform ) );
        
        }
        { //::OSG::ScreenTransformBase::getInvertWorldTransform
        
            typedef bool ( ::OSG::ScreenTransformBase::*getInvertWorldTransform_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getInvertWorldTransform"
                , getInvertWorldTransform_function_type( &::OSG::ScreenTransformBase::getInvertWorldTransform ) );
        
        }
        { //::OSG::ScreenTransformBase::getSFApplyBeaconRotation
        
            typedef ::OSG::SFBool const * ( ::OSG::ScreenTransformBase::*getSFApplyBeaconRotation_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getSFApplyBeaconRotation"
                , getSFApplyBeaconRotation_function_type( &::OSG::ScreenTransformBase::getSFApplyBeaconRotation )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getSFApplyBeaconScreenTranslation
        
            typedef ::OSG::SFBool const * ( ::OSG::ScreenTransformBase::*getSFApplyBeaconScreenTranslation_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getSFApplyBeaconScreenTranslation"
                , getSFApplyBeaconScreenTranslation_function_type( &::OSG::ScreenTransformBase::getSFApplyBeaconScreenTranslation )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getSFBeacon
        
            typedef ::OSG::SFWeakNodePtr const * ( ::OSG::ScreenTransformBase::*getSFBeacon_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getSFBeacon"
                , getSFBeacon_function_type( &::OSG::ScreenTransformBase::getSFBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getSFInvertViewTransform
        
            typedef ::OSG::SFBool const * ( ::OSG::ScreenTransformBase::*getSFInvertViewTransform_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getSFInvertViewTransform"
                , getSFInvertViewTransform_function_type( &::OSG::ScreenTransformBase::getSFInvertViewTransform )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getSFInvertWorldTransform
        
            typedef ::OSG::SFBool const * ( ::OSG::ScreenTransformBase::*getSFInvertWorldTransform_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getSFInvertWorldTransform"
                , getSFInvertWorldTransform_function_type( &::OSG::ScreenTransformBase::getSFInvertWorldTransform )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getSFView
        
            typedef ::OSG::SFMatrix const * ( ::OSG::ScreenTransformBase::*getSFView_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getSFView"
                , getSFView_function_type( &::OSG::ScreenTransformBase::getSFView )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ScreenTransformBase::*getType_function_type )(  ) ;
            
            ScreenTransformBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ScreenTransformBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ScreenTransformBase::*getType_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ScreenTransformBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenTransformBase::getView
        
            typedef ::OSG::Matrix const & ( ::OSG::ScreenTransformBase::*getView_function_type )(  ) const;
            
            ScreenTransformBase_exposer.def( 
                "getView"
                , getView_function_type( &::OSG::ScreenTransformBase::getView )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ScreenTransformBase::setApplyBeaconRotation
        
            typedef void ( ::OSG::ScreenTransformBase::*setApplyBeaconRotation_function_type )( bool const ) ;
            
            ScreenTransformBase_exposer.def( 
                "setApplyBeaconRotation"
                , setApplyBeaconRotation_function_type( &::OSG::ScreenTransformBase::setApplyBeaconRotation )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ScreenTransformBase::setApplyBeaconScreenTranslation
        
            typedef void ( ::OSG::ScreenTransformBase::*setApplyBeaconScreenTranslation_function_type )( bool const ) ;
            
            ScreenTransformBase_exposer.def( 
                "setApplyBeaconScreenTranslation"
                , setApplyBeaconScreenTranslation_function_type( &::OSG::ScreenTransformBase::setApplyBeaconScreenTranslation )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ScreenTransformBase::setBeacon
        
            typedef void ( ::OSG::ScreenTransformBase::*setBeacon_function_type )( ::OSG::Node * const ) ;
            
            ScreenTransformBase_exposer.def( 
                "setBeacon"
                , setBeacon_function_type( &::OSG::ScreenTransformBase::setBeacon )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ScreenTransformBase::setInvertViewTransform
        
            typedef void ( ::OSG::ScreenTransformBase::*setInvertViewTransform_function_type )( bool const ) ;
            
            ScreenTransformBase_exposer.def( 
                "setInvertViewTransform"
                , setInvertViewTransform_function_type( &::OSG::ScreenTransformBase::setInvertViewTransform )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ScreenTransformBase::setInvertWorldTransform
        
            typedef void ( ::OSG::ScreenTransformBase::*setInvertWorldTransform_function_type )( bool const ) ;
            
            ScreenTransformBase_exposer.def( 
                "setInvertWorldTransform"
                , setInvertWorldTransform_function_type( &::OSG::ScreenTransformBase::setInvertWorldTransform )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ScreenTransformBase::setView
        
            typedef void ( ::OSG::ScreenTransformBase::*setView_function_type )( ::OSG::Matrix const & ) ;
            
            ScreenTransformBase_exposer.def( 
                "setView"
                , setView_function_type( &::OSG::ScreenTransformBase::setView )
                , ( bp::arg("value") ) );
        
        }
        ScreenTransformBase_exposer.staticmethod( "create" );
        ScreenTransformBase_exposer.staticmethod( "createDependent" );
        ScreenTransformBase_exposer.staticmethod( "createLocal" );
        ScreenTransformBase_exposer.staticmethod( "getClassGroupId" );
        ScreenTransformBase_exposer.staticmethod( "getClassType" );
        ScreenTransformBase_exposer.staticmethod( "getClassTypeId" );
    }

}
