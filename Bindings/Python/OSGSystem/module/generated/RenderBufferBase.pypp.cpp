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
#include "RenderBufferBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_RenderBufferBase_class(){

    { //::OSG::RenderBufferBase
        typedef bp::class_< OSG::RenderBufferBase, bp::bases< OSG::FrameBufferAttachment >, boost::noncopyable > RenderBufferBase_exposer_t;
        RenderBufferBase_exposer_t RenderBufferBase_exposer = RenderBufferBase_exposer_t( "RenderBufferBase", bp::no_init );
        bp::scope RenderBufferBase_scope( RenderBufferBase_exposer );
        bp::scope().attr("GLIdFieldId") = (int)OSG::RenderBufferBase::GLIdFieldId;
        bp::scope().attr("InternalFormatFieldId") = (int)OSG::RenderBufferBase::InternalFormatFieldId;
        bp::scope().attr("ImageFieldId") = (int)OSG::RenderBufferBase::ImageFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::RenderBufferBase::NextFieldId;
        { //::OSG::RenderBufferBase::copyFromBin
        
            typedef void ( ::OSG::RenderBufferBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            RenderBufferBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::RenderBufferBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::RenderBufferBase::copyToBin
        
            typedef void ( ::OSG::RenderBufferBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            RenderBufferBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::RenderBufferBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::RenderBufferBase::create
        
            typedef ::OSG::RenderBufferTransitPtr ( *create_function_type )(  );
            
            RenderBufferBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::RenderBufferBase::create ) );
        
        }
        { //::OSG::RenderBufferBase::createDependent
        
            typedef ::OSG::RenderBufferTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            RenderBufferBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::RenderBufferBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::RenderBufferBase::createLocal
        
            typedef ::OSG::RenderBufferTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            RenderBufferBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::RenderBufferBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::RenderBufferBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::RenderBufferBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            RenderBufferBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::RenderBufferBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::RenderBufferBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            RenderBufferBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::RenderBufferBase::getClassGroupId ) );
        
        }
        { //::OSG::RenderBufferBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            RenderBufferBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::RenderBufferBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::RenderBufferBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            RenderBufferBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::RenderBufferBase::getClassTypeId ) );
        
        }
        { //::OSG::RenderBufferBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::RenderBufferBase::*getContainerSize_function_type )(  ) const;
            
            RenderBufferBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::RenderBufferBase::getContainerSize ) );
        
        }
        { //::OSG::RenderBufferBase::getGLId
        
            typedef ::GLenum const & ( ::OSG::RenderBufferBase::*getGLId_function_type )(  ) const;
            
            RenderBufferBase_exposer.def( 
                "getGLId"
                , getGLId_function_type( &::OSG::RenderBufferBase::getGLId )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::RenderBufferBase::getImage
        
            typedef ::OSG::Image * ( ::OSG::RenderBufferBase::*getImage_function_type )(  ) const;
            
            RenderBufferBase_exposer.def( 
                "getImage"
                , getImage_function_type( &::OSG::RenderBufferBase::getImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderBufferBase::getInternalFormat
        
            typedef ::GLenum const & ( ::OSG::RenderBufferBase::*getInternalFormat_function_type )(  ) const;
            
            RenderBufferBase_exposer.def( 
                "getInternalFormat"
                , getInternalFormat_function_type( &::OSG::RenderBufferBase::getInternalFormat )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::RenderBufferBase::getSFGLId
        
            typedef ::OSG::SFGLenum const * ( ::OSG::RenderBufferBase::*getSFGLId_function_type )(  ) const;
            
            RenderBufferBase_exposer.def( 
                "getSFGLId"
                , getSFGLId_function_type( &::OSG::RenderBufferBase::getSFGLId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderBufferBase::getSFImage
        
            typedef ::OSG::SFUnrecImagePtr const * ( ::OSG::RenderBufferBase::*getSFImage_function_type )(  ) const;
            
            RenderBufferBase_exposer.def( 
                "getSFImage"
                , getSFImage_function_type( &::OSG::RenderBufferBase::getSFImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderBufferBase::getSFInternalFormat
        
            typedef ::OSG::SFGLenum const * ( ::OSG::RenderBufferBase::*getSFInternalFormat_function_type )(  ) const;
            
            RenderBufferBase_exposer.def( 
                "getSFInternalFormat"
                , getSFInternalFormat_function_type( &::OSG::RenderBufferBase::getSFInternalFormat )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderBufferBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::RenderBufferBase::*getType_function_type )(  ) ;
            
            RenderBufferBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::RenderBufferBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderBufferBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::RenderBufferBase::*getType_function_type )(  ) const;
            
            RenderBufferBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::RenderBufferBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderBufferBase::setGLId
        
            typedef void ( ::OSG::RenderBufferBase::*setGLId_function_type )( ::GLenum const & ) ;
            
            RenderBufferBase_exposer.def( 
                "setGLId"
                , setGLId_function_type( &::OSG::RenderBufferBase::setGLId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::RenderBufferBase::setImage
        
            typedef void ( ::OSG::RenderBufferBase::*setImage_function_type )( ::OSG::Image * const ) ;
            
            RenderBufferBase_exposer.def( 
                "setImage"
                , setImage_function_type( &::OSG::RenderBufferBase::setImage )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::RenderBufferBase::setInternalFormat
        
            typedef void ( ::OSG::RenderBufferBase::*setInternalFormat_function_type )( ::GLenum const & ) ;
            
            RenderBufferBase_exposer.def( 
                "setInternalFormat"
                , setInternalFormat_function_type( &::OSG::RenderBufferBase::setInternalFormat )
                , ( bp::arg("value") ) );
        
        }
        RenderBufferBase_exposer.staticmethod( "create" );
        RenderBufferBase_exposer.staticmethod( "createDependent" );
        RenderBufferBase_exposer.staticmethod( "createLocal" );
        RenderBufferBase_exposer.staticmethod( "getClassGroupId" );
        RenderBufferBase_exposer.staticmethod( "getClassType" );
        RenderBufferBase_exposer.staticmethod( "getClassTypeId" );
    }

}
