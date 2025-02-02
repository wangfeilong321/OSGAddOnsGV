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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "StageDrawableParent.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDrawableDesc__greater___greater__wrapper : OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >, bp::wrapper< OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > > {

    virtual void changed( ::OSG::ConstFieldMaskArg whichField, ::OSG::UInt32 origin, ::OSG::BitVector details ) {
        if( bp::override func_changed = this->get_override( "changed" ) )
            func_changed( whichField, origin, details );
        else{
            this->OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::changed( whichField, origin, details );
        }
    }
    
    void default_changed( ::OSG::ConstFieldMaskArg whichField, ::OSG::UInt32 origin, ::OSG::BitVector details ) {
        OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::changed( whichField, origin, details );
    }

    virtual void dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        if( bp::override func_dump = this->get_override( "dump" ) )
            func_dump( uiIndent, bvFlags );
        else{
            this->OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::dump( uiIndent, bvFlags );
        }
    }
    
    void default_dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::dump( uiIndent, bvFlags );
    }

    virtual void fill( ::OSG::DrawableStatsAttachment * pStat ){
        bp::override func_fill = this->get_override( "fill" );
        func_fill( boost::python::ptr(pStat) );
    }

};

void register_StageDrawableParent_class(){

    { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >
        typedef bp::class_< StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDrawableDesc__greater___greater__wrapper, boost::noncopyable > StageDrawableParent_exposer_t;
        StageDrawableParent_exposer_t StageDrawableParent_exposer = StageDrawableParent_exposer_t( "StageDrawableParent", bp::no_init );
        bp::scope StageDrawableParent_scope( StageDrawableParent_exposer );
        bp::enum_< OSG::StageHandlerMixin<OSG::ContainerMixinHead<OSG::StageDrawableDesc> >::GroupMode>("GroupMode")
            .value("NoPartitionGroup", OSG::StageHandlerMixin<OSG::ContainerMixinHead<OSG::StageDrawableDesc> >::NoPartitionGroup)
            .value("InPartitionGroup", OSG::StageHandlerMixin<OSG::ContainerMixinHead<OSG::StageDrawableDesc> >::InPartitionGroup)
            .value("InPartitionList", OSG::StageHandlerMixin<OSG::ContainerMixinHead<OSG::StageDrawableDesc> >::InPartitionList)
            .export_values()
            ;
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::beginPartitionGroup
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef void ( exported_class_t::*beginPartitionGroup_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageDrawableParent_exposer.def( 
                "beginPartitionGroup"
                , beginPartitionGroup_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::beginPartitionGroup )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::beginPartitions
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef void ( exported_class_t::*beginPartitions_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageDrawableParent_exposer.def( 
                "beginPartitions"
                , beginPartitions_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::beginPartitions )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::changed
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef void ( exported_class_t::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            typedef void ( StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDrawableDesc__greater___greater__wrapper::*default_changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            StageDrawableParent_exposer.def( 
                "changed"
                , changed_function_type(&::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::changed)
                , default_changed_function_type(&StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDrawableDesc__greater___greater__wrapper::default_changed)
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::dump
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            typedef void ( StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDrawableDesc__greater___greater__wrapper::*default_dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            StageDrawableParent_exposer.def( 
                "dump"
                , dump_function_type(&::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::dump)
                , default_dump_function_type(&StageHandlerMixin_less__OSG_scope_ContainerMixinHead_less__OSG_scope_StageDrawableDesc__greater___greater__wrapper::default_dump)
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::endPartitionGroup
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef void ( exported_class_t::*endPartitionGroup_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageDrawableParent_exposer.def( 
                "endPartitionGroup"
                , endPartitionGroup_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::endPartitionGroup )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::endPartitions
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef void ( exported_class_t::*endPartitions_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageDrawableParent_exposer.def( 
                "endPartitions"
                , endPartitions_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::endPartitions )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::popPartition
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef void ( exported_class_t::*popPartition_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageDrawableParent_exposer.def( 
                "popPartition"
                , popPartition_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::popPartition )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::pushPartition
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef void ( exported_class_t::*pushPartition_function_type )( ::OSG::RenderActionBase *,::OSG::UInt32,::OSG::RenderPartitionBase::Mode ) ;
            
            StageDrawableParent_exposer.def( 
                "pushPartition"
                , pushPartition_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::pushPartition )
                , ( bp::arg("pAction"), bp::arg("uiCopyOnPush")=(::OSG::UInt32)(0), bp::arg("eMode")=OSG::RenderPartitionBase::StateSorting ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::validateOnEnter
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef ::OSG::TraversalValidator::ValidationStatus ( exported_class_t::*validateOnEnter_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageDrawableParent_exposer.def( 
                "validateOnEnter"
                , validateOnEnter_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::validateOnEnter )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::validateOnLeave
        
            typedef OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > exported_class_t;
            typedef ::OSG::TraversalValidator::ValidationStatus ( exported_class_t::*validateOnLeave_function_type )( ::OSG::RenderActionBase * ) ;
            
            StageDrawableParent_exposer.def( 
                "validateOnLeave"
                , validateOnLeave_function_type( &::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDrawableDesc > >::validateOnLeave )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::Drawable::fill
        
            typedef void ( ::OSG::Drawable::*fill_function_type )( ::OSG::DrawableStatsAttachment * ) ;
            
            StageDrawableParent_exposer.def( 
                "fill"
                , bp::pure_virtual( fill_function_type(&::OSG::Drawable::fill) )
                , ( bp::arg("pStat") ) );
        
        }
    }

}
