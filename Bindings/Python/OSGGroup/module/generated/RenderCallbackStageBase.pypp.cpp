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
#include "RenderCallbackStageBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct RenderCallbackStageBase_wrapper : OSG::RenderCallbackStageBase, bp::wrapper< OSG::RenderCallbackStageBase > {

    virtual void changed( ::OSG::ConstFieldMaskArg whichField, ::OSG::UInt32 origin, ::OSG::BitVector details ) {
        if( bp::override func_changed = this->get_override( "changed" ) )
            func_changed( whichField, origin, details );
        else{
            this->OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed( whichField, origin, details );
        }
    }
    
    void default_changed( ::OSG::ConstFieldMaskArg whichField, ::OSG::UInt32 origin, ::OSG::BitVector details ) {
        OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed( whichField, origin, details );
    }

    virtual void dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        if( bp::override func_dump = this->get_override( "dump" ) )
            func_dump( uiIndent, bvFlags );
        else{
            this->OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump( uiIndent, bvFlags );
        }
    }
    
    void default_dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump( uiIndent, bvFlags );
    }

};

void register_RenderCallbackStageBase_class(){

    { //::OSG::RenderCallbackStageBase
        typedef bp::class_< RenderCallbackStageBase_wrapper, bp::bases< OSG::Stage >, boost::noncopyable > RenderCallbackStageBase_exposer_t;
        RenderCallbackStageBase_exposer_t RenderCallbackStageBase_exposer = RenderCallbackStageBase_exposer_t( "RenderCallbackStageBase", bp::no_init );
        bp::scope RenderCallbackStageBase_scope( RenderCallbackStageBase_exposer );
        bp::scope().attr("PreRenderCallbacksFieldId") = (int)OSG::RenderCallbackStageBase::PreRenderCallbacksFieldId;
        bp::scope().attr("PostRenderCallbacksFieldId") = (int)OSG::RenderCallbackStageBase::PostRenderCallbacksFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::RenderCallbackStageBase::NextFieldId;
        { //::OSG::RenderCallbackStageBase::copyFromBin
        
            typedef void ( ::OSG::RenderCallbackStageBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            RenderCallbackStageBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::RenderCallbackStageBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::RenderCallbackStageBase::copyToBin
        
            typedef void ( ::OSG::RenderCallbackStageBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            RenderCallbackStageBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::RenderCallbackStageBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::RenderCallbackStageBase::create
        
            typedef ::OSG::RenderCallbackStageTransitPtr ( *create_function_type )(  );
            
            RenderCallbackStageBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::RenderCallbackStageBase::create ) );
        
        }
        { //::OSG::RenderCallbackStageBase::createDependent
        
            typedef ::OSG::RenderCallbackStageTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            RenderCallbackStageBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::RenderCallbackStageBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::RenderCallbackStageBase::createLocal
        
            typedef ::OSG::RenderCallbackStageTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            RenderCallbackStageBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::RenderCallbackStageBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::RenderCallbackStageBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::RenderCallbackStageBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            RenderCallbackStageBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::RenderCallbackStageBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::RenderCallbackStageBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            RenderCallbackStageBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::RenderCallbackStageBase::getClassGroupId ) );
        
        }
        { //::OSG::RenderCallbackStageBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            RenderCallbackStageBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::RenderCallbackStageBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::RenderCallbackStageBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            RenderCallbackStageBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::RenderCallbackStageBase::getClassTypeId ) );
        
        }
        { //::OSG::RenderCallbackStageBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::RenderCallbackStageBase::*getContainerSize_function_type )(  ) const;
            
            RenderCallbackStageBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::RenderCallbackStageBase::getContainerSize ) );
        
        }
        { //::OSG::RenderCallbackStageBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::RenderCallbackStageBase::*getType_function_type )(  ) ;
            
            RenderCallbackStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::RenderCallbackStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderCallbackStageBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::RenderCallbackStageBase::*getType_function_type )(  ) const;
            
            RenderCallbackStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::RenderCallbackStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed
        
            typedef OSG::RenderCallbackStageBase exported_class_t;
            typedef void ( exported_class_t::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            typedef void ( RenderCallbackStageBase_wrapper::*default_changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            RenderCallbackStageBase_exposer.def( 
                "changed"
                , changed_function_type(&::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed)
                , default_changed_function_type(&RenderCallbackStageBase_wrapper::default_changed)
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump
        
            typedef OSG::RenderCallbackStageBase exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            typedef void ( RenderCallbackStageBase_wrapper::*default_dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            RenderCallbackStageBase_exposer.def( 
                "dump"
                , dump_function_type(&::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump)
                , default_dump_function_type(&RenderCallbackStageBase_wrapper::default_dump)
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        RenderCallbackStageBase_exposer.staticmethod( "create" );
        RenderCallbackStageBase_exposer.staticmethod( "createDependent" );
        RenderCallbackStageBase_exposer.staticmethod( "createLocal" );
        RenderCallbackStageBase_exposer.staticmethod( "getClassGroupId" );
        RenderCallbackStageBase_exposer.staticmethod( "getClassType" );
        RenderCallbackStageBase_exposer.staticmethod( "getClassTypeId" );
    }

}
