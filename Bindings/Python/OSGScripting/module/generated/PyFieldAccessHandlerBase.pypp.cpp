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
#include "OSGScripting_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PyFieldAccessHandlerBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PyFieldAccessHandlerBase_class(){

    { //::OSG::PyFieldAccessHandlerBase
        typedef bp::class_< OSG::PyFieldAccessHandlerBase, bp::bases< ::OSG::FieldContainer >, boost::noncopyable > PyFieldAccessHandlerBase_exposer_t;
        PyFieldAccessHandlerBase_exposer_t PyFieldAccessHandlerBase_exposer = PyFieldAccessHandlerBase_exposer_t( "PyFieldAccessHandlerBase", bp::no_init );
        bp::scope PyFieldAccessHandlerBase_scope( PyFieldAccessHandlerBase_exposer );
        { //::OSG::PyFieldAccessHandlerBase::copyFromBin
        
            typedef void ( ::OSG::PyFieldAccessHandlerBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PyFieldAccessHandlerBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PyFieldAccessHandlerBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::copyToBin
        
            typedef void ( ::OSG::PyFieldAccessHandlerBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PyFieldAccessHandlerBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PyFieldAccessHandlerBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::create
        
            typedef ::OSG::PyFieldAccessHandlerTransitPtr ( *create_function_type )(  );
            
            PyFieldAccessHandlerBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PyFieldAccessHandlerBase::create ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::createDependent
        
            typedef ::OSG::PyFieldAccessHandlerTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PyFieldAccessHandlerBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PyFieldAccessHandlerBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::createLocal
        
            typedef ::OSG::PyFieldAccessHandlerTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PyFieldAccessHandlerBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PyFieldAccessHandlerBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PyFieldAccessHandlerBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PyFieldAccessHandlerBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PyFieldAccessHandlerBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PyFieldAccessHandlerBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PyFieldAccessHandlerBase::getClassGroupId ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PyFieldAccessHandlerBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PyFieldAccessHandlerBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PyFieldAccessHandlerBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PyFieldAccessHandlerBase::getClassTypeId ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PyFieldAccessHandlerBase::*getContainerSize_function_type )(  ) const;
            
            PyFieldAccessHandlerBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PyFieldAccessHandlerBase::getContainerSize ) );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PyFieldAccessHandlerBase::*getType_function_type )(  ) ;
            
            PyFieldAccessHandlerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PyFieldAccessHandlerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PyFieldAccessHandlerBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PyFieldAccessHandlerBase::*getType_function_type )(  ) const;
            
            PyFieldAccessHandlerBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PyFieldAccessHandlerBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        PyFieldAccessHandlerBase_exposer.staticmethod( "create" );
        PyFieldAccessHandlerBase_exposer.staticmethod( "createDependent" );
        PyFieldAccessHandlerBase_exposer.staticmethod( "createLocal" );
        PyFieldAccessHandlerBase_exposer.staticmethod( "getClassGroupId" );
        PyFieldAccessHandlerBase_exposer.staticmethod( "getClassType" );
        PyFieldAccessHandlerBase_exposer.staticmethod( "getClassTypeId" );
    }

}
