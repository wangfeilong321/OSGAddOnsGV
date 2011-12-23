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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CalibrationPatternFilterBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CalibrationPatternFilterBase_class(){

    { //::OSG::CalibrationPatternFilterBase
        typedef bp::class_< OSG::CalibrationPatternFilterBase, bp::bases< ::OSG::AttachmentContainer >, boost::noncopyable > CalibrationPatternFilterBase_exposer_t;
        CalibrationPatternFilterBase_exposer_t CalibrationPatternFilterBase_exposer = CalibrationPatternFilterBase_exposer_t( "CalibrationPatternFilterBase", bp::no_init );
        bp::scope CalibrationPatternFilterBase_scope( CalibrationPatternFilterBase_exposer );
        bp::scope().attr("EnabledFieldId") = (int)OSG::CalibrationPatternFilterBase::EnabledFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CalibrationPatternFilterBase::NextFieldId;
        { //::OSG::CalibrationPatternFilterBase::copyFromBin
        
            typedef void ( ::OSG::CalibrationPatternFilterBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CalibrationPatternFilterBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CalibrationPatternFilterBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CalibrationPatternFilterBase::copyToBin
        
            typedef void ( ::OSG::CalibrationPatternFilterBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CalibrationPatternFilterBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CalibrationPatternFilterBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CalibrationPatternFilterBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CalibrationPatternFilterBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CalibrationPatternFilterBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CalibrationPatternFilterBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CalibrationPatternFilterBase::getClassGroupId ) );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CalibrationPatternFilterBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CalibrationPatternFilterBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CalibrationPatternFilterBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CalibrationPatternFilterBase::getClassTypeId ) );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CalibrationPatternFilterBase::*getContainerSize_function_type )(  ) const;
            
            CalibrationPatternFilterBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CalibrationPatternFilterBase::getContainerSize ) );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getEnabled
        
            typedef bool ( ::OSG::CalibrationPatternFilterBase::*getEnabled_function_type )(  ) const;
            
            CalibrationPatternFilterBase_exposer.def( 
                "getEnabled"
                , getEnabled_function_type( &::OSG::CalibrationPatternFilterBase::getEnabled ) );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getSFEnabled
        
            typedef ::OSG::SFBool const * ( ::OSG::CalibrationPatternFilterBase::*getSFEnabled_function_type )(  ) const;
            
            CalibrationPatternFilterBase_exposer.def( 
                "getSFEnabled"
                , getSFEnabled_function_type( &::OSG::CalibrationPatternFilterBase::getSFEnabled )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CalibrationPatternFilterBase::*getType_function_type )(  ) ;
            
            CalibrationPatternFilterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CalibrationPatternFilterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CalibrationPatternFilterBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CalibrationPatternFilterBase::*getType_function_type )(  ) const;
            
            CalibrationPatternFilterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CalibrationPatternFilterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CalibrationPatternFilterBase::setEnabled
        
            typedef void ( ::OSG::CalibrationPatternFilterBase::*setEnabled_function_type )( bool const ) ;
            
            CalibrationPatternFilterBase_exposer.def( 
                "setEnabled"
                , setEnabled_function_type( &::OSG::CalibrationPatternFilterBase::setEnabled )
                , ( bp::arg("value") ) );
        
        }
        CalibrationPatternFilterBase_exposer.staticmethod( "getClassGroupId" );
        CalibrationPatternFilterBase_exposer.staticmethod( "getClassType" );
        CalibrationPatternFilterBase_exposer.staticmethod( "getClassTypeId" );
    }

}
