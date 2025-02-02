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
#include "MatrixTransformationElementBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_MatrixTransformationElementBase_class(){

    { //::OSG::MatrixTransformationElementBase
        typedef bp::class_< OSG::MatrixTransformationElementBase, bp::bases< OSG::TransformationElement >, boost::noncopyable > MatrixTransformationElementBase_exposer_t;
        MatrixTransformationElementBase_exposer_t MatrixTransformationElementBase_exposer = MatrixTransformationElementBase_exposer_t( "MatrixTransformationElementBase", bp::no_init );
        bp::scope MatrixTransformationElementBase_scope( MatrixTransformationElementBase_exposer );
        bp::scope().attr("MatrixFieldId") = (int)OSG::MatrixTransformationElementBase::MatrixFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::MatrixTransformationElementBase::NextFieldId;
        { //::OSG::MatrixTransformationElementBase::copyFromBin
        
            typedef void ( ::OSG::MatrixTransformationElementBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MatrixTransformationElementBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::MatrixTransformationElementBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::copyToBin
        
            typedef void ( ::OSG::MatrixTransformationElementBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MatrixTransformationElementBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::MatrixTransformationElementBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::create
        
            typedef ::OSG::MatrixTransformationElementTransitPtr ( *create_function_type )(  );
            
            MatrixTransformationElementBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::MatrixTransformationElementBase::create ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::createDependent
        
            typedef ::OSG::MatrixTransformationElementTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            MatrixTransformationElementBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::MatrixTransformationElementBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::createLocal
        
            typedef ::OSG::MatrixTransformationElementTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            MatrixTransformationElementBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::MatrixTransformationElementBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::MatrixTransformationElementBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            MatrixTransformationElementBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::MatrixTransformationElementBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            MatrixTransformationElementBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::MatrixTransformationElementBase::getClassGroupId ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            MatrixTransformationElementBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::MatrixTransformationElementBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::MatrixTransformationElementBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            MatrixTransformationElementBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::MatrixTransformationElementBase::getClassTypeId ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::MatrixTransformationElementBase::*getContainerSize_function_type )(  ) const;
            
            MatrixTransformationElementBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::MatrixTransformationElementBase::getContainerSize ) );
        
        }
        { //::OSG::MatrixTransformationElementBase::getMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::MatrixTransformationElementBase::*getMatrix_function_type )(  ) const;
            
            MatrixTransformationElementBase_exposer.def( 
                "getMatrix"
                , getMatrix_function_type( &::OSG::MatrixTransformationElementBase::getMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::MatrixTransformationElementBase::getSFMatrix
        
            typedef ::OSG::SFMatrix const * ( ::OSG::MatrixTransformationElementBase::*getSFMatrix_function_type )(  ) const;
            
            MatrixTransformationElementBase_exposer.def( 
                "getSFMatrix"
                , getSFMatrix_function_type( &::OSG::MatrixTransformationElementBase::getSFMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MatrixTransformationElementBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::MatrixTransformationElementBase::*getType_function_type )(  ) ;
            
            MatrixTransformationElementBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MatrixTransformationElementBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MatrixTransformationElementBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::MatrixTransformationElementBase::*getType_function_type )(  ) const;
            
            MatrixTransformationElementBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MatrixTransformationElementBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MatrixTransformationElementBase::setMatrix
        
            typedef void ( ::OSG::MatrixTransformationElementBase::*setMatrix_function_type )( ::OSG::Matrix const & ) ;
            
            MatrixTransformationElementBase_exposer.def( 
                "setMatrix"
                , setMatrix_function_type( &::OSG::MatrixTransformationElementBase::setMatrix )
                , ( bp::arg("value") ) );
        
        }
        MatrixTransformationElementBase_exposer.staticmethod( "create" );
        MatrixTransformationElementBase_exposer.staticmethod( "createDependent" );
        MatrixTransformationElementBase_exposer.staticmethod( "createLocal" );
        MatrixTransformationElementBase_exposer.staticmethod( "getClassGroupId" );
        MatrixTransformationElementBase_exposer.staticmethod( "getClassType" );
        MatrixTransformationElementBase_exposer.staticmethod( "getClassTypeId" );
    }

}
