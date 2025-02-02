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
#include "VRMLOrientationInterpolatorBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list VRMLOrientationInterpolatorBase_getMFKeyValue(OSG::VRMLOrientationInterpolatorBase *self)
{
   boost::python::list result;
   OSG::MFQuaternion const * mf_data = self->getMFKeyValue();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_VRMLOrientationInterpolatorBase_class(){

    { //::OSG::VRMLOrientationInterpolatorBase
        typedef bp::class_< OSG::VRMLOrientationInterpolatorBase, bp::bases< OSG::VRMLInterpolator >, boost::noncopyable > VRMLOrientationInterpolatorBase_exposer_t;
        VRMLOrientationInterpolatorBase_exposer_t VRMLOrientationInterpolatorBase_exposer = VRMLOrientationInterpolatorBase_exposer_t( "VRMLOrientationInterpolatorBase", bp::no_init );
        bp::scope VRMLOrientationInterpolatorBase_scope( VRMLOrientationInterpolatorBase_exposer );
        bp::scope().attr("KeyValueFieldId") = (int)OSG::VRMLOrientationInterpolatorBase::KeyValueFieldId;
        bp::scope().attr("OutValueFieldId") = (int)OSG::VRMLOrientationInterpolatorBase::OutValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::VRMLOrientationInterpolatorBase::NextFieldId;
        { //::OSG::VRMLOrientationInterpolatorBase::copyFromBin
        
            typedef void ( ::OSG::VRMLOrientationInterpolatorBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::VRMLOrientationInterpolatorBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::copyToBin
        
            typedef void ( ::OSG::VRMLOrientationInterpolatorBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::VRMLOrientationInterpolatorBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::create
        
            typedef ::OSG::VRMLOrientationInterpolatorTransitPtr ( *create_function_type )(  );
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::VRMLOrientationInterpolatorBase::create ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::createDependent
        
            typedef ::OSG::VRMLOrientationInterpolatorTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::VRMLOrientationInterpolatorBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::createLocal
        
            typedef ::OSG::VRMLOrientationInterpolatorTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::VRMLOrientationInterpolatorBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::VRMLOrientationInterpolatorBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::VRMLOrientationInterpolatorBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::VRMLOrientationInterpolatorBase::getClassGroupId ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::VRMLOrientationInterpolatorBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::VRMLOrientationInterpolatorBase::getClassTypeId ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::VRMLOrientationInterpolatorBase::*getContainerSize_function_type )(  ) const;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::VRMLOrientationInterpolatorBase::getContainerSize ) );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getKeyValue
        
            typedef ::OSG::Quaternion const & ( ::OSG::VRMLOrientationInterpolatorBase::*getKeyValue_function_type )( ::OSG::UInt32 const ) const;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getKeyValue"
                , getKeyValue_function_type( &::OSG::VRMLOrientationInterpolatorBase::getKeyValue )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getOutValue
        
            typedef ::OSG::Quaternion const & ( ::OSG::VRMLOrientationInterpolatorBase::*getOutValue_function_type )(  ) const;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getOutValue"
                , getOutValue_function_type( &::OSG::VRMLOrientationInterpolatorBase::getOutValue )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getSFOutValue
        
            typedef ::OSG::SFQuaternion const * ( ::OSG::VRMLOrientationInterpolatorBase::*getSFOutValue_function_type )(  ) const;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getSFOutValue"
                , getSFOutValue_function_type( &::OSG::VRMLOrientationInterpolatorBase::getSFOutValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::VRMLOrientationInterpolatorBase::*getType_function_type )(  ) ;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::VRMLOrientationInterpolatorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::VRMLOrientationInterpolatorBase::*getType_function_type )(  ) const;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::VRMLOrientationInterpolatorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLOrientationInterpolatorBase::setOutValue
        
            typedef void ( ::OSG::VRMLOrientationInterpolatorBase::*setOutValue_function_type )( ::OSG::Quaternion const & ) ;
            
            VRMLOrientationInterpolatorBase_exposer.def( 
                "setOutValue"
                , setOutValue_function_type( &::OSG::VRMLOrientationInterpolatorBase::setOutValue )
                , ( bp::arg("value") ) );
        
        }
        VRMLOrientationInterpolatorBase_exposer.staticmethod( "create" );
        VRMLOrientationInterpolatorBase_exposer.staticmethod( "createDependent" );
        VRMLOrientationInterpolatorBase_exposer.staticmethod( "createLocal" );
        VRMLOrientationInterpolatorBase_exposer.staticmethod( "getClassGroupId" );
        VRMLOrientationInterpolatorBase_exposer.staticmethod( "getClassType" );
        VRMLOrientationInterpolatorBase_exposer.staticmethod( "getClassTypeId" );
        VRMLOrientationInterpolatorBase_exposer.def("getMFKeyValue",VRMLOrientationInterpolatorBase_getMFKeyValue);
    }

}
