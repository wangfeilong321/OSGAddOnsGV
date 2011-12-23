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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "IntersectAction.pypp.hpp"

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
   OSG::IntersectAction::registerEnterDefault(type, boost::bind(invokeCallback, func, _1, _2));
}

void wrapRegisterLeaveDefault(const OSG::FieldContainerType& type,
                              bp::object func)
{
   OSG::IntersectAction::registerLeaveDefault(type, boost::bind(invokeCallback, func, _1, _2));
}

}

namespace
{

OSG::ActionBase::ResultE wrapApply(OSG::IntersectAction* self, bp::list nodes)
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

void register_IntersectAction_class(){

    { //::OSG::IntersectAction
        typedef bp::class_< OSG::IntersectAction, bp::bases< OSG::Action >, boost::noncopyable > IntersectAction_exposer_t;
        IntersectAction_exposer_t IntersectAction_exposer = IntersectAction_exposer_t( "IntersectAction", bp::no_init );
        bp::scope IntersectAction_scope( IntersectAction_exposer );
        { //::OSG::IntersectAction::create
        
            typedef ::OSG::IntersectAction * ( *create_function_type )(  );
            
            IntersectAction_exposer.def( 
                "create"
                , create_function_type( &::OSG::IntersectAction::create )
                , bp::return_value_policy< bp::manage_new_object >() );
        
        }
        { //::OSG::IntersectAction::create
        
            typedef ::OSG::IntersectAction * ( *create_function_type )( ::OSG::Line const &,::OSG::Real32 const );
            
            IntersectAction_exposer.def( 
                "create"
                , create_function_type( &::OSG::IntersectAction::create )
                , ( bp::arg("line"), bp::arg("maxdist")=OSG::Inf )
                , bp::return_value_policy< bp::manage_new_object >() );
        
        }
        { //::OSG::IntersectAction::didHit
        
            typedef bool ( ::OSG::IntersectAction::*didHit_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "didHit"
                , didHit_function_type( &::OSG::IntersectAction::didHit ) );
        
        }
        { //::OSG::IntersectAction::getHitLine
        
            typedef ::OSG::Int32 ( ::OSG::IntersectAction::*getHitLine_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getHitLine"
                , getHitLine_function_type( &::OSG::IntersectAction::getHitLine ) );
        
        }
        { //::OSG::IntersectAction::getHitNormal
        
            typedef ::OSG::Vec3f const & ( ::OSG::IntersectAction::*getHitNormal_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getHitNormal"
                , getHitNormal_function_type( &::OSG::IntersectAction::getHitNormal )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::IntersectAction::getHitObject
        
            typedef ::OSG::Node * ( ::OSG::IntersectAction::*getHitObject_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getHitObject"
                , getHitObject_function_type( &::OSG::IntersectAction::getHitObject )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::IntersectAction::getHitPoint
        
            typedef ::OSG::Pnt3f ( ::OSG::IntersectAction::*getHitPoint_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getHitPoint"
                , getHitPoint_function_type( &::OSG::IntersectAction::getHitPoint ) );
        
        }
        { //::OSG::IntersectAction::getHitT
        
            typedef ::OSG::Real32 ( ::OSG::IntersectAction::*getHitT_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getHitT"
                , getHitT_function_type( &::OSG::IntersectAction::getHitT ) );
        
        }
        { //::OSG::IntersectAction::getHitTriangle
        
            typedef ::OSG::Int32 ( ::OSG::IntersectAction::*getHitTriangle_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getHitTriangle"
                , getHitTriangle_function_type( &::OSG::IntersectAction::getHitTriangle ) );
        
        }
        { //::OSG::IntersectAction::getLine
        
            typedef ::OSG::Line const & ( ::OSG::IntersectAction::*getLine_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getLine"
                , getLine_function_type( &::OSG::IntersectAction::getLine )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::IntersectAction::getMaxDist
        
            typedef ::OSG::Real32 ( ::OSG::IntersectAction::*getMaxDist_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getMaxDist"
                , getMaxDist_function_type( &::OSG::IntersectAction::getMaxDist ) );
        
        }
        { //::OSG::IntersectAction::getPrototype
        
            typedef ::OSG::IntersectAction * ( *getPrototype_function_type )(  );
            
            IntersectAction_exposer.def( 
                "getPrototype"
                , getPrototype_function_type( &::OSG::IntersectAction::getPrototype )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::IntersectAction::getResetStatistics
        
            typedef bool ( ::OSG::IntersectAction::*getResetStatistics_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getResetStatistics"
                , getResetStatistics_function_type( &::OSG::IntersectAction::getResetStatistics ) );
        
        }
        { //::OSG::IntersectAction::getStatCollector
        
            typedef ::OSG::StatCollector * ( ::OSG::IntersectAction::*getStatCollector_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getStatCollector"
                , getStatCollector_function_type( &::OSG::IntersectAction::getStatCollector )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::IntersectAction::getTestLineWidth
        
            typedef ::OSG::Real32 ( ::OSG::IntersectAction::*getTestLineWidth_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getTestLineWidth"
                , getTestLineWidth_function_type( &::OSG::IntersectAction::getTestLineWidth ) );
        
        }
        { //::OSG::IntersectAction::getTestLines
        
            typedef bool ( ::OSG::IntersectAction::*getTestLines_function_type )(  ) const;
            
            IntersectAction_exposer.def( 
                "getTestLines"
                , getTestLines_function_type( &::OSG::IntersectAction::getTestLines ) );
        
        }
        { //::OSG::IntersectAction::scale
        
            typedef void ( ::OSG::IntersectAction::*scale_function_type )( ::OSG::Real32 ) ;
            
            IntersectAction_exposer.def( 
                "scale"
                , scale_function_type( &::OSG::IntersectAction::scale )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::IntersectAction::setEnterLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::IntersectAction::*setEnterLeave_function_type )( ::OSG::Real32,::OSG::Real32 ) ;
            
            IntersectAction_exposer.def( 
                "setEnterLeave"
                , setEnterLeave_function_type( &::OSG::IntersectAction::setEnterLeave )
                , ( bp::arg("enter"), bp::arg("leave") ) );
        
        }
        { //::OSG::IntersectAction::setHit
        
            typedef void ( ::OSG::IntersectAction::*setHit_function_type )( ::OSG::Real32,::OSG::Node *,::OSG::Int32,::OSG::Vec3f const &,::OSG::Int32 ) ;
            
            IntersectAction_exposer.def( 
                "setHit"
                , setHit_function_type( &::OSG::IntersectAction::setHit )
                , ( bp::arg("t"), bp::arg("obj"), bp::arg("triIndex"), bp::arg("normal"), bp::arg("lineIndex") ) );
        
        }
        { //::OSG::IntersectAction::setLine
        
            typedef void ( ::OSG::IntersectAction::*setLine_function_type )( ::OSG::Line const &,::OSG::Real32 const ) ;
            
            IntersectAction_exposer.def( 
                "setLine"
                , setLine_function_type( &::OSG::IntersectAction::setLine )
                , ( bp::arg("line"), bp::arg("maxdist")=OSG::Inf ) );
        
        }
        { //::OSG::IntersectAction::setPrototype
        
            typedef void ( *setPrototype_function_type )( ::OSG::IntersectAction * );
            
            IntersectAction_exposer.def( 
                "setPrototype"
                , setPrototype_function_type( &::OSG::IntersectAction::setPrototype )
                , ( bp::arg("proto") ) );
        
        }
        { //::OSG::IntersectAction::setResetStatistics
        
            typedef void ( ::OSG::IntersectAction::*setResetStatistics_function_type )( bool ) ;
            
            IntersectAction_exposer.def( 
                "setResetStatistics"
                , setResetStatistics_function_type( &::OSG::IntersectAction::setResetStatistics )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::IntersectAction::setStatCollector
        
            typedef void ( ::OSG::IntersectAction::*setStatCollector_function_type )( ::OSG::StatCollector * ) ;
            
            IntersectAction_exposer.def( 
                "setStatCollector"
                , setStatCollector_function_type( &::OSG::IntersectAction::setStatCollector )
                , ( bp::arg("sc") ) );
        
        }
        { //::OSG::IntersectAction::setTestLineWidth
        
            typedef void ( ::OSG::IntersectAction::*setTestLineWidth_function_type )( ::OSG::Real32 ) ;
            
            IntersectAction_exposer.def( 
                "setTestLineWidth"
                , setTestLineWidth_function_type( &::OSG::IntersectAction::setTestLineWidth )
                , ( bp::arg("width") ) );
        
        }
        { //::OSG::IntersectAction::setTestLines
        
            typedef void ( ::OSG::IntersectAction::*setTestLines_function_type )( bool ) ;
            
            IntersectAction_exposer.def( 
                "setTestLines"
                , setTestLines_function_type( &::OSG::IntersectAction::setTestLines )
                , ( bp::arg("value") ) );
        
        }
        IntersectAction_exposer.def_readonly( "statNNodes", OSG::IntersectAction::statNNodes );
        IntersectAction_exposer.def_readonly( "statNTriangles", OSG::IntersectAction::statNTriangles );
        IntersectAction_exposer.def_readonly( "statTravTime", OSG::IntersectAction::statTravTime );
        IntersectAction_exposer.staticmethod( "create" );
        IntersectAction_exposer.staticmethod( "getPrototype" );
        IntersectAction_exposer.staticmethod( "setPrototype" );
        IntersectAction_exposer.def("registerEnterDefault", wrapRegisterEnterDefault, (bp::arg("type"), bp::arg("func")));
        IntersectAction_exposer.def("registerLeaveDefault", wrapRegisterLeaveDefault, (bp::arg("type"), bp::arg("func")));
        IntersectAction_exposer.def("apply", wrapApply, (bp::arg("nodes")));
        IntersectAction_exposer.def("apply",
               (OSG::ActionBase::ResultE (OSG::Action::*)(OSG::Node* const)) &OSG::Action::apply,
               (bp::arg("node")));
    }

}
