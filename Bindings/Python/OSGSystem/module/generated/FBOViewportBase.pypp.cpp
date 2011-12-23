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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FBOViewportBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FBOViewportBase_class(){

    { //::OSG::FBOViewportBase
        typedef bp::class_< OSG::FBOViewportBase, bp::bases< OSG::Viewport >, boost::noncopyable > FBOViewportBase_exposer_t;
        FBOViewportBase_exposer_t FBOViewportBase_exposer = FBOViewportBase_exposer_t( "FBOViewportBase", bp::no_init );
        bp::scope FBOViewportBase_scope( FBOViewportBase_exposer );
        bp::scope().attr("FrameBufferObjectFieldId") = (int)OSG::FBOViewportBase::FrameBufferObjectFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::FBOViewportBase::NextFieldId;
        { //::OSG::FBOViewportBase::copyFromBin
        
            typedef void ( ::OSG::FBOViewportBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FBOViewportBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::FBOViewportBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FBOViewportBase::copyToBin
        
            typedef void ( ::OSG::FBOViewportBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FBOViewportBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::FBOViewportBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FBOViewportBase::create
        
            typedef ::OSG::FBOViewportTransitPtr ( *create_function_type )(  );
            
            FBOViewportBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::FBOViewportBase::create ) );
        
        }
        { //::OSG::FBOViewportBase::createDependent
        
            typedef ::OSG::FBOViewportTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            FBOViewportBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::FBOViewportBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::FBOViewportBase::createLocal
        
            typedef ::OSG::FBOViewportTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            FBOViewportBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::FBOViewportBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::FBOViewportBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::FBOViewportBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            FBOViewportBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::FBOViewportBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::FBOViewportBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            FBOViewportBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::FBOViewportBase::getClassGroupId ) );
        
        }
        { //::OSG::FBOViewportBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            FBOViewportBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::FBOViewportBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::FBOViewportBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            FBOViewportBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::FBOViewportBase::getClassTypeId ) );
        
        }
        { //::OSG::FBOViewportBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::FBOViewportBase::*getContainerSize_function_type )(  ) const;
            
            FBOViewportBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::FBOViewportBase::getContainerSize ) );
        
        }
        { //::OSG::FBOViewportBase::getFrameBufferObject
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::FBOViewportBase::*getFrameBufferObject_function_type )(  ) const;
            
            FBOViewportBase_exposer.def( 
                "getFrameBufferObject"
                , getFrameBufferObject_function_type( &::OSG::FBOViewportBase::getFrameBufferObject )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOViewportBase::getSFFrameBufferObject
        
            typedef ::OSG::SFUnrecFrameBufferObjectPtr const * ( ::OSG::FBOViewportBase::*getSFFrameBufferObject_function_type )(  ) const;
            
            FBOViewportBase_exposer.def( 
                "getSFFrameBufferObject"
                , getSFFrameBufferObject_function_type( &::OSG::FBOViewportBase::getSFFrameBufferObject )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOViewportBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::FBOViewportBase::*getType_function_type )(  ) ;
            
            FBOViewportBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FBOViewportBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOViewportBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::FBOViewportBase::*getType_function_type )(  ) const;
            
            FBOViewportBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FBOViewportBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOViewportBase::setFrameBufferObject
        
            typedef void ( ::OSG::FBOViewportBase::*setFrameBufferObject_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            FBOViewportBase_exposer.def( 
                "setFrameBufferObject"
                , setFrameBufferObject_function_type( &::OSG::FBOViewportBase::setFrameBufferObject )
                , ( bp::arg("value") ) );
        
        }
        FBOViewportBase_exposer.staticmethod( "create" );
        FBOViewportBase_exposer.staticmethod( "createDependent" );
        FBOViewportBase_exposer.staticmethod( "createLocal" );
        FBOViewportBase_exposer.staticmethod( "getClassGroupId" );
        FBOViewportBase_exposer.staticmethod( "getClassType" );
        FBOViewportBase_exposer.staticmethod( "getClassTypeId" );
    }

}
