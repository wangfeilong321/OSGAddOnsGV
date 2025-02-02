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
#include "BoostPathAttachmentBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_BoostPathAttachmentBase_class(){

    { //::OSG::BoostPathAttachmentBase
        typedef bp::class_< OSG::BoostPathAttachmentBase, bp::bases< ::OSG::Attachment >, boost::noncopyable > BoostPathAttachmentBase_exposer_t;
        BoostPathAttachmentBase_exposer_t BoostPathAttachmentBase_exposer = BoostPathAttachmentBase_exposer_t( "BoostPathAttachmentBase", bp::no_init );
        bp::scope BoostPathAttachmentBase_scope( BoostPathAttachmentBase_exposer );
        bp::scope().attr("PathFieldId") = (int)OSG::BoostPathAttachmentBase::PathFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::BoostPathAttachmentBase::NextFieldId;
        { //::OSG::BoostPathAttachmentBase::copyFromBin
        
            typedef void ( ::OSG::BoostPathAttachmentBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            BoostPathAttachmentBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::BoostPathAttachmentBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::copyToBin
        
            typedef void ( ::OSG::BoostPathAttachmentBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            BoostPathAttachmentBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::BoostPathAttachmentBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::create
        
            typedef ::OSG::BoostPathAttachmentTransitPtr ( *create_function_type )(  );
            
            BoostPathAttachmentBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::BoostPathAttachmentBase::create ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::createDependent
        
            typedef ::OSG::BoostPathAttachmentTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            BoostPathAttachmentBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::BoostPathAttachmentBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::createLocal
        
            typedef ::OSG::BoostPathAttachmentTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            BoostPathAttachmentBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::BoostPathAttachmentBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::BoostPathAttachmentBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            BoostPathAttachmentBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::BoostPathAttachmentBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            BoostPathAttachmentBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::BoostPathAttachmentBase::getClassGroupId ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            BoostPathAttachmentBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::BoostPathAttachmentBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::BoostPathAttachmentBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            BoostPathAttachmentBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::BoostPathAttachmentBase::getClassTypeId ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::BoostPathAttachmentBase::*getContainerSize_function_type )(  ) const;
            
            BoostPathAttachmentBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::BoostPathAttachmentBase::getContainerSize ) );
        
        }
        { //::OSG::BoostPathAttachmentBase::getPath
        
            typedef ::OSG::BoostPath const & ( ::OSG::BoostPathAttachmentBase::*getPath_function_type )(  ) const;
            
            BoostPathAttachmentBase_exposer.def( 
                "getPath"
                , getPath_function_type( &::OSG::BoostPathAttachmentBase::getPath )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::BoostPathAttachmentBase::getSFPath
        
            typedef ::OSG::SFBoostPath const * ( ::OSG::BoostPathAttachmentBase::*getSFPath_function_type )(  ) const;
            
            BoostPathAttachmentBase_exposer.def( 
                "getSFPath"
                , getSFPath_function_type( &::OSG::BoostPathAttachmentBase::getSFPath )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BoostPathAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::BoostPathAttachmentBase::*getType_function_type )(  ) ;
            
            BoostPathAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::BoostPathAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BoostPathAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::BoostPathAttachmentBase::*getType_function_type )(  ) const;
            
            BoostPathAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::BoostPathAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BoostPathAttachmentBase::setPath
        
            typedef void ( ::OSG::BoostPathAttachmentBase::*setPath_function_type )( ::OSG::BoostPath const & ) ;
            
            BoostPathAttachmentBase_exposer.def( 
                "setPath"
                , setPath_function_type( &::OSG::BoostPathAttachmentBase::setPath )
                , ( bp::arg("value") ) );
        
        }
        BoostPathAttachmentBase_exposer.staticmethod( "create" );
        BoostPathAttachmentBase_exposer.staticmethod( "createDependent" );
        BoostPathAttachmentBase_exposer.staticmethod( "createLocal" );
        BoostPathAttachmentBase_exposer.staticmethod( "getClassGroupId" );
        BoostPathAttachmentBase_exposer.staticmethod( "getClassType" );
        BoostPathAttachmentBase_exposer.staticmethod( "getClassTypeId" );
    }

}
