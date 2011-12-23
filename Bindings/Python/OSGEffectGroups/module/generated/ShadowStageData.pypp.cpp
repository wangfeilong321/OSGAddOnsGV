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
#include "ShadowStageData.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

const OSG::UInt32 DepthShadowMap = OSG::ShadowStageData::ShadowMapElem::DepthShadowMap;
const OSG::UInt32 ColorShadowMap = OSG::ShadowStageData::ShadowMapElem::ColorShadowMap;

}

void register_ShadowStageData_class(){

    { //::OSG::ShadowStageData
        typedef bp::class_< OSG::ShadowStageData, bp::bases< OSG::ShadowStageDataBase >, OSG::ShadowStageData::ObjRecPtr, boost::noncopyable > ShadowStageData_exposer_t;
        ShadowStageData_exposer_t ShadowStageData_exposer = ShadowStageData_exposer_t( "ShadowStageData", bp::no_init );
        bp::scope ShadowStageData_scope( ShadowStageData_exposer );
        { //::OSG::ShadowStageData::ShadowMapElem
            typedef bp::class_< OSG::ShadowStageData::ShadowMapElem > ShadowMapElem_exposer_t;
            ShadowMapElem_exposer_t ShadowMapElem_exposer = ShadowMapElem_exposer_t( "ShadowMapElem", bp::init< >() );
            bp::scope ShadowMapElem_scope( ShadowMapElem_exposer );
            ShadowMapElem_exposer.def( bp::init< OSG::ShadowStageData::ShadowMapElem const & >(( bp::arg("src") )) );
            ShadowMapElem_exposer.def( bp::self != bp::self );
            { //::OSG::ShadowStageData::ShadowMapElem::operator=
            
                typedef void ( ::OSG::ShadowStageData::ShadowMapElem::*assign_function_type )( ::OSG::ShadowStageData::ShadowMapElem const & ) ;
                
                ShadowMapElem_exposer.def( 
                    "assign"
                    , assign_function_type( &::OSG::ShadowStageData::ShadowMapElem::operator= )
                    , ( bp::arg("src") ) );
            
            }
            ShadowMapElem_exposer.def( bp::self == bp::self );
            ShadowMapElem_exposer.def_readwrite( "pFBO", &OSG::ShadowStageData::ShadowMapElem::pFBO );
            ShadowMapElem_exposer.def_readwrite( "pImage", &OSG::ShadowStageData::ShadowMapElem::pImage );
            ShadowMapElem_exposer.def_readwrite( "pTexE", &OSG::ShadowStageData::ShadowMapElem::pTexE );
            ShadowMapElem_exposer.def_readwrite( "pTexO", &OSG::ShadowStageData::ShadowMapElem::pTexO );
            ShadowMapElem_exposer.def_readwrite( "uiType", &OSG::ShadowStageData::ShadowMapElem::uiType );
            ShadowMapElem_exposer.def_readonly("DepthShadowMap", DepthShadowMap);
            ShadowMapElem_exposer.def_readonly("ColorShadowMap", ColorShadowMap);
        }
        { //::OSG::ShadowStageData::changed
        
            typedef void ( ::OSG::ShadowStageData::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShadowStageData_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShadowStageData::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::ShadowStageData::clearLightData
        
            typedef void ( ::OSG::ShadowStageData::*clearLightData_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "clearLightData"
                , clearLightData_function_type( &::OSG::ShadowStageData::clearLightData ) );
        
        }
        { //::OSG::ShadowStageData::dump
        
            typedef void ( ::OSG::ShadowStageData::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShadowStageData_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShadowStageData::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ShadowStageData::getExcludeNodeTravMask
        
            typedef ::std::vector< unsigned int > & ( ::OSG::ShadowStageData::*getExcludeNodeTravMask_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getExcludeNodeTravMask"
                , getExcludeNodeTravMask_function_type( &::OSG::ShadowStageData::getExcludeNodeTravMask )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getLightCamBeacons
        
            typedef ::std::vector< OSG::RefCountPtr<OSG::Node, OSG::UnrecordedRefCountPolicy> > & ( ::OSG::ShadowStageData::*getLightCamBeacons_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getLightCamBeacons"
                , getLightCamBeacons_function_type( &::OSG::ShadowStageData::getLightCamBeacons )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getLightCamTrans
        
            typedef ::std::vector< OSG::RefCountPtr<OSG::Transform, OSG::UnrecordedRefCountPolicy> > & ( ::OSG::ShadowStageData::*getLightCamTrans_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getLightCamTrans"
                , getLightCamTrans_function_type( &::OSG::ShadowStageData::getLightCamTrans )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getLightCameras
        
            typedef ::std::vector< OSG::RefCountPtr<OSG::Camera, OSG::UnrecordedRefCountPolicy> > & ( ::OSG::ShadowStageData::*getLightCameras_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getLightCameras"
                , getLightCameras_function_type( &::OSG::ShadowStageData::getLightCameras )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getLightRoot
        
            typedef ::OSG::Node * ( ::OSG::ShadowStageData::*getLightRoot_function_type )( ::OSG::UInt32 ) ;
            
            ShadowStageData_exposer.def( 
                "getLightRoot"
                , getLightRoot_function_type( &::OSG::ShadowStageData::getLightRoot )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getLightStates
        
            typedef ::std::vector< unsigned int > & ( ::OSG::ShadowStageData::*getLightStates_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getLightStates"
                , getLightStates_function_type( &::OSG::ShadowStageData::getLightStates )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getLights
        
            typedef ::std::vector< std::pair<OSG::RefCountPtr<OSG::Node, OSG::UnrecordedRefCountPolicy>, OSG::RefCountPtr<OSG::Light, OSG::UnrecordedRefCountPolicy> > > & ( ::OSG::ShadowStageData::*getLights_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getLights"
                , getLights_function_type( &::OSG::ShadowStageData::getLights )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getOldLights
        
            typedef ::std::vector< std::pair<OSG::RefCountPtr<OSG::Node, OSG::UnrecordedRefCountPolicy>, OSG::RefCountPtr<OSG::Light, OSG::UnrecordedRefCountPolicy> > > & ( ::OSG::ShadowStageData::*getOldLights_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getOldLights"
                , getOldLights_function_type( &::OSG::ShadowStageData::getOldLights )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getRealPointLight
        
            typedef ::std::vector< bool > & ( ::OSG::ShadowStageData::*getRealPointLight_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getRealPointLight"
                , getRealPointLight_function_type( &::OSG::ShadowStageData::getRealPointLight )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getRunning
        
            typedef bool ( ::OSG::ShadowStageData::*getRunning_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getRunning"
                , getRunning_function_type( &::OSG::ShadowStageData::getRunning ) );
        
        }
        { //::OSG::ShadowStageData::getShadowMaps
        
            typedef ::std::vector< OSG::ShadowStageData::ShadowMapElem > & ( ::OSG::ShadowStageData::*getShadowMaps_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getShadowMaps"
                , getShadowMaps_function_type( &::OSG::ShadowStageData::getShadowMaps )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getTransparents
        
            typedef ::std::vector< OSG::RefCountPtr<OSG::Node, OSG::UnrecordedRefCountPolicy> > & ( ::OSG::ShadowStageData::*getTransparents_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getTransparents"
                , getTransparents_function_type( &::OSG::ShadowStageData::getTransparents )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::getTreeHandler
        
            typedef ::OSG::ShadowTreeHandler * ( ::OSG::ShadowStageData::*getTreeHandler_function_type )(  ) ;
            
            ShadowStageData_exposer.def( 
                "getTreeHandler"
                , getTreeHandler_function_type( &::OSG::ShadowStageData::getTreeHandler )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShadowStageData::setRunning
        
            typedef void ( ::OSG::ShadowStageData::*setRunning_function_type )( bool ) ;
            
            ShadowStageData_exposer.def( 
                "setRunning"
                , setRunning_function_type( &::OSG::ShadowStageData::setRunning )
                , ( bp::arg("bVal") ) );
        
        }
        { //::OSG::ShadowStageData::setTreeHandler
        
            typedef void ( ::OSG::ShadowStageData::*setTreeHandler_function_type )( ::OSG::ShadowTreeHandler * ) ;
            
            ShadowStageData_exposer.def( 
                "setTreeHandler"
                , setTreeHandler_function_type( &::OSG::ShadowStageData::setTreeHandler )
                , ( bp::arg("pHandler") ) );
        
        }
        pyopensg::register_transit< OSG::ShadowStageData >::execute();
        bp::implicitly_convertible< OSG::ShadowStageData::ObjRecPtr, OSG::ShadowStageData* >();
        bp::implicitly_convertible< OSG::ShadowStageData::ObjRecPtr, OSG::ShadowStageData::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShadowStageData::ObjRecPtr, OSG::StageData* >();
        bp::implicitly_convertible< OSG::ShadowStageData::ObjRecPtr, OSG::StageData::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShadowStageData::ObjRecPtr, OSG::StageData::ObjCPtr>();
    }

}
