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
#include "AnimTargetAttachmentBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list AnimTargetAttachmentBase_getMFBlenders(OSG::AnimTargetAttachmentBase *self)
{
   boost::python::list result;
   OSG::MFUnrecAnimBlenderPtr const * mf_data = self->getMFBlenders();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::AnimBlender::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_AnimTargetAttachmentBase_class(){

    { //::OSG::AnimTargetAttachmentBase
        typedef bp::class_< OSG::AnimTargetAttachmentBase, bp::bases< ::OSG::Attachment >, boost::noncopyable > AnimTargetAttachmentBase_exposer_t;
        AnimTargetAttachmentBase_exposer_t AnimTargetAttachmentBase_exposer = AnimTargetAttachmentBase_exposer_t( "AnimTargetAttachmentBase", bp::no_init );
        bp::scope AnimTargetAttachmentBase_scope( AnimTargetAttachmentBase_exposer );
        bp::scope().attr("TargetIdFieldId") = (int)OSG::AnimTargetAttachmentBase::TargetIdFieldId;
        bp::scope().attr("BlendersFieldId") = (int)OSG::AnimTargetAttachmentBase::BlendersFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::AnimTargetAttachmentBase::NextFieldId;
        { //::OSG::AnimTargetAttachmentBase::assignBlenders
        
            typedef void ( ::OSG::AnimTargetAttachmentBase::*assignBlenders_function_type )( ::OSG::MFUnrecAnimBlenderPtr const & ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "assignBlenders"
                , assignBlenders_function_type( &::OSG::AnimTargetAttachmentBase::assignBlenders )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::clearBlenders
        
            typedef void ( ::OSG::AnimTargetAttachmentBase::*clearBlenders_function_type )(  ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "clearBlenders"
                , clearBlenders_function_type( &::OSG::AnimTargetAttachmentBase::clearBlenders ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::copyFromBin
        
            typedef void ( ::OSG::AnimTargetAttachmentBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::AnimTargetAttachmentBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::copyToBin
        
            typedef void ( ::OSG::AnimTargetAttachmentBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::AnimTargetAttachmentBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::create
        
            typedef ::OSG::AnimTargetAttachmentTransitPtr ( *create_function_type )(  );
            
            AnimTargetAttachmentBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::AnimTargetAttachmentBase::create ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::createDependent
        
            typedef ::OSG::AnimTargetAttachmentTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            AnimTargetAttachmentBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::AnimTargetAttachmentBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::createLocal
        
            typedef ::OSG::AnimTargetAttachmentTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            AnimTargetAttachmentBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::AnimTargetAttachmentBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::AnimTargetAttachmentBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::AnimTargetAttachmentBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getBlenders
        
            typedef ::OSG::AnimBlender * ( ::OSG::AnimTargetAttachmentBase::*getBlenders_function_type )( ::OSG::UInt32 const ) const;
            
            AnimTargetAttachmentBase_exposer.def( 
                "getBlenders"
                , getBlenders_function_type( &::OSG::AnimTargetAttachmentBase::getBlenders )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            AnimTargetAttachmentBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::AnimTargetAttachmentBase::getClassGroupId ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            AnimTargetAttachmentBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::AnimTargetAttachmentBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            AnimTargetAttachmentBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::AnimTargetAttachmentBase::getClassTypeId ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::AnimTargetAttachmentBase::*getContainerSize_function_type )(  ) const;
            
            AnimTargetAttachmentBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::AnimTargetAttachmentBase::getContainerSize ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getSFTargetId
        
            typedef ::OSG::SFString const * ( ::OSG::AnimTargetAttachmentBase::*getSFTargetId_function_type )(  ) const;
            
            AnimTargetAttachmentBase_exposer.def( 
                "getSFTargetId"
                , getSFTargetId_function_type( &::OSG::AnimTargetAttachmentBase::getSFTargetId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getTargetId
        
            typedef ::std::string const & ( ::OSG::AnimTargetAttachmentBase::*getTargetId_function_type )(  ) const;
            
            AnimTargetAttachmentBase_exposer.def( 
                "getTargetId"
                , getTargetId_function_type( &::OSG::AnimTargetAttachmentBase::getTargetId )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::AnimTargetAttachmentBase::*getType_function_type )(  ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimTargetAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTargetAttachmentBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::AnimTargetAttachmentBase::*getType_function_type )(  ) const;
            
            AnimTargetAttachmentBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimTargetAttachmentBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimTargetAttachmentBase::pushToBlenders
        
            typedef void ( ::OSG::AnimTargetAttachmentBase::*pushToBlenders_function_type )( ::OSG::AnimBlender * const ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "pushToBlenders"
                , pushToBlenders_function_type( &::OSG::AnimTargetAttachmentBase::pushToBlenders )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::removeFromBlenders
        
            typedef void ( ::OSG::AnimTargetAttachmentBase::*removeFromBlenders_function_type )( ::OSG::UInt32 ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "removeFromBlenders"
                , removeFromBlenders_function_type( &::OSG::AnimTargetAttachmentBase::removeFromBlenders )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::removeObjFromBlenders
        
            typedef void ( ::OSG::AnimTargetAttachmentBase::*removeObjFromBlenders_function_type )( ::OSG::AnimBlender * const ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "removeObjFromBlenders"
                , removeObjFromBlenders_function_type( &::OSG::AnimTargetAttachmentBase::removeObjFromBlenders )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimTargetAttachmentBase::setTargetId
        
            typedef void ( ::OSG::AnimTargetAttachmentBase::*setTargetId_function_type )( ::std::string const & ) ;
            
            AnimTargetAttachmentBase_exposer.def( 
                "setTargetId"
                , setTargetId_function_type( &::OSG::AnimTargetAttachmentBase::setTargetId )
                , ( bp::arg("value") ) );
        
        }
        AnimTargetAttachmentBase_exposer.staticmethod( "create" );
        AnimTargetAttachmentBase_exposer.staticmethod( "createDependent" );
        AnimTargetAttachmentBase_exposer.staticmethod( "createLocal" );
        AnimTargetAttachmentBase_exposer.staticmethod( "getClassGroupId" );
        AnimTargetAttachmentBase_exposer.staticmethod( "getClassType" );
        AnimTargetAttachmentBase_exposer.staticmethod( "getClassTypeId" );
        AnimTargetAttachmentBase_exposer.def("getMFBlenders",AnimTargetAttachmentBase_getMFBlenders);
    }

}
