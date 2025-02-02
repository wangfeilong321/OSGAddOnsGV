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
#include "BillboardBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_BillboardBase_class(){

    { //::OSG::BillboardBase
        typedef bp::class_< OSG::BillboardBase, bp::bases< ::OSG::Group >, boost::noncopyable > BillboardBase_exposer_t;
        BillboardBase_exposer_t BillboardBase_exposer = BillboardBase_exposer_t( "BillboardBase", bp::no_init );
        bp::scope BillboardBase_scope( BillboardBase_exposer );
        bp::scope().attr("AxisOfRotationFieldId") = (int)OSG::BillboardBase::AxisOfRotationFieldId;
        bp::scope().attr("FocusOnCameraFieldId") = (int)OSG::BillboardBase::FocusOnCameraFieldId;
        bp::scope().attr("AlignToScreenFieldId") = (int)OSG::BillboardBase::AlignToScreenFieldId;
        bp::scope().attr("MinAngleFieldId") = (int)OSG::BillboardBase::MinAngleFieldId;
        bp::scope().attr("MaxAngleFieldId") = (int)OSG::BillboardBase::MaxAngleFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::BillboardBase::NextFieldId;
        { //::OSG::BillboardBase::copyFromBin
        
            typedef void ( ::OSG::BillboardBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            BillboardBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::BillboardBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::BillboardBase::copyToBin
        
            typedef void ( ::OSG::BillboardBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            BillboardBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::BillboardBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::BillboardBase::create
        
            typedef ::OSG::BillboardTransitPtr ( *create_function_type )(  );
            
            BillboardBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::BillboardBase::create ) );
        
        }
        { //::OSG::BillboardBase::createDependent
        
            typedef ::OSG::BillboardTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            BillboardBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::BillboardBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::BillboardBase::createLocal
        
            typedef ::OSG::BillboardTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            BillboardBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::BillboardBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::BillboardBase::getAlignToScreen
        
            typedef bool ( ::OSG::BillboardBase::*getAlignToScreen_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getAlignToScreen"
                , getAlignToScreen_function_type( &::OSG::BillboardBase::getAlignToScreen ) );
        
        }
        { //::OSG::BillboardBase::getAxisOfRotation
        
            typedef ::OSG::Vec3f const & ( ::OSG::BillboardBase::*getAxisOfRotation_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getAxisOfRotation"
                , getAxisOfRotation_function_type( &::OSG::BillboardBase::getAxisOfRotation )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::BillboardBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::BillboardBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            BillboardBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::BillboardBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::BillboardBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            BillboardBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::BillboardBase::getClassGroupId ) );
        
        }
        { //::OSG::BillboardBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            BillboardBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::BillboardBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::BillboardBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            BillboardBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::BillboardBase::getClassTypeId ) );
        
        }
        { //::OSG::BillboardBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::BillboardBase::*getContainerSize_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::BillboardBase::getContainerSize ) );
        
        }
        { //::OSG::BillboardBase::getFocusOnCamera
        
            typedef bool ( ::OSG::BillboardBase::*getFocusOnCamera_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getFocusOnCamera"
                , getFocusOnCamera_function_type( &::OSG::BillboardBase::getFocusOnCamera ) );
        
        }
        { //::OSG::BillboardBase::getMaxAngle
        
            typedef ::OSG::Real32 ( ::OSG::BillboardBase::*getMaxAngle_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getMaxAngle"
                , getMaxAngle_function_type( &::OSG::BillboardBase::getMaxAngle ) );
        
        }
        { //::OSG::BillboardBase::getMinAngle
        
            typedef ::OSG::Real32 ( ::OSG::BillboardBase::*getMinAngle_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getMinAngle"
                , getMinAngle_function_type( &::OSG::BillboardBase::getMinAngle ) );
        
        }
        { //::OSG::BillboardBase::getSFAlignToScreen
        
            typedef ::OSG::SFBool const * ( ::OSG::BillboardBase::*getSFAlignToScreen_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getSFAlignToScreen"
                , getSFAlignToScreen_function_type( &::OSG::BillboardBase::getSFAlignToScreen )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BillboardBase::getSFAxisOfRotation
        
            typedef ::OSG::SFVec3f const * ( ::OSG::BillboardBase::*getSFAxisOfRotation_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getSFAxisOfRotation"
                , getSFAxisOfRotation_function_type( &::OSG::BillboardBase::getSFAxisOfRotation )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BillboardBase::getSFFocusOnCamera
        
            typedef ::OSG::SFBool const * ( ::OSG::BillboardBase::*getSFFocusOnCamera_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getSFFocusOnCamera"
                , getSFFocusOnCamera_function_type( &::OSG::BillboardBase::getSFFocusOnCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BillboardBase::getSFMaxAngle
        
            typedef ::OSG::SFReal32 const * ( ::OSG::BillboardBase::*getSFMaxAngle_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getSFMaxAngle"
                , getSFMaxAngle_function_type( &::OSG::BillboardBase::getSFMaxAngle )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BillboardBase::getSFMinAngle
        
            typedef ::OSG::SFReal32 const * ( ::OSG::BillboardBase::*getSFMinAngle_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getSFMinAngle"
                , getSFMinAngle_function_type( &::OSG::BillboardBase::getSFMinAngle )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BillboardBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::BillboardBase::*getType_function_type )(  ) ;
            
            BillboardBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::BillboardBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BillboardBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::BillboardBase::*getType_function_type )(  ) const;
            
            BillboardBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::BillboardBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BillboardBase::setAlignToScreen
        
            typedef void ( ::OSG::BillboardBase::*setAlignToScreen_function_type )( bool const ) ;
            
            BillboardBase_exposer.def( 
                "setAlignToScreen"
                , setAlignToScreen_function_type( &::OSG::BillboardBase::setAlignToScreen )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BillboardBase::setAxisOfRotation
        
            typedef void ( ::OSG::BillboardBase::*setAxisOfRotation_function_type )( ::OSG::Vec3f const & ) ;
            
            BillboardBase_exposer.def( 
                "setAxisOfRotation"
                , setAxisOfRotation_function_type( &::OSG::BillboardBase::setAxisOfRotation )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BillboardBase::setFocusOnCamera
        
            typedef void ( ::OSG::BillboardBase::*setFocusOnCamera_function_type )( bool const ) ;
            
            BillboardBase_exposer.def( 
                "setFocusOnCamera"
                , setFocusOnCamera_function_type( &::OSG::BillboardBase::setFocusOnCamera )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BillboardBase::setMaxAngle
        
            typedef void ( ::OSG::BillboardBase::*setMaxAngle_function_type )( ::OSG::Real32 const ) ;
            
            BillboardBase_exposer.def( 
                "setMaxAngle"
                , setMaxAngle_function_type( &::OSG::BillboardBase::setMaxAngle )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::BillboardBase::setMinAngle
        
            typedef void ( ::OSG::BillboardBase::*setMinAngle_function_type )( ::OSG::Real32 const ) ;
            
            BillboardBase_exposer.def( 
                "setMinAngle"
                , setMinAngle_function_type( &::OSG::BillboardBase::setMinAngle )
                , ( bp::arg("value") ) );
        
        }
        BillboardBase_exposer.staticmethod( "create" );
        BillboardBase_exposer.staticmethod( "createDependent" );
        BillboardBase_exposer.staticmethod( "createLocal" );
        BillboardBase_exposer.staticmethod( "getClassGroupId" );
        BillboardBase_exposer.staticmethod( "getClassType" );
        BillboardBase_exposer.staticmethod( "getClassTypeId" );
    }

}
