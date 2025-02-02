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
#include "NodeCoreBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_NodeCoreBase_class(){

    { //::OSG::NodeCoreBase
        typedef bp::class_< OSG::NodeCoreBase, bp::bases< OSG::AttachmentContainer >, boost::noncopyable > NodeCoreBase_exposer_t;
        NodeCoreBase_exposer_t NodeCoreBase_exposer = NodeCoreBase_exposer_t( "NodeCoreBase", bp::no_init );
        bp::scope NodeCoreBase_scope( NodeCoreBase_exposer );
        bp::scope().attr("ParentsFieldId") = (int)OSG::NodeCoreBase::ParentsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::NodeCoreBase::NextFieldId;
        { //::OSG::NodeCoreBase::copyFromBin
        
            typedef void ( ::OSG::NodeCoreBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            NodeCoreBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::NodeCoreBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::NodeCoreBase::copyToBin
        
            typedef void ( ::OSG::NodeCoreBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            NodeCoreBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::NodeCoreBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::NodeCoreBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::NodeCoreBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            NodeCoreBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::NodeCoreBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::NodeCoreBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            NodeCoreBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::NodeCoreBase::getClassGroupId ) );
        
        }
        { //::OSG::NodeCoreBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            NodeCoreBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::NodeCoreBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::NodeCoreBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            NodeCoreBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::NodeCoreBase::getClassTypeId ) );
        
        }
        { //::OSG::NodeCoreBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::NodeCoreBase::*getContainerSize_function_type )(  ) const;
            
            NodeCoreBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::NodeCoreBase::getContainerSize ) );
        
        }
        { //::OSG::NodeCoreBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::NodeCoreBase::*getType_function_type )(  ) ;
            
            NodeCoreBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::NodeCoreBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::NodeCoreBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::NodeCoreBase::*getType_function_type )(  ) const;
            
            NodeCoreBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::NodeCoreBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        NodeCoreBase_exposer.staticmethod( "getClassGroupId" );
        NodeCoreBase_exposer.staticmethod( "getClassType" );
        NodeCoreBase_exposer.staticmethod( "getClassTypeId" );
    }

}
