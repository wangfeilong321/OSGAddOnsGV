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
#include "RenderAction.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

OSG::ActionBase::ResultE invokeCallback(bp::object obj,
                                        OSG::NodeCore* const core,
                                        OSG::Action* action)
{
   OSG::NodeCoreRecPtr core_ptr(core);
   return bp::extract<OSG::ActionBase::ResultE>(obj(core_ptr, action));
}

}

namespace
{

void wrapRegisterEnterDefault(const OSG::FieldContainerType& type,
                              bp::object func)
{
   OSG::RenderAction::registerEnterDefault(type, boost::bind(invokeCallback, func, _1, _2));
}

void wrapRegisterLeaveDefault(const OSG::FieldContainerType& type,
                              bp::object func)
{
   OSG::RenderAction::registerLeaveDefault(type, boost::bind(invokeCallback, func, _1, _2));
}

}

namespace
{

OSG::ActionBase::ResultE wrapApply(OSG::RenderAction* self, bp::list nodes)
{
   const int num_nodes(bp::extract<int>(nodes.attr("__len__")()));
   std::vector<OSG::Node*> node_vec(num_nodes);

   for ( int i = 0; i < num_nodes; ++i )
   {
      OSG::NodeRecPtr n = bp::extract<OSG::NodeRecPtr>(nodes[i]);
      node_vec[i] = n.get();
   }

   return self->apply(node_vec.begin(), node_vec.end());
}

}

