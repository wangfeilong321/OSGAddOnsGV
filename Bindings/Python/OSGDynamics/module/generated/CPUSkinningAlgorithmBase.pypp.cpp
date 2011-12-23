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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CPUSkinningAlgorithmBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct CPUSkinningAlgorithmBase_wrapper : OSG::CPUSkinningAlgorithmBase, bp::wrapper< OSG::CPUSkinningAlgorithmBase > {

    virtual ::OSG::ActionBase::ResultE renderEnter( ::OSG::Action * pAction ){
        bp::override func_renderEnter = this->get_override( "renderEnter" );
        return func_renderEnter( boost::python::ptr(pAction) );
    }

    virtual ::OSG::ActionBase::ResultE renderLeave( ::OSG::Action * pAction ){
        bp::override func_renderLeave = this->get_override( "renderLeave" );
        return func_renderLeave( boost::python::ptr(pAction) );
    }

};

void register_CPUSkinningAlgorithmBase_class(){

    { //::OSG::CPUSkinningAlgorithmBase
        typedef bp::class_< CPUSkinningAlgorithmBase_wrapper, bp::bases< OSG::SkinningAlgorithm >, boost::noncopyable > CPUSkinningAlgorithmBase_exposer_t;
        CPUSkinningAlgorithmBase_exposer_t CPUSkinningAlgorithmBase_exposer = CPUSkinningAlgorithmBase_exposer_t( "CPUSkinningAlgorithmBase", bp::no_init );
        bp::scope CPUSkinningAlgorithmBase_scope( CPUSkinningAlgorithmBase_exposer );
        { //::OSG::CPUSkinningAlgorithmBase::copyFromBin
        
            typedef void ( ::OSG::CPUSkinningAlgorithmBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CPUSkinningAlgorithmBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::copyToBin
        
            typedef void ( ::OSG::CPUSkinningAlgorithmBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CPUSkinningAlgorithmBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::create
        
            typedef ::OSG::CPUSkinningAlgorithmTransitPtr ( *create_function_type )(  );
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CPUSkinningAlgorithmBase::create ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::createDependent
        
            typedef ::OSG::CPUSkinningAlgorithmTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CPUSkinningAlgorithmBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::createLocal
        
            typedef ::OSG::CPUSkinningAlgorithmTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CPUSkinningAlgorithmBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CPUSkinningAlgorithmBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CPUSkinningAlgorithmBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CPUSkinningAlgorithmBase::getClassGroupId ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CPUSkinningAlgorithmBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CPUSkinningAlgorithmBase::getClassTypeId ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CPUSkinningAlgorithmBase::*getContainerSize_function_type )(  ) const;
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CPUSkinningAlgorithmBase::getContainerSize ) );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CPUSkinningAlgorithmBase::*getType_function_type )(  ) ;
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CPUSkinningAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CPUSkinningAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CPUSkinningAlgorithmBase::*getType_function_type )(  ) const;
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CPUSkinningAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Algorithm::renderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderEnter_function_type )( ::OSG::Action * ) ;
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "renderEnter"
                , bp::pure_virtual( renderEnter_function_type(&::OSG::Algorithm::renderEnter) )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::Algorithm::renderLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderLeave_function_type )( ::OSG::Action * ) ;
            
            CPUSkinningAlgorithmBase_exposer.def( 
                "renderLeave"
                , bp::pure_virtual( renderLeave_function_type(&::OSG::Algorithm::renderLeave) )
                , ( bp::arg("pAction") ) );
        
        }
        CPUSkinningAlgorithmBase_exposer.staticmethod( "create" );
        CPUSkinningAlgorithmBase_exposer.staticmethod( "createDependent" );
        CPUSkinningAlgorithmBase_exposer.staticmethod( "createLocal" );
        CPUSkinningAlgorithmBase_exposer.staticmethod( "getClassGroupId" );
        CPUSkinningAlgorithmBase_exposer.staticmethod( "getClassType" );
        CPUSkinningAlgorithmBase_exposer.staticmethod( "getClassTypeId" );
    }

}
