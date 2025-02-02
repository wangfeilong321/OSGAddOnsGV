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
#include "StatsAttachmentBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_StatsAttachmentBase_class(){

    { //::OSG::StatsAttachmentBase
        typedef bp::class_< OSG::StatsAttachmentBase, bp::bases< ::OSG::Attachment >, boost::noncopyable > StatsAttachmentBase_exposer_t;
        StatsAttachmentBase_exposer_t StatsAttachmentBase_exposer = StatsAttachmentBase_exposer_t( "StatsAttachmentBase", bp::no_init );
        bp::scope StatsAttachmentBase_scope( StatsAttachmentBase_exposer );
        { //::OSG::StatsAttachmentBase::copyFromBin
        
            typedef void ( ::OSG::StatsAttachmentBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StatsAttachmentBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::StatsAttachmentBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StatsAttachmentBase::copyToBin
        
            typedef void ( ::OSG::StatsAttachmentBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StatsAttachmentBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::StatsAttachmentBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StatsAttachmentBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::StatsAttachmentBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            StatsAttachmentBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::StatsAttachmentBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::StatsAttachmentBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            StatsAttachmentBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::StatsAttachmentBase::getClassGroupId ) );
        
        }
        { //::OSG::StatsAttachmentBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            StatsAttachmentBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::StatsAttachmentBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::StatsAttachmentBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            StatsAttachmentBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::StatsAttachmentBase::getClassTypeId ) );
        
        }
        { //::OSG::StatsAttachmentBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::StatsAttachmentBase::*getContainerSize_function_type )(  ) const;
            
            StatsAttachmentBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::StatsAttachmentBase::getContainerSize ) );
        
        }
        { //::OSG::StatsAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::StatsAttachmentBase::*getType_function_type )(  ) ;
            
            StatsAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StatsAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StatsAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::StatsAttachmentBase::*getType_function_type )(  ) const;
            
            StatsAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StatsAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        StatsAttachmentBase_exposer.staticmethod( "getClassGroupId" );
        StatsAttachmentBase_exposer.staticmethod( "getClassType" );
        StatsAttachmentBase_exposer.staticmethod( "getClassTypeId" );
    }

}