void register_RenderAction_class(){

    { //::OSG::RenderAction
        typedef bp::class_< OSG::RenderAction, bp::bases< OSG::RenderActionBase >, boost::noncopyable > RenderAction_exposer_t;
        RenderAction_exposer_t RenderAction_exposer = RenderAction_exposer_t( "RenderAction", bp::no_init );
        bp::scope RenderAction_scope( RenderAction_exposer );
        { //::OSG::RenderAction::addOverride
        
            typedef void ( ::OSG::RenderAction::*addOverride_function_type )( ::OSG::UInt32,::OSG::StateChunk * ) ;
            
            RenderAction_exposer.def( 
                "addOverride"
                , addOverride_function_type( &::OSG::RenderAction::addOverride )
                , ( bp::arg("uiSlot"), bp::arg("pChunk") ) );
        
        }
        { //::OSG::RenderAction::addPassMask
        
            typedef void ( ::OSG::RenderAction::*addPassMask_function_type )( ::OSG::BitVector ) ;
            
            RenderAction_exposer.def( 
                "addPassMask"
                , addPassMask_function_type( &::OSG::RenderAction::addPassMask )
                , ( bp::arg("bvMask") ) );
        
        }
        { //::OSG::RenderAction::allocateLightIndex
        
            typedef ::OSG::Int32 ( ::OSG::RenderAction::*allocateLightIndex_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "allocateLightIndex"
                , allocateLightIndex_function_type( &::OSG::RenderAction::allocateLightIndex ) );
        
        }
        { //::OSG::RenderAction::create
        
            typedef ::OSG::TransitPtr< OSG::RenderAction > ( *create_function_type )(  );
            
            RenderAction_exposer.def( 
                "create"
                , create_function_type( &::OSG::RenderAction::create ) );
        
        }
        { //::OSG::RenderAction::disableDefaultPartition
        
            typedef void ( ::OSG::RenderAction::*disableDefaultPartition_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "disableDefaultPartition"
                , disableDefaultPartition_function_type( &::OSG::RenderAction::disableDefaultPartition ) );
        
        }
        { //::OSG::RenderAction::drawBuffer
        
            typedef void ( ::OSG::RenderAction::*drawBuffer_function_type )( ::OSG::UInt32 ) ;
            
            RenderAction_exposer.def( 
                "drawBuffer"
                , drawBuffer_function_type( &::OSG::RenderAction::drawBuffer )
                , ( bp::arg("buf") ) );
        
        }
        { //::OSG::RenderAction::dumpPartitionList
        
            typedef void ( ::OSG::RenderAction::*dumpPartitionList_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "dumpPartitionList"
                , dumpPartitionList_function_type( &::OSG::RenderAction::dumpPartitionList ) );
        
        }
        { //::OSG::RenderAction::frameInit
        
            typedef void ( ::OSG::RenderAction::*frameInit_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "frameInit"
                , frameInit_function_type( &::OSG::RenderAction::frameInit ) );
        
        }
        { //::OSG::RenderAction::getActivePartition
        
            typedef ::OSG::RenderPartition * ( ::OSG::RenderAction::*getActivePartition_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getActivePartition"
                , getActivePartition_function_type( &::OSG::RenderAction::getActivePartition )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderAction::getActivePartitionIdx
        
            typedef ::OSG::Int32 ( ::OSG::RenderAction::*getActivePartitionIdx_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getActivePartitionIdx"
                , getActivePartitionIdx_function_type( &::OSG::RenderAction::getActivePartitionIdx ) );
        
        }
        { //::OSG::RenderAction::getCurrentBuffer
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getCurrentBuffer_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getCurrentBuffer"
                , getCurrentBuffer_function_type( &::OSG::RenderAction::getCurrentBuffer ) );
        
        }
        { //::OSG::RenderAction::getCurrentOverrides
        
            typedef ::OSG::StateOverride const * ( ::OSG::RenderAction::*getCurrentOverrides_function_type )(  ) const;
            
            RenderAction_exposer.def( 
                "getCurrentOverrides"
                , getCurrentOverrides_function_type( &::OSG::RenderAction::getCurrentOverrides )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::RenderAction::getDoCullOnly
        
            typedef bool ( ::OSG::RenderAction::*getDoCullOnly_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getDoCullOnly"
                , getDoCullOnly_function_type( &::OSG::RenderAction::getDoCullOnly ) );
        
        }
        { //::OSG::RenderAction::getLastPartitionIdx
        
            typedef ::OSG::Int32 ( ::OSG::RenderAction::*getLastPartitionIdx_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getLastPartitionIdx"
                , getLastPartitionIdx_function_type( &::OSG::RenderAction::getLastPartitionIdx ) );
        
        }
        { //::OSG::RenderAction::getLightState
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getLightState_function_type )(  ) const;
            
            RenderAction_exposer.def( 
                "getLightState"
                , getLightState_function_type( &::OSG::RenderAction::getLightState ) );
        
        }
        { //::OSG::RenderAction::getMaterial
        
            typedef ::OSG::Material * ( ::OSG::RenderAction::*getMaterial_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getMaterial"
                , getMaterial_function_type( &::OSG::RenderAction::getMaterial )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderAction::getNumBuffers
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getNumBuffers_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getNumBuffers"
                , getNumBuffers_function_type( &::OSG::RenderAction::getNumBuffers ) );
        
        }
        { //::OSG::RenderAction::getOcclusionCulledDebugMask
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getOcclusionCulledDebugMask_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionCulledDebugMask"
                , getOcclusionCulledDebugMask_function_type( &::OSG::RenderAction::getOcclusionCulledDebugMask ) );
        
        }
        { //::OSG::RenderAction::getOcclusionCulling
        
            typedef bool ( ::OSG::RenderAction::*getOcclusionCulling_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionCulling"
                , getOcclusionCulling_function_type( &::OSG::RenderAction::getOcclusionCulling ) );
        
        }
        { //::OSG::RenderAction::getOcclusionCullingCoveredThreshold
        
            typedef ::OSG::Real32 ( ::OSG::RenderAction::*getOcclusionCullingCoveredThreshold_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionCullingCoveredThreshold"
                , getOcclusionCullingCoveredThreshold_function_type( &::OSG::RenderAction::getOcclusionCullingCoveredThreshold ) );
        
        }
        { //::OSG::RenderAction::getOcclusionCullingDebug
        
            typedef bool ( ::OSG::RenderAction::*getOcclusionCullingDebug_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionCullingDebug"
                , getOcclusionCullingDebug_function_type( &::OSG::RenderAction::getOcclusionCullingDebug ) );
        
        }
        { //::OSG::RenderAction::getOcclusionCullingMinimumFeatureSize
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getOcclusionCullingMinimumFeatureSize_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionCullingMinimumFeatureSize"
                , getOcclusionCullingMinimumFeatureSize_function_type( &::OSG::RenderAction::getOcclusionCullingMinimumFeatureSize ) );
        
        }
        { //::OSG::RenderAction::getOcclusionCullingMinimumTriangleCount
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getOcclusionCullingMinimumTriangleCount_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionCullingMinimumTriangleCount"
                , getOcclusionCullingMinimumTriangleCount_function_type( &::OSG::RenderAction::getOcclusionCullingMinimumTriangleCount ) );
        
        }
        { //::OSG::RenderAction::getOcclusionCullingQueryBufferSize
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getOcclusionCullingQueryBufferSize_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionCullingQueryBufferSize"
                , getOcclusionCullingQueryBufferSize_function_type( &::OSG::RenderAction::getOcclusionCullingQueryBufferSize ) );
        
        }
        { //::OSG::RenderAction::getOcclusionCullingVisibilityThreshold
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getOcclusionCullingVisibilityThreshold_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionCullingVisibilityThreshold"
                , getOcclusionCullingVisibilityThreshold_function_type( &::OSG::RenderAction::getOcclusionCullingVisibilityThreshold ) );
        
        }
        { //::OSG::RenderAction::getOcclusionTestedDebugMask
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getOcclusionTestedDebugMask_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionTestedDebugMask"
                , getOcclusionTestedDebugMask_function_type( &::OSG::RenderAction::getOcclusionTestedDebugMask ) );
        
        }
        { //::OSG::RenderAction::getOcclusionVisibleDebugMask
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getOcclusionVisibleDebugMask_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getOcclusionVisibleDebugMask"
                , getOcclusionVisibleDebugMask_function_type( &::OSG::RenderAction::getOcclusionVisibleDebugMask ) );
        
        }
        { //::OSG::RenderAction::getPassMask
        
            typedef ::OSG::BitVector ( ::OSG::RenderAction::*getPassMask_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getPassMask"
                , getPassMask_function_type( &::OSG::RenderAction::getPassMask ) );
        
        }
        { //::OSG::RenderAction::getPrototype
        
            typedef ::OSG::RenderAction * ( *getPrototype_function_type )(  );
            
            RenderAction_exposer.def( 
                "getPrototype"
                , getPrototype_function_type( &::OSG::RenderAction::getPrototype )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RenderAction::getScreenLODCoverageThreshold
        
            typedef ::OSG::Real32 ( ::OSG::RenderAction::*getScreenLODCoverageThreshold_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getScreenLODCoverageThreshold"
                , getScreenLODCoverageThreshold_function_type( &::OSG::RenderAction::getScreenLODCoverageThreshold ) );
        
        }
        { //::OSG::RenderAction::getScreenLODDegradationFactor
        
            typedef ::OSG::Real32 ( ::OSG::RenderAction::*getScreenLODDegradationFactor_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getScreenLODDegradationFactor"
                , getScreenLODDegradationFactor_function_type( &::OSG::RenderAction::getScreenLODDegradationFactor ) );
        
        }
        { //::OSG::RenderAction::getScreenLODNumLevels
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*getScreenLODNumLevels_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "getScreenLODNumLevels"
                , getScreenLODNumLevels_function_type( &::OSG::RenderAction::getScreenLODNumLevels ) );
        
        }
        { //::OSG::RenderAction::isVisible
        
            typedef bool ( ::OSG::RenderAction::*isVisible_function_type )( ::OSG::Node * ) ;
            
            RenderAction_exposer.def( 
                "isVisible"
                , isVisible_function_type( &::OSG::RenderAction::isVisible )
                , ( bp::arg("node") ) );
        
        }
        { //::OSG::RenderAction::overrideMaterial
        
            typedef void ( ::OSG::RenderAction::*overrideMaterial_function_type )( ::OSG::Material *,::OSG::Node * const ) ;
            
            RenderAction_exposer.def( 
                "overrideMaterial"
                , overrideMaterial_function_type( &::OSG::RenderAction::overrideMaterial )
                , ( bp::arg("pMaterial"), bp::arg("pNode") ) );
        
        }
        { //::OSG::RenderAction::popMatrix
        
            typedef void ( ::OSG::RenderAction::*popMatrix_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "popMatrix"
                , popMatrix_function_type( &::OSG::RenderAction::popMatrix ) );
        
        }
        { //::OSG::RenderAction::popState
        
            typedef void ( ::OSG::RenderAction::*popState_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "popState"
                , popState_function_type( &::OSG::RenderAction::popState ) );
        
        }
        { //::OSG::RenderAction::popVisibility
        
            typedef void ( ::OSG::RenderAction::*popVisibility_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "popVisibility"
                , popVisibility_function_type( &::OSG::RenderAction::popVisibility ) );
        
        }
        { //::OSG::RenderAction::pushState
        
            typedef void ( ::OSG::RenderAction::*pushState_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "pushState"
                , pushState_function_type( &::OSG::RenderAction::pushState ) );
        
        }
        { //::OSG::RenderAction::pushVisibility
        
            typedef bool ( ::OSG::RenderAction::*pushVisibility_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "pushVisibility"
                , pushVisibility_function_type( &::OSG::RenderAction::pushVisibility ) );
        
        }
        { //::OSG::RenderAction::readdPartitionByIndex
        
            typedef void ( ::OSG::RenderAction::*readdPartitionByIndex_function_type )( ::OSG::UInt32 ) ;
            
            RenderAction_exposer.def( 
                "readdPartitionByIndex"
                , readdPartitionByIndex_function_type( &::OSG::RenderAction::readdPartitionByIndex )
                , ( bp::arg("uiPartIdx") ) );
        
        }
        { //::OSG::RenderAction::releaseLightIndex
        
            typedef void ( ::OSG::RenderAction::*releaseLightIndex_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "releaseLightIndex"
                , releaseLightIndex_function_type( &::OSG::RenderAction::releaseLightIndex ) );
        
        }
        { //::OSG::RenderAction::selectVisibles
        
            typedef ::OSG::UInt32 ( ::OSG::RenderAction::*selectVisibles_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "selectVisibles"
                , selectVisibles_function_type( &::OSG::RenderAction::selectVisibles ) );
        
        }
        { //::OSG::RenderAction::setCurrentBuffer
        
            typedef void ( ::OSG::RenderAction::*setCurrentBuffer_function_type )( ::OSG::UInt32 ) ;
            
            RenderAction_exposer.def( 
                "setCurrentBuffer"
                , setCurrentBuffer_function_type( &::OSG::RenderAction::setCurrentBuffer )
                , ( bp::arg("b") ) );
        
        }
        { //::OSG::RenderAction::setDoCullOnly
        
            typedef void ( ::OSG::RenderAction::*setDoCullOnly_function_type )( bool ) ;
            
            RenderAction_exposer.def( 
                "setDoCullOnly"
                , setDoCullOnly_function_type( &::OSG::RenderAction::setDoCullOnly )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::RenderAction::setFrustumCulling
        
            typedef void ( ::OSG::RenderAction::*setFrustumCulling_function_type )( bool ) ;
            
            RenderAction_exposer.def( 
                "setFrustumCulling"
                , setFrustumCulling_function_type( &::OSG::RenderAction::setFrustumCulling )
                , ( bp::arg("val")=(bool)(true) ) );
        
        }
        { //::OSG::RenderAction::setKeyGen
        
            typedef void ( ::OSG::RenderAction::*setKeyGen_function_type )( ::OSG::UInt32 ) ;
            
            RenderAction_exposer.def( 
                "setKeyGen"
                , setKeyGen_function_type( &::OSG::RenderAction::setKeyGen )
                , ( bp::arg("uiKeyGen") ) );
        
        }
        { //::OSG::RenderAction::setNumBuffers
        
            typedef void ( ::OSG::RenderAction::*setNumBuffers_function_type )( ::OSG::UInt32 ) ;
            
            RenderAction_exposer.def( 
                "setNumBuffers"
                , setNumBuffers_function_type( &::OSG::RenderAction::setNumBuffers )
                , ( bp::arg("n") ) );
        
        }
        { //::OSG::RenderAction::setOcclusionCulling
        
            typedef void ( ::OSG::RenderAction::*setOcclusionCulling_function_type )( bool const ) ;
            
            RenderAction_exposer.def( 
                "setOcclusionCulling"
                , setOcclusionCulling_function_type( &::OSG::RenderAction::setOcclusionCulling )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::RenderAction::setOcclusionCullingCoveredThreshold
        
            typedef void ( ::OSG::RenderAction::*setOcclusionCullingCoveredThreshold_function_type )( ::OSG::Real32 const ) ;
            
            RenderAction_exposer.def( 
                "setOcclusionCullingCoveredThreshold"
                , setOcclusionCullingCoveredThreshold_function_type( &::OSG::RenderAction::setOcclusionCullingCoveredThreshold )
                , ( bp::arg("percent") ) );
        
        }
        { //::OSG::RenderAction::setOcclusionCullingDebug
        
            typedef void ( ::OSG::RenderAction::*setOcclusionCullingDebug_function_type )( bool const ) ;
            
            RenderAction_exposer.def( 
                "setOcclusionCullingDebug"
                , setOcclusionCullingDebug_function_type( &::OSG::RenderAction::setOcclusionCullingDebug )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::RenderAction::setOcclusionCullingMinimumFeatureSize
        
            typedef void ( ::OSG::RenderAction::*setOcclusionCullingMinimumFeatureSize_function_type )( ::OSG::UInt32 const ) ;
            
            RenderAction_exposer.def( 
                "setOcclusionCullingMinimumFeatureSize"
                , setOcclusionCullingMinimumFeatureSize_function_type( &::OSG::RenderAction::setOcclusionCullingMinimumFeatureSize )
                , ( bp::arg("pixels") ) );
        
        }
        { //::OSG::RenderAction::setOcclusionCullingMinimumTriangleCount
        
            typedef void ( ::OSG::RenderAction::*setOcclusionCullingMinimumTriangleCount_function_type )( ::OSG::UInt32 const ) ;
            
            RenderAction_exposer.def( 
                "setOcclusionCullingMinimumTriangleCount"
                , setOcclusionCullingMinimumTriangleCount_function_type( &::OSG::RenderAction::setOcclusionCullingMinimumTriangleCount )
                , ( bp::arg("count") ) );
        
        }
        { //::OSG::RenderAction::setOcclusionCullingQueryBufferSize
        
            typedef void ( ::OSG::RenderAction::*setOcclusionCullingQueryBufferSize_function_type )( ::OSG::UInt32 const ) ;
            
            RenderAction_exposer.def( 
                "setOcclusionCullingQueryBufferSize"
                , setOcclusionCullingQueryBufferSize_function_type( &::OSG::RenderAction::setOcclusionCullingQueryBufferSize )
                , ( bp::arg("size") ) );
        
        }
        { //::OSG::RenderAction::setOcclusionCullingVisibilityThreshold
        
            typedef void ( ::OSG::RenderAction::*setOcclusionCullingVisibilityThreshold_function_type )( ::OSG::UInt32 const ) ;
            
            RenderAction_exposer.def( 
                "setOcclusionCullingVisibilityThreshold"
                , setOcclusionCullingVisibilityThreshold_function_type( &::OSG::RenderAction::setOcclusionCullingVisibilityThreshold )
                , ( bp::arg("pixels") ) );
        
        }
        { //::OSG::RenderAction::setOcclusionDebugMasks
        
            typedef void ( ::OSG::RenderAction::*setOcclusionDebugMasks_function_type )( ::OSG::UInt32 const,::OSG::UInt32 const,::OSG::UInt32 const ) ;
            
            RenderAction_exposer.def( 
                "setOcclusionDebugMasks"
                , setOcclusionDebugMasks_function_type( &::OSG::RenderAction::setOcclusionDebugMasks )
                , ( bp::arg("tested"), bp::arg("culled"), bp::arg("visible") ) );
        
        }
        { //::OSG::RenderAction::setPrototype
        
            typedef void ( *setPrototype_function_type )( ::OSG::RenderAction * );
            
            RenderAction_exposer.def( 
                "setPrototype"
                , setPrototype_function_type( &::OSG::RenderAction::setPrototype )
                , ( bp::arg("pPrototype") ) );
        
        }
        { //::OSG::RenderAction::setScreenLODCoverageThreshold
        
            typedef void ( ::OSG::RenderAction::*setScreenLODCoverageThreshold_function_type )( ::OSG::Real32 const ) ;
            
            RenderAction_exposer.def( 
                "setScreenLODCoverageThreshold"
                , setScreenLODCoverageThreshold_function_type( &::OSG::RenderAction::setScreenLODCoverageThreshold )
                , ( bp::arg("percent") ) );
        
        }
        { //::OSG::RenderAction::setScreenLODDegradationFactor
        
            typedef void ( ::OSG::RenderAction::*setScreenLODDegradationFactor_function_type )( ::OSG::Real32 const ) ;
            
            RenderAction_exposer.def( 
                "setScreenLODDegradationFactor"
                , setScreenLODDegradationFactor_function_type( &::OSG::RenderAction::setScreenLODDegradationFactor )
                , ( bp::arg("percent") ) );
        
        }
        { //::OSG::RenderAction::setScreenLODNumLevels
        
            typedef void ( ::OSG::RenderAction::*setScreenLODNumLevels_function_type )( ::OSG::UInt32 const ) ;
            
            RenderAction_exposer.def( 
                "setScreenLODNumLevels"
                , setScreenLODNumLevels_function_type( &::OSG::RenderAction::setScreenLODNumLevels )
                , ( bp::arg("levels") ) );
        
        }
        { //::OSG::RenderAction::start
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::RenderAction::*start_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "start"
                , start_function_type( &::OSG::RenderAction::start ) );
        
        }
        { //::OSG::RenderAction::stop
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::RenderAction::*stop_function_type )( ::OSG::ActionBase::ResultE ) ;
            
            RenderAction_exposer.def( 
                "stop"
                , stop_function_type( &::OSG::RenderAction::stop )
                , ( bp::arg("res") ) );
        
        }
        { //::OSG::RenderAction::subPassMask
        
            typedef void ( ::OSG::RenderAction::*subPassMask_function_type )( ::OSG::BitVector ) ;
            
            RenderAction_exposer.def( 
                "subPassMask"
                , subPassMask_function_type( &::OSG::RenderAction::subPassMask )
                , ( bp::arg("bvMask") ) );
        
        }
        { //::OSG::RenderAction::topMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::RenderAction::*topMatrix_function_type )(  ) ;
            
            RenderAction_exposer.def( 
                "topMatrix"
                , topMatrix_function_type( &::OSG::RenderAction::topMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        RenderAction_exposer.def_readonly( "statDrawTime", OSG::RenderAction::statDrawTime );
        RenderAction_exposer.def_readonly( "statNChunks", OSG::RenderAction::statNChunks );
        RenderAction_exposer.def_readonly( "statNMatrices", OSG::RenderAction::statNMatrices );
        RenderAction_exposer.def_readonly( "statNShaderParams", OSG::RenderAction::statNShaderParams );
        RenderAction_exposer.def_readonly( "statNShaders", OSG::RenderAction::statNShaders );
        RenderAction_exposer.def_readonly( "statNStates", OSG::RenderAction::statNStates );
        RenderAction_exposer.staticmethod( "create" );
        RenderAction_exposer.staticmethod( "getPrototype" );
        RenderAction_exposer.staticmethod( "setPrototype" );
        RenderAction_exposer.def("registerEnterDefault", wrapRegisterEnterDefault, (bp::arg("type"), bp::arg("func")));
        RenderAction_exposer.def("registerLeaveDefault", wrapRegisterLeaveDefault, (bp::arg("type"), bp::arg("func")));
        RenderAction_exposer.def("apply", wrapApply, (bp::arg("nodes")));
        RenderAction_exposer.def("apply",
               (OSG::ActionBase::ResultE (OSG::Action::*)(OSG::Node* const)) &OSG::Action::apply,
               (bp::arg("node")));
    }

}
