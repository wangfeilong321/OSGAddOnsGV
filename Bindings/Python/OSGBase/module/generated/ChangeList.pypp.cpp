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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ChangeList.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct ChangeList_wrapper : OSG::ChangeList, bp::wrapper< OSG::ChangeList > {

    virtual void dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        if( bp::override func_dump = this->get_override( "dump" ) )
            func_dump( uiIndent, bvFlags );
        else{
            this->OSG::ChangeList::dump( uiIndent, bvFlags );
        }
    }
    
    void default_dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        OSG::ChangeList::dump( uiIndent, bvFlags );
    }

    void addRef(  ){
        OSG::MemoryObject::addRef(  );
    }

    void addReferenceUnrecorded(  ){
        OSG::MemoryObject::addReferenceUnrecorded(  );
    }

    ::OSG::Int32 getRefCount(  ){
        return OSG::MemoryObject::getRefCount(  );
    }

    void subRef(  ){
        OSG::MemoryObject::subRef(  );
    }

    void subReferenceUnrecorded(  ){
        OSG::MemoryObject::subReferenceUnrecorded(  );
    }

};

void register_ChangeList_class(){

    { //::OSG::ChangeList
        typedef bp::class_< ChangeList_wrapper, bp::bases< OSG::MemoryObject >, boost::noncopyable > ChangeList_exposer_t;
        ChangeList_exposer_t ChangeList_exposer = ChangeList_exposer_t( "ChangeList", bp::no_init );
        bp::scope ChangeList_scope( ChangeList_exposer );
        { //::OSG::ChangeList::applyAndClear
        
            typedef void ( ::OSG::ChangeList::*applyAndClear_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "applyAndClear"
                , applyAndClear_function_type( &::OSG::ChangeList::applyAndClear ) );
        
        }
        { //::OSG::ChangeList::applyNoClear
        
            typedef void ( ::OSG::ChangeList::*applyNoClear_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "applyNoClear"
                , applyNoClear_function_type( &::OSG::ChangeList::applyNoClear ) );
        
        }
        { //::OSG::ChangeList::clear
        
            typedef void ( ::OSG::ChangeList::*clear_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::ChangeList::clear ) );
        
        }
        { //::OSG::ChangeList::commitChanges
        
            typedef void ( ::OSG::ChangeList::*commitChanges_function_type )( ::OSG::UInt32,::OSG::UInt32 ) ;
            
            ChangeList_exposer.def( 
                "commitChanges"
                , commitChanges_function_type( &::OSG::ChangeList::commitChanges )
                , ( bp::arg("origin")=(::OSG::UInt32)(OSG::ChangedOrigin::Commit), bp::arg("AdditionalChangeOrigin")=(::OSG::UInt32)(0) ) );
        
        }
        { //::OSG::ChangeList::commitChangesAndClear
        
            typedef void ( ::OSG::ChangeList::*commitChangesAndClear_function_type )( ::OSG::UInt32,::OSG::UInt32 ) ;
            
            ChangeList_exposer.def( 
                "commitChangesAndClear"
                , commitChangesAndClear_function_type( &::OSG::ChangeList::commitChangesAndClear )
                , ( bp::arg("origin")=(::OSG::UInt32)(OSG::ChangedOrigin::Commit), bp::arg("AdditionalChangeOrigin")=(::OSG::UInt32)(0) ) );
        
        }
        { //::OSG::ChangeList::commitDelayedSubRefs
        
            typedef void ( ::OSG::ChangeList::*commitDelayedSubRefs_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "commitDelayedSubRefs"
                , commitDelayedSubRefs_function_type( &::OSG::ChangeList::commitDelayedSubRefs ) );
        
        }
        { //::OSG::ChangeList::create
        
            typedef ::OSG::ChangeList * ( *create_function_type )(  );
            
            ChangeList_exposer.def( 
                "create"
                , create_function_type( &::OSG::ChangeList::create )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ChangeList::dump
        
            typedef void ( ::OSG::ChangeList::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            typedef void ( ChangeList_wrapper::*default_dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ChangeList_exposer.def( 
                "dump"
                , dump_function_type(&::OSG::ChangeList::dump)
                , default_dump_function_type(&ChangeList_wrapper::default_dump)
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ChangeList::dumpListSizes
        
            typedef void ( ::OSG::ChangeList::*dumpListSizes_function_type )(  ) const;
            
            ChangeList_exposer.def( 
                "dumpListSizes"
                , dumpListSizes_function_type( &::OSG::ChangeList::dumpListSizes ) );
        
        }
        { //::OSG::ChangeList::fillFromCurrentState
        
            typedef void ( ::OSG::ChangeList::*fillFromCurrentState_function_type )( ::OSG::UInt32,bool ) ;
            
            ChangeList_exposer.def( 
                "fillFromCurrentState"
                , fillFromCurrentState_function_type( &::OSG::ChangeList::fillFromCurrentState )
                , ( bp::arg("uiFieldContainerId")=(::OSG::UInt32)(0), bp::arg("skipPrototypes")=(bool)(true) ) );
        
        }
        { //::OSG::ChangeList::fillStatistic
        
            typedef void ( ::OSG::ChangeList::*fillStatistic_function_type )( ::OSG::StatCollector * ) const;
            
            ChangeList_exposer.def( 
                "fillStatistic"
                , fillStatistic_function_type( &::OSG::ChangeList::fillStatistic )
                , ( bp::arg("pColl") ) );
        
        }
        { //::OSG::ChangeList::getNumChanged
        
            typedef ::OSG::UInt32 ( ::OSG::ChangeList::*getNumChanged_function_type )(  ) const;
            
            ChangeList_exposer.def( 
                "getNumChanged"
                , getNumChanged_function_type( &::OSG::ChangeList::getNumChanged ) );
        
        }
        { //::OSG::ChangeList::getNumCreated
        
            typedef ::OSG::UInt32 ( ::OSG::ChangeList::*getNumCreated_function_type )(  ) const;
            
            ChangeList_exposer.def( 
                "getNumCreated"
                , getNumCreated_function_type( &::OSG::ChangeList::getNumCreated ) );
        
        }
        { //::OSG::ChangeList::merge
        
            typedef void ( ::OSG::ChangeList::*merge_function_type )( ::OSG::ChangeList & ) ;
            
            ChangeList_exposer.def( 
                "merge"
                , merge_function_type( &::OSG::ChangeList::merge )
                , ( bp::arg("pOther") ) );
        
        }
        { //::OSG::ChangeList::setAspectTo
        
            typedef void ( ::OSG::ChangeList::*setAspectTo_function_type )( ::OSG::UInt32 ) ;
            
            ChangeList_exposer.def( 
                "setAspectTo"
                , setAspectTo_function_type( &::OSG::ChangeList::setAspectTo )
                , ( bp::arg("uiNewAspect") ) );
        
        }
        { //::OSG::ChangeList::setReadWriteDefault
        
            typedef void ( *setReadWriteDefault_function_type )( bool );
            
            ChangeList_exposer.def( 
                "setReadWriteDefault"
                , setReadWriteDefault_function_type( &::OSG::ChangeList::setReadWriteDefault )
                , ( bp::arg("bReadWrite")=(bool)(true) ) );
        
        }
        ChangeList_exposer.def_readonly( "statNChangedStoreSize", OSG::ChangeList::statNChangedStoreSize );
        ChangeList_exposer.def_readonly( "statNCreatedStoreSize", OSG::ChangeList::statNCreatedStoreSize );
        ChangeList_exposer.def_readonly( "statNPoolSize", OSG::ChangeList::statNPoolSize );
        ChangeList_exposer.def_readonly( "statNUnCommittedStoreSize", OSG::ChangeList::statNUnCommittedStoreSize );
        { //::OSG::MemoryObject::addRef
        
            typedef void ( ChangeList_wrapper::*addRef_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "addRef"
                , addRef_function_type( &ChangeList_wrapper::addRef ) );
        
        }
        { //::OSG::MemoryObject::addReferenceUnrecorded
        
            typedef void ( ChangeList_wrapper::*addReferenceUnrecorded_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "addReferenceUnrecorded"
                , addReferenceUnrecorded_function_type( &ChangeList_wrapper::addReferenceUnrecorded ) );
        
        }
        { //::OSG::MemoryObject::getRefCount
        
            typedef ::OSG::Int32 ( ChangeList_wrapper::*getRefCount_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "getRefCount"
                , getRefCount_function_type( &ChangeList_wrapper::getRefCount ) );
        
        }
        { //::OSG::MemoryObject::subRef
        
            typedef void ( ChangeList_wrapper::*subRef_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "subRef"
                , subRef_function_type( &ChangeList_wrapper::subRef ) );
        
        }
        { //::OSG::MemoryObject::subReferenceUnrecorded
        
            typedef void ( ChangeList_wrapper::*subReferenceUnrecorded_function_type )(  ) ;
            
            ChangeList_exposer.def( 
                "subReferenceUnrecorded"
                , subReferenceUnrecorded_function_type( &ChangeList_wrapper::subReferenceUnrecorded ) );
        
        }
        ChangeList_exposer.staticmethod( "create" );
        ChangeList_exposer.staticmethod( "setReadWriteDefault" );
    }

}
