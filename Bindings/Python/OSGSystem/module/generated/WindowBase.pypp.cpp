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
#include "WindowBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct WindowBase_wrapper : OSG::WindowBase, bp::wrapper< OSG::WindowBase > {

    virtual void submitTask( ::OSG::HardwareContextTask * pTask ){
        bp::override func_submitTask = this->get_override( "submitTask" );
        func_submitTask( boost::python::ptr(pTask) );
    }

    virtual void submitTaskAndWait( ::OSG::BlockingTask * pTask ){
        bp::override func_submitTaskAndWait = this->get_override( "submitTaskAndWait" );
        func_submitTaskAndWait( boost::python::ptr(pTask) );
    }

};

boost::python::list WindowBase_getMFPort(OSG::WindowBase *self)
{
   boost::python::list result;
   OSG::MFUnrecChildViewportPtr const * mf_data = self->getMFPort();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::Viewport::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_WindowBase_class(){

    { //::OSG::WindowBase
        typedef bp::class_< WindowBase_wrapper, bp::bases< ::OSG::HardwareContext >, boost::noncopyable > WindowBase_exposer_t;
        WindowBase_exposer_t WindowBase_exposer = WindowBase_exposer_t( "WindowBase", bp::no_init );
        bp::scope WindowBase_scope( WindowBase_exposer );
        bp::scope().attr("WidthFieldId") = (int)OSG::WindowBase::WidthFieldId;
        bp::scope().attr("HeightFieldId") = (int)OSG::WindowBase::HeightFieldId;
        bp::scope().attr("PortFieldId") = (int)OSG::WindowBase::PortFieldId;
        bp::scope().attr("GlObjectEventCounterFieldId") = (int)OSG::WindowBase::GlObjectEventCounterFieldId;
        bp::scope().attr("GlObjectLastRefreshFieldId") = (int)OSG::WindowBase::GlObjectLastRefreshFieldId;
        bp::scope().attr("GlObjectLastReinitializeFieldId") = (int)OSG::WindowBase::GlObjectLastReinitializeFieldId;
        bp::scope().attr("DrawerIdFieldId") = (int)OSG::WindowBase::DrawerIdFieldId;
        bp::scope().attr("RequestMajorFieldId") = (int)OSG::WindowBase::RequestMajorFieldId;
        bp::scope().attr("RequestMinorFieldId") = (int)OSG::WindowBase::RequestMinorFieldId;
        bp::scope().attr("ContextFlagsFieldId") = (int)OSG::WindowBase::ContextFlagsFieldId;
        bp::scope().attr("RenderOptionsFieldId") = (int)OSG::WindowBase::RenderOptionsFieldId;
        bp::scope().attr("IgnoreAllExtensionsFieldId") = (int)OSG::WindowBase::IgnoreAllExtensionsFieldId;
        bp::scope().attr("DrawModeFieldId") = (int)OSG::WindowBase::DrawModeFieldId;
        bp::scope().attr("RendererInfoFieldId") = (int)OSG::WindowBase::RendererInfoFieldId;
        bp::scope().attr("DrawTasksFieldId") = (int)OSG::WindowBase::DrawTasksFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::WindowBase::NextFieldId;
        { //::OSG::WindowBase::addPort
        
            typedef void ( ::OSG::WindowBase::*addPort_function_type )( ::OSG::Viewport * const ) ;
            
            WindowBase_exposer.def( 
                "addPort"
                , addPort_function_type( &::OSG::WindowBase::addPort )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::assignPort
        
            typedef void ( ::OSG::WindowBase::*assignPort_function_type )( ::OSG::MFUnrecChildViewportPtr const & ) ;
            
            WindowBase_exposer.def( 
                "assignPort"
                , assignPort_function_type( &::OSG::WindowBase::assignPort )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::clearPorts
        
            typedef void ( ::OSG::WindowBase::*clearPorts_function_type )(  ) ;
            
            WindowBase_exposer.def( 
                "clearPorts"
                , clearPorts_function_type( &::OSG::WindowBase::clearPorts ) );
        
        }
        { //::OSG::WindowBase::copyFromBin
        
            typedef void ( ::OSG::WindowBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            WindowBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::WindowBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::WindowBase::copyToBin
        
            typedef void ( ::OSG::WindowBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            WindowBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::WindowBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::WindowBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::WindowBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            WindowBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::WindowBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::WindowBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            WindowBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::WindowBase::getClassGroupId ) );
        
        }
        { //::OSG::WindowBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            WindowBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::WindowBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::WindowBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            WindowBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::WindowBase::getClassTypeId ) );
        
        }
        { //::OSG::WindowBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::WindowBase::*getContainerSize_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::WindowBase::getContainerSize ) );
        
        }
        { //::OSG::WindowBase::getContextFlags
        
            typedef ::OSG::Int32 ( ::OSG::WindowBase::*getContextFlags_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getContextFlags"
                , getContextFlags_function_type( &::OSG::WindowBase::getContextFlags ) );
        
        }
        { //::OSG::WindowBase::getDrawMode
        
            typedef ::OSG::UInt32 ( ::OSG::WindowBase::*getDrawMode_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getDrawMode"
                , getDrawMode_function_type( &::OSG::WindowBase::getDrawMode ) );
        
        }
        { //::OSG::WindowBase::getDrawerId
        
            typedef ::OSG::Int32 ( ::OSG::WindowBase::*getDrawerId_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getDrawerId"
                , getDrawerId_function_type( &::OSG::WindowBase::getDrawerId ) );
        
        }
        { //::OSG::WindowBase::getHeight
        
            typedef ::OSG::UInt16 ( ::OSG::WindowBase::*getHeight_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getHeight"
                , getHeight_function_type( &::OSG::WindowBase::getHeight ) );
        
        }
        { //::OSG::WindowBase::getIgnoreAllExtensions
        
            typedef bool ( ::OSG::WindowBase::*getIgnoreAllExtensions_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getIgnoreAllExtensions"
                , getIgnoreAllExtensions_function_type( &::OSG::WindowBase::getIgnoreAllExtensions ) );
        
        }
        { //::OSG::WindowBase::getPort
        
            typedef ::OSG::Viewport * ( ::OSG::WindowBase::*getPort_function_type )( ::OSG::UInt32 const ) const;
            
            WindowBase_exposer.def( 
                "getPort"
                , getPort_function_type( &::OSG::WindowBase::getPort )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getRenderOptions
        
            typedef ::OSG::RenderOptions * ( ::OSG::WindowBase::*getRenderOptions_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getRenderOptions"
                , getRenderOptions_function_type( &::OSG::WindowBase::getRenderOptions )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getRendererInfo
        
            typedef ::std::string const & ( ::OSG::WindowBase::*getRendererInfo_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getRendererInfo"
                , getRendererInfo_function_type( &::OSG::WindowBase::getRendererInfo )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::WindowBase::getRequestMajor
        
            typedef ::OSG::Int32 ( ::OSG::WindowBase::*getRequestMajor_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getRequestMajor"
                , getRequestMajor_function_type( &::OSG::WindowBase::getRequestMajor ) );
        
        }
        { //::OSG::WindowBase::getRequestMinor
        
            typedef ::OSG::Int32 ( ::OSG::WindowBase::*getRequestMinor_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getRequestMinor"
                , getRequestMinor_function_type( &::OSG::WindowBase::getRequestMinor ) );
        
        }
        { //::OSG::WindowBase::getSFContextFlags
        
            typedef ::OSG::SFInt32 const * ( ::OSG::WindowBase::*getSFContextFlags_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFContextFlags"
                , getSFContextFlags_function_type( &::OSG::WindowBase::getSFContextFlags )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFDrawMode
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::WindowBase::*getSFDrawMode_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFDrawMode"
                , getSFDrawMode_function_type( &::OSG::WindowBase::getSFDrawMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFDrawerId
        
            typedef ::OSG::SFInt32 const * ( ::OSG::WindowBase::*getSFDrawerId_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFDrawerId"
                , getSFDrawerId_function_type( &::OSG::WindowBase::getSFDrawerId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFHeight
        
            typedef ::OSG::SFUInt16 const * ( ::OSG::WindowBase::*getSFHeight_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFHeight"
                , getSFHeight_function_type( &::OSG::WindowBase::getSFHeight )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFIgnoreAllExtensions
        
            typedef ::OSG::SFBool const * ( ::OSG::WindowBase::*getSFIgnoreAllExtensions_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFIgnoreAllExtensions"
                , getSFIgnoreAllExtensions_function_type( &::OSG::WindowBase::getSFIgnoreAllExtensions )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFRenderOptions
        
            typedef ::OSG::SFUnrecRenderOptionsPtr const * ( ::OSG::WindowBase::*getSFRenderOptions_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFRenderOptions"
                , getSFRenderOptions_function_type( &::OSG::WindowBase::getSFRenderOptions )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFRendererInfo
        
            typedef ::OSG::SFString const * ( ::OSG::WindowBase::*getSFRendererInfo_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFRendererInfo"
                , getSFRendererInfo_function_type( &::OSG::WindowBase::getSFRendererInfo )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFRequestMajor
        
            typedef ::OSG::SFInt32 const * ( ::OSG::WindowBase::*getSFRequestMajor_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFRequestMajor"
                , getSFRequestMajor_function_type( &::OSG::WindowBase::getSFRequestMajor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFRequestMinor
        
            typedef ::OSG::SFInt32 const * ( ::OSG::WindowBase::*getSFRequestMinor_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFRequestMinor"
                , getSFRequestMinor_function_type( &::OSG::WindowBase::getSFRequestMinor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getSFWidth
        
            typedef ::OSG::SFUInt16 const * ( ::OSG::WindowBase::*getSFWidth_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getSFWidth"
                , getSFWidth_function_type( &::OSG::WindowBase::getSFWidth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::WindowBase::*getType_function_type )(  ) ;
            
            WindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::WindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::WindowBase::*getType_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::WindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::WindowBase::getWidth
        
            typedef ::OSG::UInt16 ( ::OSG::WindowBase::*getWidth_function_type )(  ) const;
            
            WindowBase_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::OSG::WindowBase::getWidth ) );
        
        }
        { //::OSG::WindowBase::insertPort
        
            typedef void ( ::OSG::WindowBase::*insertPort_function_type )( ::OSG::UInt32,::OSG::Viewport * const ) ;
            
            WindowBase_exposer.def( 
                "insertPort"
                , insertPort_function_type( &::OSG::WindowBase::insertPort )
                , ( bp::arg("uiIndex"), bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::replacePort
        
            typedef void ( ::OSG::WindowBase::*replacePort_function_type )( ::OSG::UInt32,::OSG::Viewport * const ) ;
            
            WindowBase_exposer.def( 
                "replacePort"
                , replacePort_function_type( &::OSG::WindowBase::replacePort )
                , ( bp::arg("uiIndex"), bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::replacePortByObj
        
            typedef void ( ::OSG::WindowBase::*replacePortByObj_function_type )( ::OSG::Viewport * const,::OSG::Viewport * const ) ;
            
            WindowBase_exposer.def( 
                "replacePortByObj"
                , replacePortByObj_function_type( &::OSG::WindowBase::replacePortByObj )
                , ( bp::arg("pOldElem"), bp::arg("pNewElem") ) );
        
        }
        { //::OSG::WindowBase::setContextFlags
        
            typedef void ( ::OSG::WindowBase::*setContextFlags_function_type )( ::OSG::Int32 const ) ;
            
            WindowBase_exposer.def( 
                "setContextFlags"
                , setContextFlags_function_type( &::OSG::WindowBase::setContextFlags )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setDrawMode
        
            typedef void ( ::OSG::WindowBase::*setDrawMode_function_type )( ::OSG::UInt32 const ) ;
            
            WindowBase_exposer.def( 
                "setDrawMode"
                , setDrawMode_function_type( &::OSG::WindowBase::setDrawMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setDrawerId
        
            typedef void ( ::OSG::WindowBase::*setDrawerId_function_type )( ::OSG::Int32 const ) ;
            
            WindowBase_exposer.def( 
                "setDrawerId"
                , setDrawerId_function_type( &::OSG::WindowBase::setDrawerId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setHeight
        
            typedef void ( ::OSG::WindowBase::*setHeight_function_type )( ::OSG::UInt16 const ) ;
            
            WindowBase_exposer.def( 
                "setHeight"
                , setHeight_function_type( &::OSG::WindowBase::setHeight )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setIgnoreAllExtensions
        
            typedef void ( ::OSG::WindowBase::*setIgnoreAllExtensions_function_type )( bool const ) ;
            
            WindowBase_exposer.def( 
                "setIgnoreAllExtensions"
                , setIgnoreAllExtensions_function_type( &::OSG::WindowBase::setIgnoreAllExtensions )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setRenderOptions
        
            typedef void ( ::OSG::WindowBase::*setRenderOptions_function_type )( ::OSG::RenderOptions * const ) ;
            
            WindowBase_exposer.def( 
                "setRenderOptions"
                , setRenderOptions_function_type( &::OSG::WindowBase::setRenderOptions )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setRendererInfo
        
            typedef void ( ::OSG::WindowBase::*setRendererInfo_function_type )( ::std::string const & ) ;
            
            WindowBase_exposer.def( 
                "setRendererInfo"
                , setRendererInfo_function_type( &::OSG::WindowBase::setRendererInfo )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setRequestMajor
        
            typedef void ( ::OSG::WindowBase::*setRequestMajor_function_type )( ::OSG::Int32 const ) ;
            
            WindowBase_exposer.def( 
                "setRequestMajor"
                , setRequestMajor_function_type( &::OSG::WindowBase::setRequestMajor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setRequestMinor
        
            typedef void ( ::OSG::WindowBase::*setRequestMinor_function_type )( ::OSG::Int32 const ) ;
            
            WindowBase_exposer.def( 
                "setRequestMinor"
                , setRequestMinor_function_type( &::OSG::WindowBase::setRequestMinor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::setWidth
        
            typedef void ( ::OSG::WindowBase::*setWidth_function_type )( ::OSG::UInt16 const ) ;
            
            WindowBase_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::OSG::WindowBase::setWidth )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::WindowBase::subPort
        
            typedef void ( ::OSG::WindowBase::*subPort_function_type )( ::OSG::UInt32 ) ;
            
            WindowBase_exposer.def( 
                "subPort"
                , subPort_function_type( &::OSG::WindowBase::subPort )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::WindowBase::subPortByObj
        
            typedef void ( ::OSG::WindowBase::*subPortByObj_function_type )( ::OSG::Viewport * const ) ;
            
            WindowBase_exposer.def( 
                "subPortByObj"
                , subPortByObj_function_type( &::OSG::WindowBase::subPortByObj )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::HardwareContext::submitTask
        
            typedef void ( ::OSG::HardwareContext::*submitTask_function_type )( ::OSG::HardwareContextTask * ) ;
            
            WindowBase_exposer.def( 
                "submitTask"
                , bp::pure_virtual( submitTask_function_type(&::OSG::HardwareContext::submitTask) )
                , ( bp::arg("pTask") ) );
        
        }
        { //::OSG::HardwareContext::submitTaskAndWait
        
            typedef void ( ::OSG::HardwareContext::*submitTaskAndWait_function_type )( ::OSG::BlockingTask * ) ;
            
            WindowBase_exposer.def( 
                "submitTaskAndWait"
                , bp::pure_virtual( submitTaskAndWait_function_type(&::OSG::HardwareContext::submitTaskAndWait) )
                , ( bp::arg("pTask") ) );
        
        }
        WindowBase_exposer.staticmethod( "getClassGroupId" );
        WindowBase_exposer.staticmethod( "getClassType" );
        WindowBase_exposer.staticmethod( "getClassTypeId" );
        WindowBase_exposer.def("getMFPort",WindowBase_getMFPort);
    }

}
