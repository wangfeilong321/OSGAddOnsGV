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
#include "AnimQuaternionDataSourceBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list AnimQuaternionDataSourceBase_getMFValues(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFQuaternion const * mf_data = self->getMFValues();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list AnimQuaternionDataSourceBase_getMFInTangentsX(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFInTangentsX();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list AnimQuaternionDataSourceBase_getMFInTangentsY(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFInTangentsY();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list AnimQuaternionDataSourceBase_getMFInTangentsZ(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFInTangentsZ();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list AnimQuaternionDataSourceBase_getMFInTangentsW(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFInTangentsW();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list AnimQuaternionDataSourceBase_getMFOutTangentsX(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFOutTangentsX();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list AnimQuaternionDataSourceBase_getMFOutTangentsY(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFOutTangentsY();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list AnimQuaternionDataSourceBase_getMFOutTangentsZ(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFOutTangentsZ();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list AnimQuaternionDataSourceBase_getMFOutTangentsW(OSG::AnimQuaternionDataSourceBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFOutTangentsW();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_AnimQuaternionDataSourceBase_class(){

    { //::OSG::AnimQuaternionDataSourceBase
        typedef bp::class_< OSG::AnimQuaternionDataSourceBase, bp::bases< OSG::AnimKeyFrameDataSource >, boost::noncopyable > AnimQuaternionDataSourceBase_exposer_t;
        AnimQuaternionDataSourceBase_exposer_t AnimQuaternionDataSourceBase_exposer = AnimQuaternionDataSourceBase_exposer_t( "AnimQuaternionDataSourceBase", bp::no_init );
        bp::scope AnimQuaternionDataSourceBase_scope( AnimQuaternionDataSourceBase_exposer );
        bp::scope().attr("ValuesFieldId") = (int)OSG::AnimQuaternionDataSourceBase::ValuesFieldId;
        bp::scope().attr("InTangentsXFieldId") = (int)OSG::AnimQuaternionDataSourceBase::InTangentsXFieldId;
        bp::scope().attr("InTangentsYFieldId") = (int)OSG::AnimQuaternionDataSourceBase::InTangentsYFieldId;
        bp::scope().attr("InTangentsZFieldId") = (int)OSG::AnimQuaternionDataSourceBase::InTangentsZFieldId;
        bp::scope().attr("InTangentsWFieldId") = (int)OSG::AnimQuaternionDataSourceBase::InTangentsWFieldId;
        bp::scope().attr("OutTangentsXFieldId") = (int)OSG::AnimQuaternionDataSourceBase::OutTangentsXFieldId;
        bp::scope().attr("OutTangentsYFieldId") = (int)OSG::AnimQuaternionDataSourceBase::OutTangentsYFieldId;
        bp::scope().attr("OutTangentsZFieldId") = (int)OSG::AnimQuaternionDataSourceBase::OutTangentsZFieldId;
        bp::scope().attr("OutTangentsWFieldId") = (int)OSG::AnimQuaternionDataSourceBase::OutTangentsWFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::AnimQuaternionDataSourceBase::NextFieldId;
        { //::OSG::AnimQuaternionDataSourceBase::copyFromBin
        
            typedef void ( ::OSG::AnimQuaternionDataSourceBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::AnimQuaternionDataSourceBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::copyToBin
        
            typedef void ( ::OSG::AnimQuaternionDataSourceBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::AnimQuaternionDataSourceBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::create
        
            typedef ::OSG::AnimQuaternionDataSourceTransitPtr ( *create_function_type )(  );
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::AnimQuaternionDataSourceBase::create ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::createDependent
        
            typedef ::OSG::AnimQuaternionDataSourceTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::AnimQuaternionDataSourceBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::createLocal
        
            typedef ::OSG::AnimQuaternionDataSourceTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::AnimQuaternionDataSourceBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::AnimQuaternionDataSourceBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::AnimQuaternionDataSourceBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::AnimQuaternionDataSourceBase::getClassGroupId ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::AnimQuaternionDataSourceBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::AnimQuaternionDataSourceBase::getClassTypeId ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::AnimQuaternionDataSourceBase::*getContainerSize_function_type )(  ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::AnimQuaternionDataSourceBase::getContainerSize ) );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getInTangentsW
        
            typedef ::OSG::Vec2f const & ( ::OSG::AnimQuaternionDataSourceBase::*getInTangentsW_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getInTangentsW"
                , getInTangentsW_function_type( &::OSG::AnimQuaternionDataSourceBase::getInTangentsW )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getInTangentsX
        
            typedef ::OSG::Vec2f const & ( ::OSG::AnimQuaternionDataSourceBase::*getInTangentsX_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getInTangentsX"
                , getInTangentsX_function_type( &::OSG::AnimQuaternionDataSourceBase::getInTangentsX )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getInTangentsY
        
            typedef ::OSG::Vec2f const & ( ::OSG::AnimQuaternionDataSourceBase::*getInTangentsY_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getInTangentsY"
                , getInTangentsY_function_type( &::OSG::AnimQuaternionDataSourceBase::getInTangentsY )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getInTangentsZ
        
            typedef ::OSG::Vec2f const & ( ::OSG::AnimQuaternionDataSourceBase::*getInTangentsZ_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getInTangentsZ"
                , getInTangentsZ_function_type( &::OSG::AnimQuaternionDataSourceBase::getInTangentsZ )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getOutTangentsW
        
            typedef ::OSG::Vec2f const & ( ::OSG::AnimQuaternionDataSourceBase::*getOutTangentsW_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getOutTangentsW"
                , getOutTangentsW_function_type( &::OSG::AnimQuaternionDataSourceBase::getOutTangentsW )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getOutTangentsX
        
            typedef ::OSG::Vec2f const & ( ::OSG::AnimQuaternionDataSourceBase::*getOutTangentsX_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getOutTangentsX"
                , getOutTangentsX_function_type( &::OSG::AnimQuaternionDataSourceBase::getOutTangentsX )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getOutTangentsY
        
            typedef ::OSG::Vec2f const & ( ::OSG::AnimQuaternionDataSourceBase::*getOutTangentsY_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getOutTangentsY"
                , getOutTangentsY_function_type( &::OSG::AnimQuaternionDataSourceBase::getOutTangentsY )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getOutTangentsZ
        
            typedef ::OSG::Vec2f const & ( ::OSG::AnimQuaternionDataSourceBase::*getOutTangentsZ_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getOutTangentsZ"
                , getOutTangentsZ_function_type( &::OSG::AnimQuaternionDataSourceBase::getOutTangentsZ )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::AnimQuaternionDataSourceBase::*getType_function_type )(  ) ;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimQuaternionDataSourceBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::AnimQuaternionDataSourceBase::*getType_function_type )(  ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimQuaternionDataSourceBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimQuaternionDataSourceBase::getValues
        
            typedef ::OSG::Quaternion const & ( ::OSG::AnimQuaternionDataSourceBase::*getValues_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionDataSourceBase_exposer.def( 
                "getValues"
                , getValues_function_type( &::OSG::AnimQuaternionDataSourceBase::getValues )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        AnimQuaternionDataSourceBase_exposer.staticmethod( "create" );
        AnimQuaternionDataSourceBase_exposer.staticmethod( "createDependent" );
        AnimQuaternionDataSourceBase_exposer.staticmethod( "createLocal" );
        AnimQuaternionDataSourceBase_exposer.staticmethod( "getClassGroupId" );
        AnimQuaternionDataSourceBase_exposer.staticmethod( "getClassType" );
        AnimQuaternionDataSourceBase_exposer.staticmethod( "getClassTypeId" );
        AnimQuaternionDataSourceBase_exposer.def("getMFValues",AnimQuaternionDataSourceBase_getMFValues);
        AnimQuaternionDataSourceBase_exposer.def("getMFInTangentsX",AnimQuaternionDataSourceBase_getMFInTangentsX);
        AnimQuaternionDataSourceBase_exposer.def("getMFInTangentsY",AnimQuaternionDataSourceBase_getMFInTangentsY);
        AnimQuaternionDataSourceBase_exposer.def("getMFInTangentsZ",AnimQuaternionDataSourceBase_getMFInTangentsZ);
        AnimQuaternionDataSourceBase_exposer.def("getMFInTangentsW",AnimQuaternionDataSourceBase_getMFInTangentsW);
        AnimQuaternionDataSourceBase_exposer.def("getMFOutTangentsX",AnimQuaternionDataSourceBase_getMFOutTangentsX);
        AnimQuaternionDataSourceBase_exposer.def("getMFOutTangentsY",AnimQuaternionDataSourceBase_getMFOutTangentsY);
        AnimQuaternionDataSourceBase_exposer.def("getMFOutTangentsZ",AnimQuaternionDataSourceBase_getMFOutTangentsZ);
        AnimQuaternionDataSourceBase_exposer.def("getMFOutTangentsW",AnimQuaternionDataSourceBase_getMFOutTangentsW);
    }

}
