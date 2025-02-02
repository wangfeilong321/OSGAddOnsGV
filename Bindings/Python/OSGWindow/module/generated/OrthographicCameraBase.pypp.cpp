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
#include "OrthographicCameraBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_OrthographicCameraBase_class(){

    { //::OSG::OrthographicCameraBase
        typedef bp::class_< OSG::OrthographicCameraBase, bp::bases< ::OSG::Camera >, boost::noncopyable > OrthographicCameraBase_exposer_t;
        OrthographicCameraBase_exposer_t OrthographicCameraBase_exposer = OrthographicCameraBase_exposer_t( "OrthographicCameraBase", bp::no_init );
        bp::scope OrthographicCameraBase_scope( OrthographicCameraBase_exposer );
        bp::scope().attr("VerticalSizeFieldId") = (int)OSG::OrthographicCameraBase::VerticalSizeFieldId;
        bp::scope().attr("HorizontalSizeFieldId") = (int)OSG::OrthographicCameraBase::HorizontalSizeFieldId;
        bp::scope().attr("AspectFieldId") = (int)OSG::OrthographicCameraBase::AspectFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::OrthographicCameraBase::NextFieldId;
        { //::OSG::OrthographicCameraBase::copyFromBin
        
            typedef void ( ::OSG::OrthographicCameraBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            OrthographicCameraBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::OrthographicCameraBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::OrthographicCameraBase::copyToBin
        
            typedef void ( ::OSG::OrthographicCameraBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            OrthographicCameraBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::OrthographicCameraBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::OrthographicCameraBase::create
        
            typedef ::OSG::OrthographicCameraTransitPtr ( *create_function_type )(  );
            
            OrthographicCameraBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::OrthographicCameraBase::create ) );
        
        }
        { //::OSG::OrthographicCameraBase::createDependent
        
            typedef ::OSG::OrthographicCameraTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            OrthographicCameraBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::OrthographicCameraBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::OrthographicCameraBase::createLocal
        
            typedef ::OSG::OrthographicCameraTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            OrthographicCameraBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::OrthographicCameraBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::OrthographicCameraBase::getAspect
        
            typedef ::OSG::Real32 ( ::OSG::OrthographicCameraBase::*getAspect_function_type )(  ) const;
            
            OrthographicCameraBase_exposer.def( 
                "getAspect"
                , getAspect_function_type( &::OSG::OrthographicCameraBase::getAspect ) );
        
        }
        { //::OSG::OrthographicCameraBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::OrthographicCameraBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            OrthographicCameraBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::OrthographicCameraBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::OrthographicCameraBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            OrthographicCameraBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::OrthographicCameraBase::getClassGroupId ) );
        
        }
        { //::OSG::OrthographicCameraBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            OrthographicCameraBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::OrthographicCameraBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::OrthographicCameraBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            OrthographicCameraBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::OrthographicCameraBase::getClassTypeId ) );
        
        }
        { //::OSG::OrthographicCameraBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::OrthographicCameraBase::*getContainerSize_function_type )(  ) const;
            
            OrthographicCameraBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::OrthographicCameraBase::getContainerSize ) );
        
        }
        { //::OSG::OrthographicCameraBase::getHorizontalSize
        
            typedef ::OSG::Real32 ( ::OSG::OrthographicCameraBase::*getHorizontalSize_function_type )(  ) const;
            
            OrthographicCameraBase_exposer.def( 
                "getHorizontalSize"
                , getHorizontalSize_function_type( &::OSG::OrthographicCameraBase::getHorizontalSize ) );
        
        }
        { //::OSG::OrthographicCameraBase::getSFAspect
        
            typedef ::OSG::SFReal32 const * ( ::OSG::OrthographicCameraBase::*getSFAspect_function_type )(  ) const;
            
            OrthographicCameraBase_exposer.def( 
                "getSFAspect"
                , getSFAspect_function_type( &::OSG::OrthographicCameraBase::getSFAspect )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::OrthographicCameraBase::getSFHorizontalSize
        
            typedef ::OSG::SFReal32 const * ( ::OSG::OrthographicCameraBase::*getSFHorizontalSize_function_type )(  ) const;
            
            OrthographicCameraBase_exposer.def( 
                "getSFHorizontalSize"
                , getSFHorizontalSize_function_type( &::OSG::OrthographicCameraBase::getSFHorizontalSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::OrthographicCameraBase::getSFVerticalSize
        
            typedef ::OSG::SFReal32 const * ( ::OSG::OrthographicCameraBase::*getSFVerticalSize_function_type )(  ) const;
            
            OrthographicCameraBase_exposer.def( 
                "getSFVerticalSize"
                , getSFVerticalSize_function_type( &::OSG::OrthographicCameraBase::getSFVerticalSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::OrthographicCameraBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::OrthographicCameraBase::*getType_function_type )(  ) ;
            
            OrthographicCameraBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::OrthographicCameraBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::OrthographicCameraBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::OrthographicCameraBase::*getType_function_type )(  ) const;
            
            OrthographicCameraBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::OrthographicCameraBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::OrthographicCameraBase::getVerticalSize
        
            typedef ::OSG::Real32 ( ::OSG::OrthographicCameraBase::*getVerticalSize_function_type )(  ) const;
            
            OrthographicCameraBase_exposer.def( 
                "getVerticalSize"
                , getVerticalSize_function_type( &::OSG::OrthographicCameraBase::getVerticalSize ) );
        
        }
        { //::OSG::OrthographicCameraBase::setAspect
        
            typedef void ( ::OSG::OrthographicCameraBase::*setAspect_function_type )( ::OSG::Real32 const ) ;
            
            OrthographicCameraBase_exposer.def( 
                "setAspect"
                , setAspect_function_type( &::OSG::OrthographicCameraBase::setAspect )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::OrthographicCameraBase::setHorizontalSize
        
            typedef void ( ::OSG::OrthographicCameraBase::*setHorizontalSize_function_type )( ::OSG::Real32 const ) ;
            
            OrthographicCameraBase_exposer.def( 
                "setHorizontalSize"
                , setHorizontalSize_function_type( &::OSG::OrthographicCameraBase::setHorizontalSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::OrthographicCameraBase::setVerticalSize
        
            typedef void ( ::OSG::OrthographicCameraBase::*setVerticalSize_function_type )( ::OSG::Real32 const ) ;
            
            OrthographicCameraBase_exposer.def( 
                "setVerticalSize"
                , setVerticalSize_function_type( &::OSG::OrthographicCameraBase::setVerticalSize )
                , ( bp::arg("value") ) );
        
        }
        OrthographicCameraBase_exposer.staticmethod( "create" );
        OrthographicCameraBase_exposer.staticmethod( "createDependent" );
        OrthographicCameraBase_exposer.staticmethod( "createLocal" );
        OrthographicCameraBase_exposer.staticmethod( "getClassGroupId" );
        OrthographicCameraBase_exposer.staticmethod( "getClassType" );
        OrthographicCameraBase_exposer.staticmethod( "getClassTypeId" );
    }

}
