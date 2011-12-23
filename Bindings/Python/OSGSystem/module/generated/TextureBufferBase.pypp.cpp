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
#include "TextureBufferBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TextureBufferBase_class(){

    { //::OSG::TextureBufferBase
        typedef bp::class_< OSG::TextureBufferBase, bp::bases< OSG::FrameBufferAttachment >, boost::noncopyable > TextureBufferBase_exposer_t;
        TextureBufferBase_exposer_t TextureBufferBase_exposer = TextureBufferBase_exposer_t( "TextureBufferBase", bp::no_init );
        bp::scope TextureBufferBase_scope( TextureBufferBase_exposer );
        bp::scope().attr("TextureFieldId") = (int)OSG::TextureBufferBase::TextureFieldId;
        bp::scope().attr("TexTargetFieldId") = (int)OSG::TextureBufferBase::TexTargetFieldId;
        bp::scope().attr("LevelFieldId") = (int)OSG::TextureBufferBase::LevelFieldId;
        bp::scope().attr("ZoffsetFieldId") = (int)OSG::TextureBufferBase::ZoffsetFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TextureBufferBase::NextFieldId;
        { //::OSG::TextureBufferBase::copyFromBin
        
            typedef void ( ::OSG::TextureBufferBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureBufferBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TextureBufferBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureBufferBase::copyToBin
        
            typedef void ( ::OSG::TextureBufferBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureBufferBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TextureBufferBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureBufferBase::create
        
            typedef ::OSG::TextureBufferTransitPtr ( *create_function_type )(  );
            
            TextureBufferBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::TextureBufferBase::create ) );
        
        }
        { //::OSG::TextureBufferBase::createDependent
        
            typedef ::OSG::TextureBufferTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            TextureBufferBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TextureBufferBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TextureBufferBase::createLocal
        
            typedef ::OSG::TextureBufferTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            TextureBufferBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TextureBufferBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TextureBufferBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TextureBufferBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TextureBufferBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TextureBufferBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureBufferBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TextureBufferBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TextureBufferBase::getClassGroupId ) );
        
        }
        { //::OSG::TextureBufferBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TextureBufferBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TextureBufferBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TextureBufferBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TextureBufferBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TextureBufferBase::getClassTypeId ) );
        
        }
        { //::OSG::TextureBufferBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TextureBufferBase::*getContainerSize_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TextureBufferBase::getContainerSize ) );
        
        }
        { //::OSG::TextureBufferBase::getLevel
        
            typedef ::OSG::UInt32 ( ::OSG::TextureBufferBase::*getLevel_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getLevel"
                , getLevel_function_type( &::OSG::TextureBufferBase::getLevel ) );
        
        }
        { //::OSG::TextureBufferBase::getSFLevel
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::TextureBufferBase::*getSFLevel_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getSFLevel"
                , getSFLevel_function_type( &::OSG::TextureBufferBase::getSFLevel )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBufferBase::getSFTexTarget
        
            typedef ::OSG::SFGLenum const * ( ::OSG::TextureBufferBase::*getSFTexTarget_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getSFTexTarget"
                , getSFTexTarget_function_type( &::OSG::TextureBufferBase::getSFTexTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBufferBase::getSFTexture
        
            typedef ::OSG::SFUnrecTextureObjChunkPtr const * ( ::OSG::TextureBufferBase::*getSFTexture_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getSFTexture"
                , getSFTexture_function_type( &::OSG::TextureBufferBase::getSFTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBufferBase::getSFZoffset
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::TextureBufferBase::*getSFZoffset_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getSFZoffset"
                , getSFZoffset_function_type( &::OSG::TextureBufferBase::getSFZoffset )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBufferBase::getTexTarget
        
            typedef ::GLenum const & ( ::OSG::TextureBufferBase::*getTexTarget_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getTexTarget"
                , getTexTarget_function_type( &::OSG::TextureBufferBase::getTexTarget )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TextureBufferBase::getTexture
        
            typedef ::OSG::TextureObjChunk * ( ::OSG::TextureBufferBase::*getTexture_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getTexture"
                , getTexture_function_type( &::OSG::TextureBufferBase::getTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBufferBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TextureBufferBase::*getType_function_type )(  ) ;
            
            TextureBufferBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureBufferBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBufferBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TextureBufferBase::*getType_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureBufferBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureBufferBase::getZoffset
        
            typedef ::OSG::UInt32 ( ::OSG::TextureBufferBase::*getZoffset_function_type )(  ) const;
            
            TextureBufferBase_exposer.def( 
                "getZoffset"
                , getZoffset_function_type( &::OSG::TextureBufferBase::getZoffset ) );
        
        }
        { //::OSG::TextureBufferBase::setLevel
        
            typedef void ( ::OSG::TextureBufferBase::*setLevel_function_type )( ::OSG::UInt32 const ) ;
            
            TextureBufferBase_exposer.def( 
                "setLevel"
                , setLevel_function_type( &::OSG::TextureBufferBase::setLevel )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureBufferBase::setTexTarget
        
            typedef void ( ::OSG::TextureBufferBase::*setTexTarget_function_type )( ::GLenum const & ) ;
            
            TextureBufferBase_exposer.def( 
                "setTexTarget"
                , setTexTarget_function_type( &::OSG::TextureBufferBase::setTexTarget )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureBufferBase::setTexture
        
            typedef void ( ::OSG::TextureBufferBase::*setTexture_function_type )( ::OSG::TextureObjChunk * const ) ;
            
            TextureBufferBase_exposer.def( 
                "setTexture"
                , setTexture_function_type( &::OSG::TextureBufferBase::setTexture )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::TextureBufferBase::setZoffset
        
            typedef void ( ::OSG::TextureBufferBase::*setZoffset_function_type )( ::OSG::UInt32 const ) ;
            
            TextureBufferBase_exposer.def( 
                "setZoffset"
                , setZoffset_function_type( &::OSG::TextureBufferBase::setZoffset )
                , ( bp::arg("value") ) );
        
        }
        TextureBufferBase_exposer.staticmethod( "create" );
        TextureBufferBase_exposer.staticmethod( "createDependent" );
        TextureBufferBase_exposer.staticmethod( "createLocal" );
        TextureBufferBase_exposer.staticmethod( "getClassGroupId" );
        TextureBufferBase_exposer.staticmethod( "getClassType" );
        TextureBufferBase_exposer.staticmethod( "getClassTypeId" );
    }

}
