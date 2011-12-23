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
#include "AnimQuaternionBlenderBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct AnimQuaternionBlenderBase_wrapper : OSG::AnimQuaternionBlenderBase, bp::wrapper< OSG::AnimQuaternionBlenderBase > {

    virtual void frame( ::OSG::Time oTime, ::OSG::UInt32 uiFrame ){
        bp::override func_frame = this->get_override( "frame" );
        func_frame( oTime, uiFrame );
    }

};

boost::python::list AnimQuaternionBlenderBase_getMFChannels(OSG::AnimQuaternionBlenderBase *self)
{
   boost::python::list result;
   OSG::MFUnrecAnimQuaternionChannelPtr const * mf_data = self->getMFChannels();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::AnimQuaternionChannel::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_AnimQuaternionBlenderBase_class(){

    { //::OSG::AnimQuaternionBlenderBase
        typedef bp::class_< AnimQuaternionBlenderBase_wrapper, bp::bases< OSG::AnimBlender >, boost::noncopyable > AnimQuaternionBlenderBase_exposer_t;
        AnimQuaternionBlenderBase_exposer_t AnimQuaternionBlenderBase_exposer = AnimQuaternionBlenderBase_exposer_t( "AnimQuaternionBlenderBase", bp::no_init );
        bp::scope AnimQuaternionBlenderBase_scope( AnimQuaternionBlenderBase_exposer );
        bp::scope().attr("ChannelsFieldId") = (int)OSG::AnimQuaternionBlenderBase::ChannelsFieldId;
        bp::scope().attr("OutValueFieldId") = (int)OSG::AnimQuaternionBlenderBase::OutValueFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::AnimQuaternionBlenderBase::NextFieldId;
        { //::OSG::AnimQuaternionBlenderBase::assignChannels
        
            typedef void ( ::OSG::AnimQuaternionBlenderBase::*assignChannels_function_type )( ::OSG::MFUnrecAnimQuaternionChannelPtr const & ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "assignChannels"
                , assignChannels_function_type( &::OSG::AnimQuaternionBlenderBase::assignChannels )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::clearChannels
        
            typedef void ( ::OSG::AnimQuaternionBlenderBase::*clearChannels_function_type )(  ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "clearChannels"
                , clearChannels_function_type( &::OSG::AnimQuaternionBlenderBase::clearChannels ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::copyFromBin
        
            typedef void ( ::OSG::AnimQuaternionBlenderBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::AnimQuaternionBlenderBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::copyToBin
        
            typedef void ( ::OSG::AnimQuaternionBlenderBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::AnimQuaternionBlenderBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::create
        
            typedef ::OSG::AnimQuaternionBlenderTransitPtr ( *create_function_type )(  );
            
            AnimQuaternionBlenderBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::AnimQuaternionBlenderBase::create ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::createDependent
        
            typedef ::OSG::AnimQuaternionBlenderTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            AnimQuaternionBlenderBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::AnimQuaternionBlenderBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::createLocal
        
            typedef ::OSG::AnimQuaternionBlenderTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            AnimQuaternionBlenderBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::AnimQuaternionBlenderBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::AnimQuaternionBlenderBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::AnimQuaternionBlenderBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getChannels
        
            typedef ::OSG::AnimQuaternionChannel * ( ::OSG::AnimQuaternionBlenderBase::*getChannels_function_type )( ::OSG::UInt32 const ) const;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getChannels"
                , getChannels_function_type( &::OSG::AnimQuaternionBlenderBase::getChannels )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::AnimQuaternionBlenderBase::getClassGroupId ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::AnimQuaternionBlenderBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::AnimQuaternionBlenderBase::getClassTypeId ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::AnimQuaternionBlenderBase::*getContainerSize_function_type )(  ) const;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::AnimQuaternionBlenderBase::getContainerSize ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getOutValue
        
            typedef ::OSG::Quaternion const & ( ::OSG::AnimQuaternionBlenderBase::*getOutValue_function_type )(  ) const;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getOutValue"
                , getOutValue_function_type( &::OSG::AnimQuaternionBlenderBase::getOutValue )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getSFOutValue
        
            typedef ::OSG::SFQuaternion const * ( ::OSG::AnimQuaternionBlenderBase::*getSFOutValue_function_type )(  ) const;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getSFOutValue"
                , getSFOutValue_function_type( &::OSG::AnimQuaternionBlenderBase::getSFOutValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::AnimQuaternionBlenderBase::*getType_function_type )(  ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimQuaternionBlenderBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::AnimQuaternionBlenderBase::*getType_function_type )(  ) const;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AnimQuaternionBlenderBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::pushToChannels
        
            typedef void ( ::OSG::AnimQuaternionBlenderBase::*pushToChannels_function_type )( ::OSG::AnimQuaternionChannel * const ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "pushToChannels"
                , pushToChannels_function_type( &::OSG::AnimQuaternionBlenderBase::pushToChannels )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::removeFromChannels
        
            typedef void ( ::OSG::AnimQuaternionBlenderBase::*removeFromChannels_function_type )( ::OSG::UInt32 ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "removeFromChannels"
                , removeFromChannels_function_type( &::OSG::AnimQuaternionBlenderBase::removeFromChannels )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::removeObjFromChannels
        
            typedef void ( ::OSG::AnimQuaternionBlenderBase::*removeObjFromChannels_function_type )( ::OSG::AnimQuaternionChannel * const ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "removeObjFromChannels"
                , removeObjFromChannels_function_type( &::OSG::AnimQuaternionBlenderBase::removeObjFromChannels )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimQuaternionBlenderBase::setOutValue
        
            typedef void ( ::OSG::AnimQuaternionBlenderBase::*setOutValue_function_type )( ::OSG::Quaternion const & ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "setOutValue"
                , setOutValue_function_type( &::OSG::AnimQuaternionBlenderBase::setOutValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AnimBlender::addChannel
        
            typedef void ( ::OSG::AnimBlender::*addChannel_function_type )( ::OSG::AnimChannel * ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "addChannel"
                , addChannel_function_type( &::OSG::AnimBlender::addChannel )
                , ( bp::arg("channel") ) );
        
        }
        { //::OSG::AnimBlender::connectTo
        
            typedef void ( ::OSG::AnimBlender::*connectTo_function_type )( ::OSG::AttachmentContainer *,::std::string const & ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "connectTo"
                , connectTo_function_type( &::OSG::AnimBlender::connectTo )
                , ( bp::arg("container"), bp::arg("fieldName") ) );
        
        }
        { //::OSG::FrameTaskInterface::frame
        
            typedef void ( ::OSG::FrameTaskInterface::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "frame"
                , bp::pure_virtual( frame_function_type(&::OSG::FrameTaskInterface::frame) )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        { //::OSG::AnimBlender::subChannel
        
            typedef void ( ::OSG::AnimBlender::*subChannel_function_type )( ::OSG::AnimChannel * ) ;
            
            AnimQuaternionBlenderBase_exposer.def( 
                "subChannel"
                , subChannel_function_type( &::OSG::AnimBlender::subChannel )
                , ( bp::arg("channel") ) );
        
        }
        AnimQuaternionBlenderBase_exposer.staticmethod( "create" );
        AnimQuaternionBlenderBase_exposer.staticmethod( "createDependent" );
        AnimQuaternionBlenderBase_exposer.staticmethod( "createLocal" );
        AnimQuaternionBlenderBase_exposer.staticmethod( "getClassGroupId" );
        AnimQuaternionBlenderBase_exposer.staticmethod( "getClassType" );
        AnimQuaternionBlenderBase_exposer.staticmethod( "getClassTypeId" );
        AnimQuaternionBlenderBase_exposer.def("getMFChannels",AnimQuaternionBlenderBase_getMFChannels);
    }

}
