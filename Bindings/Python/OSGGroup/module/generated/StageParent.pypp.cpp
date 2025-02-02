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
#include "StageParent.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper : OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >, bp::wrapper< OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > > {

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

    virtual void copyFromBin( ::OSG::BinaryDataHandler & pMem, ::OSG::ConstFieldMaskArg whichField ) {
        if( bp::override func_copyFromBin = this->get_override( "copyFromBin" ) )
            func_copyFromBin( boost::ref(pMem), whichField );
        else{
            this->OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyFromBin( boost::ref(pMem), whichField );
        }
    }
    
    void default_copyFromBin( ::OSG::BinaryDataHandler & pMem, ::OSG::ConstFieldMaskArg whichField ) {
        OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyFromBin( boost::ref(pMem), whichField );
    }

    virtual void copyToBin( ::OSG::BinaryDataHandler & pMem, ::OSG::ConstFieldMaskArg whichField ) {
        if( bp::override func_copyToBin = this->get_override( "copyToBin" ) )
            func_copyToBin( boost::ref(pMem), whichField );
        else{
            this->OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyToBin( boost::ref(pMem), whichField );
        }
    }
    
    void default_copyToBin( ::OSG::BinaryDataHandler & pMem, ::OSG::ConstFieldMaskArg whichField ) {
        OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyToBin( boost::ref(pMem), whichField );
    }

    virtual ::OSG::SizeT getBinSize( ::OSG::ConstFieldMaskArg whichField ) {
        if( bp::override func_getBinSize = this->get_override( "getBinSize" ) )
            return func_getBinSize( whichField );
        else{
            return this->OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::getBinSize( whichField );
        }
    }
    
    ::OSG::SizeT default_getBinSize( ::OSG::ConstFieldMaskArg whichField ) {
        return OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::getBinSize( whichField );
    }

};

void register_StageParent_class(){

    { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >
        typedef bp::class_< StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper, boost::noncopyable > StageParent_exposer_t;
        StageParent_exposer_t StageParent_exposer = StageParent_exposer_t( "StageParent", bp::no_init );
        bp::scope StageParent_scope( StageParent_exposer );
        bp::enum_< OSG::StageHandlerMixin<OSG::ContainerMixinHead<OSG::StageDesc> >::GroupMode>("GroupMode")
            .value("NoPartitionGroup", OSG::StageHandlerMixin<OSG::ContainerMixinHead<OSG::StageDesc> >::NoPartitionGroup)
            .value("InPartitionGroup", OSG::StageHandlerMixin<OSG::ContainerMixinHead<OSG::StageDesc> >::InPartitionGroup)
            .value("InPartitionList", OSG::StageHandlerMixin<OSG::ContainerMixinHead<OSG::StageDesc> >::InPartitionList)
            .export_values()
            ;
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::beginPartitionGroup
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*beginPartitionGroup_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageParent_exposer.def( 
                "beginPartitionGroup"
                , beginPartitionGroup_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::beginPartitionGroup )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::beginPartitions
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*beginPartitions_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageParent_exposer.def( 
                "beginPartitions"
                , beginPartitions_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::beginPartitions )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            typedef void ( StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::*default_changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            StageParent_exposer.def( 
                "changed"
                , changed_function_type(&::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed)
                , default_changed_function_type(&StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::default_changed)
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            typedef void ( StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::*default_dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            StageParent_exposer.def( 
                "dump"
                , dump_function_type(&::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump)
                , default_dump_function_type(&StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::default_dump)
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::endPartitionGroup
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*endPartitionGroup_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageParent_exposer.def( 
                "endPartitionGroup"
                , endPartitionGroup_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::endPartitionGroup )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::endPartitions
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*endPartitions_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageParent_exposer.def( 
                "endPartitions"
                , endPartitions_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::endPartitions )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::popPartition
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*popPartition_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageParent_exposer.def( 
                "popPartition"
                , popPartition_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::popPartition )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::pushPartition
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*pushPartition_function_type )( ::OSG::RenderActionBase *,::OSG::UInt32,::OSG::RenderPartitionBase::Mode ) ;
            
            StageParent_exposer.def( 
                "pushPartition"
                , pushPartition_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::pushPartition )
                , ( bp::arg("pAction"), bp::arg("uiCopyOnPush")=(::OSG::UInt32)(0), bp::arg("eMode")=OSG::RenderPartitionBase::StateSorting ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::validateOnEnter
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef ::OSG::TraversalValidator::ValidationStatus ( exported_class_t::*validateOnEnter_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageParent_exposer.def( 
                "validateOnEnter"
                , validateOnEnter_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::validateOnEnter )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::validateOnLeave
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef ::OSG::TraversalValidator::ValidationStatus ( exported_class_t::*validateOnLeave_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageParent_exposer.def( 
                "validateOnLeave"
                , validateOnLeave_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::validateOnLeave )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyFromBin
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            typedef void ( StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::*default_copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StageParent_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type(&::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyFromBin)
                , default_copyFromBin_function_type(&StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::default_copyFromBin)
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyToBin
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef void ( exported_class_t::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            typedef void ( StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::*default_copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StageParent_exposer.def( 
                "copyToBin"
                , copyToBin_function_type(&::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyToBin)
                , default_copyToBin_function_type(&StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::default_copyToBin)
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::getBinSize
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > exported_class_t;
            typedef ::OSG::SizeT ( exported_class_t::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            typedef ::OSG::SizeT ( StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::*default_getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            StageParent_exposer.def( 
                "getBinSize"
                , getBinSize_function_type(&::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::getBinSize)
                , default_getBinSize_function_type(&StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDesc__greater___greater__wrapper::default_getBinSize)
                , ( bp::arg("whichField") ) );
        
        }
    }

}
