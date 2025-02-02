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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GPUSkinningAlgorithmBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct GPUSkinningAlgorithmBase_wrapper : OSG::GPUSkinningAlgorithmBase, bp::wrapper< OSG::GPUSkinningAlgorithmBase > {

    virtual ::OSG::ActionBase::ResultE renderEnter( ::OSG::Action * pAction ){
        bp::override func_renderEnter = this->get_override( "renderEnter" );
        return func_renderEnter( boost::python::ptr(pAction) );
    }

    virtual ::OSG::ActionBase::ResultE renderLeave( ::OSG::Action * pAction ){
        bp::override func_renderLeave = this->get_override( "renderLeave" );
        return func_renderLeave( boost::python::ptr(pAction) );
    }

};

void register_GPUSkinningAlgorithmBase_class(){

    { //::OSG::GPUSkinningAlgorithmBase
        typedef bp::class_< GPUSkinningAlgorithmBase_wrapper, bp::bases< OSG::SkinningAlgorithm >, boost::noncopyable > GPUSkinningAlgorithmBase_exposer_t;
        GPUSkinningAlgorithmBase_exposer_t GPUSkinningAlgorithmBase_exposer = GPUSkinningAlgorithmBase_exposer_t( "GPUSkinningAlgorithmBase", bp::no_init );
        bp::scope GPUSkinningAlgorithmBase_scope( GPUSkinningAlgorithmBase_exposer );
        { //::OSG::GPUSkinningAlgorithmBase::copyFromBin
        
            typedef void ( ::OSG::GPUSkinningAlgorithmBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GPUSkinningAlgorithmBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::copyToBin
        
            typedef void ( ::OSG::GPUSkinningAlgorithmBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GPUSkinningAlgorithmBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::create
        
            typedef ::OSG::GPUSkinningAlgorithmTransitPtr ( *create_function_type )(  );
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GPUSkinningAlgorithmBase::create ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::createDependent
        
            typedef ::OSG::GPUSkinningAlgorithmTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GPUSkinningAlgorithmBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::createLocal
        
            typedef ::OSG::GPUSkinningAlgorithmTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GPUSkinningAlgorithmBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GPUSkinningAlgorithmBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GPUSkinningAlgorithmBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GPUSkinningAlgorithmBase::getClassGroupId ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GPUSkinningAlgorithmBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GPUSkinningAlgorithmBase::getClassTypeId ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GPUSkinningAlgorithmBase::*getContainerSize_function_type )(  ) const;
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GPUSkinningAlgorithmBase::getContainerSize ) );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GPUSkinningAlgorithmBase::*getType_function_type )(  ) ;
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GPUSkinningAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GPUSkinningAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GPUSkinningAlgorithmBase::*getType_function_type )(  ) const;
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GPUSkinningAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Algorithm::renderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderEnter_function_type )( ::OSG::Action * ) ;
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "renderEnter"
                , bp::pure_virtual( renderEnter_function_type(&::OSG::Algorithm::renderEnter) )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::Algorithm::renderLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderLeave_function_type )( ::OSG::Action * ) ;
            
            GPUSkinningAlgorithmBase_exposer.def( 
                "renderLeave"
                , bp::pure_virtual( renderLeave_function_type(&::OSG::Algorithm::renderLeave) )
                , ( bp::arg("pAction") ) );
        
        }
        GPUSkinningAlgorithmBase_exposer.staticmethod( "create" );
        GPUSkinningAlgorithmBase_exposer.staticmethod( "createDependent" );
        GPUSkinningAlgorithmBase_exposer.staticmethod( "createLocal" );
        GPUSkinningAlgorithmBase_exposer.staticmethod( "getClassGroupId" );
        GPUSkinningAlgorithmBase_exposer.staticmethod( "getClassType" );
        GPUSkinningAlgorithmBase_exposer.staticmethod( "getClassTypeId" );
    }

}
