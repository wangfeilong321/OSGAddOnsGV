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
#include "VRMLPositionInterpolatorBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list VRMLPositionInterpolatorBase_getMFKeyValue(OSG::VRMLPositionInterpolatorBase *self)
{
   boost::python::list result;
   OSG::MFVec3f const * mf_data = self->getMFKeyValue();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_VRMLPositionInterpolatorBase_class(){

    { //::OSG::VRMLPositionInterpolatorBase
        typedef bp::class_< OSG::VRMLPositionInterpolatorBase, bp::bases< OSG::VRMLInterpolator >, boost::noncopyable > VRMLPositionInterpolatorBase_exposer_t;
        VRMLPositionInterpolatorBase_exposer_t VRMLPositionInterpolatorBase_exposer = VRMLPositionInterpolatorBase_exposer_t( "VRMLPositionInterpolatorBase", bp::no_init );
        bp::scope VRMLPositionInterpolatorBase_scope( VRMLPositionInterpolatorBase_exposer );
        bp::scope().attr("KeyValueFieldId") = (int)OSG::VRMLPositionInterpolatorBase::KeyValueFieldId;
        bp::scope().attr("OutValueFieldId") = (int)OSG::VRMLPositionInterpolatorBase::OutValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::VRMLPositionInterpolatorBase::NextFieldId;
        { //::OSG::VRMLPositionInterpolatorBase::copyFromBin
        
            typedef void ( ::OSG::VRMLPositionInterpolatorBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::VRMLPositionInterpolatorBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::copyToBin
        
            typedef void ( ::OSG::VRMLPositionInterpolatorBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::VRMLPositionInterpolatorBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::create
        
            typedef ::OSG::VRMLPositionInterpolatorTransitPtr ( *create_function_type )(  );
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::VRMLPositionInterpolatorBase::create ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::createDependent
        
            typedef ::OSG::VRMLPositionInterpolatorTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::VRMLPositionInterpolatorBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::createLocal
        
            typedef ::OSG::VRMLPositionInterpolatorTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::VRMLPositionInterpolatorBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::VRMLPositionInterpolatorBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::VRMLPositionInterpolatorBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::VRMLPositionInterpolatorBase::getClassGroupId ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::VRMLPositionInterpolatorBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::VRMLPositionInterpolatorBase::getClassTypeId ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::VRMLPositionInterpolatorBase::*getContainerSize_function_type )(  ) const;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::VRMLPositionInterpolatorBase::getContainerSize ) );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getKeyValue
        
            typedef ::OSG::Vec3f const & ( ::OSG::VRMLPositionInterpolatorBase::*getKeyValue_function_type )( ::OSG::UInt32 const ) const;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getKeyValue"
                , getKeyValue_function_type( &::OSG::VRMLPositionInterpolatorBase::getKeyValue )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getOutValue
        
            typedef ::OSG::Vec3f const & ( ::OSG::VRMLPositionInterpolatorBase::*getOutValue_function_type )(  ) const;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getOutValue"
                , getOutValue_function_type( &::OSG::VRMLPositionInterpolatorBase::getOutValue )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getSFOutValue
        
            typedef ::OSG::SFVec3f const * ( ::OSG::VRMLPositionInterpolatorBase::*getSFOutValue_function_type )(  ) const;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getSFOutValue"
                , getSFOutValue_function_type( &::OSG::VRMLPositionInterpolatorBase::getSFOutValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::VRMLPositionInterpolatorBase::*getType_function_type )(  ) ;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::VRMLPositionInterpolatorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::VRMLPositionInterpolatorBase::*getType_function_type )(  ) const;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::VRMLPositionInterpolatorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VRMLPositionInterpolatorBase::setOutValue
        
            typedef void ( ::OSG::VRMLPositionInterpolatorBase::*setOutValue_function_type )( ::OSG::Vec3f const & ) ;
            
            VRMLPositionInterpolatorBase_exposer.def( 
                "setOutValue"
                , setOutValue_function_type( &::OSG::VRMLPositionInterpolatorBase::setOutValue )
                , ( bp::arg("value") ) );
        
        }
        VRMLPositionInterpolatorBase_exposer.staticmethod( "create" );
        VRMLPositionInterpolatorBase_exposer.staticmethod( "createDependent" );
        VRMLPositionInterpolatorBase_exposer.staticmethod( "createLocal" );
        VRMLPositionInterpolatorBase_exposer.staticmethod( "getClassGroupId" );
        VRMLPositionInterpolatorBase_exposer.staticmethod( "getClassType" );
        VRMLPositionInterpolatorBase_exposer.staticmethod( "getClassTypeId" );
        VRMLPositionInterpolatorBase_exposer.def("getMFKeyValue",VRMLPositionInterpolatorBase_getMFKeyValue);
    }

}
