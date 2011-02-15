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

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Window.pypp.hpp"

using namespace std;
namespace bp = boost::python;

static void render_22e9d27a9747c1d070461eaa54f6f567( ::OSG::Window & inst, ::OSG::RenderActionBase * action ){
    PyThreadState* _save;
    _save = PyEval_SaveThread();
    try
    {
    inst.render(action);
        PyEval_RestoreThread(_save);
    }
    catch(...)
    {
        PyEval_RestoreThread(_save);
        throw;
    }
}

namespace
{

void initCallback(bp::object callable)
{
   callable();
}

void wrapInit(OSG::Window* self, bp::object callable)
{
   self->init(boost::bind(initCallback, callable));
}

void defaultInit(OSG::Window* self)
{
   self->init();
}

}

void register_Window_class(){

    { //::OSG::Window
        typedef bp::class_< OSG::Window, bp::bases< OSG::WindowBase >, boost::noncopyable > Window_exposer_t;
        Window_exposer_t Window_exposer = Window_exposer_t( "Window", bp::no_init );
        bp::scope Window_scope( Window_exposer );
        bp::scope().attr("invalidExtensionID") = (int)OSG::Window::invalidExtensionID;
        bp::scope().attr("invalidFunctionID") = (int)OSG::Window::invalidFunctionID;
        bp::scope().attr("SequentialPartitionDraw") = (int)OSG::Window::SequentialPartitionDraw;
        bp::scope().attr("ParallelPartitionDraw") = (int)OSG::Window::ParallelPartitionDraw;
        bp::scope().attr("PartitionDrawMask") = (int)OSG::Window::PartitionDrawMask;
        bp::scope().attr("StdDrawer") = (int)OSG::Window::StdDrawer;
        bp::scope().attr("ParallelDrawer") = (int)OSG::Window::ParallelDrawer;
        bp::scope().attr("DrawerMask") = (int)OSG::Window::DrawerMask;
        bp::scope().attr("ActiveContext") = (int)OSG::Window::ActiveContext;
        bp::scope().attr("ExternalContext") = (int)OSG::Window::ExternalContext;
        bp::scope().attr("PassiveContext") = (int)OSG::Window::PassiveContext;
        bp::scope().attr("ContextMask") = (int)OSG::Window::ContextMask;
        bp::enum_< OSG::Window::GLObjectStatusE>("GLObjectStatusE")
            .value("notused", OSG::Window::notused)
            .value("initialize", OSG::Window::initialize)
            .value("reinitialize", OSG::Window::reinitialize)
            .value("initialized", OSG::Window::initialized)
            .value("needrefresh", OSG::Window::needrefresh)
            .value("destroy", OSG::Window::destroy)
            .value("finaldestroy", OSG::Window::finaldestroy)
            .export_values()
            ;
        { //::OSG::Window::changed
        
            typedef void ( ::OSG::Window::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            Window_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::Window::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::Window::clearDrawTasks
        
            typedef void ( ::OSG::Window::*clearDrawTasks_function_type )(  ) ;
            
            Window_exposer.def( 
                "clearDrawTasks"
                , clearDrawTasks_function_type( &::OSG::Window::clearDrawTasks ) );
        
        }
        { //::OSG::Window::dump
        
            typedef void ( ::OSG::Window::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            Window_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::Window::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::Window::dumpExtensions
        
            typedef void ( ::OSG::Window::*dumpExtensions_function_type )(  ) ;
            
            Window_exposer.def( 
                "dumpExtensions"
                , dumpExtensions_function_type( &::OSG::Window::dumpExtensions ) );
        
        }
        { //::OSG::Window::frameExit
        
            typedef void ( ::OSG::Window::*frameExit_function_type )(  ) ;
            
            Window_exposer.def( 
                "frameExit"
                , frameExit_function_type( &::OSG::Window::frameExit ) );
        
        }
        { //::OSG::Window::frameFinish
        
            typedef void ( ::OSG::Window::*frameFinish_function_type )( bool ) ;
            
            Window_exposer.def( 
                "frameFinish"
                , frameFinish_function_type( &::OSG::Window::frameFinish )
                , ( bp::arg("bActivate")=(bool)(true) ) );
        
        }
        { //::OSG::Window::frameInit
        
            typedef void ( ::OSG::Window::*frameInit_function_type )(  ) ;
            
            Window_exposer.def( 
                "frameInit"
                , frameInit_function_type( &::OSG::Window::frameInit ) );
        
        }
        { //::OSG::Window::getConstantValue
        
            typedef ::OSG::Real32 ( ::OSG::Window::*getConstantValue_function_type )( ::GLenum ) ;
            
            Window_exposer.def( 
                "getConstantValue"
                , getConstantValue_function_type( &::OSG::Window::getConstantValue )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::Window::getConstantValuev
        
            typedef ::OSG::Vec2f const & ( ::OSG::Window::*getConstantValuev_function_type )( ::GLenum ) ;
            
            Window_exposer.def( 
                "getConstantValuev"
                , getConstantValuev_function_type( &::OSG::Window::getConstantValuev )
                , ( bp::arg("val") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Window::getDrawerType
        
            typedef ::OSG::UInt32 ( ::OSG::Window::*getDrawerType_function_type )(  ) const;
            
            Window_exposer.def( 
                "getDrawerType"
                , getDrawerType_function_type( &::OSG::Window::getDrawerType ) );
        
        }
        { //::OSG::Window::getExtensionId
        
            typedef ::OSG::Int32 ( *getExtensionId_function_type )( ::OSG::Char8 const * );
            
            Window_exposer.def( 
                "getExtensionId"
                , getExtensionId_function_type( &::OSG::Window::getExtensionId )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::Window::getExtensions
        
            typedef ::std::vector< std::string > const & ( ::OSG::Window::*getExtensions_function_type )(  ) ;
            
            Window_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::OSG::Window::getExtensions )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Window::getGLObjectId
        
            typedef ::OSG::UIntPointer ( ::OSG::Window::*getGLObjectId_function_type )( ::OSG::UInt32 ) ;
            
            Window_exposer.def( 
                "getGLObjectId"
                , getGLObjectId_function_type( &::OSG::Window::getGLObjectId )
                , ( bp::arg("osgId") ) );
        
        }
        { //::OSG::Window::getGLVersion
        
            typedef ::OSG::UInt32 ( ::OSG::Window::*getGLVersion_function_type )(  ) ;
            
            Window_exposer.def( 
                "getGLVersion"
                , getGLVersion_function_type( &::OSG::Window::getGLVersion ) );
        
        }
        { //::OSG::Window::getIgnoredExtensions
        
            typedef ::std::vector< std::string > const & ( ::OSG::Window::*getIgnoredExtensions_function_type )(  ) ;
            
            Window_exposer.def( 
                "getIgnoredExtensions"
                , getIgnoredExtensions_function_type( &::OSG::Window::getIgnoredExtensions )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Window::getPartitionDrawMode
        
            typedef ::OSG::UInt32 ( ::OSG::Window::*getPartitionDrawMode_function_type )(  ) const;
            
            Window_exposer.def( 
                "getPartitionDrawMode"
                , getPartitionDrawMode_function_type( &::OSG::Window::getPartitionDrawMode ) );
        
        }
        { //::OSG::Window::getRegisteredExtensions
        
            typedef ::std::vector< std::string > const & ( *getRegisteredExtensions_function_type )(  );
            
            Window_exposer.def( 
                "getRegisteredExtensions"
                , getRegisteredExtensions_function_type( &::OSG::Window::getRegisteredExtensions )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Window::getRegisteredFunctions
        
            typedef ::std::vector< std::string > const & ( ::OSG::Window::*getRegisteredFunctions_function_type )(  ) ;
            
            Window_exposer.def( 
                "getRegisteredFunctions"
                , getRegisteredFunctions_function_type( &::OSG::Window::getRegisteredFunctions )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Window::getShaderCache
        
            typedef ::OSG::ShaderCache * ( ::OSG::Window::*getShaderCache_function_type )(  ) ;
            
            Window_exposer.def( 
                "getShaderCache"
                , getShaderCache_function_type( &::OSG::Window::getShaderCache )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Window::getTravValidator
        
            typedef ::OSG::TraversalValidator * ( ::OSG::Window::*getTravValidator_function_type )(  ) ;
            
            Window_exposer.def( 
                "getTravValidator"
                , getTravValidator_function_type( &::OSG::Window::getTravValidator )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Window::hasCommonExtension
        
            typedef bool ( *hasCommonExtension_function_type )( ::OSG::UInt32 );
            
            Window_exposer.def( 
                "hasCommonExtension"
                , hasCommonExtension_function_type( &::OSG::Window::hasCommonExtension )
                , ( bp::arg("extId") ) );
        
        }
        { //::OSG::Window::hasExtension
        
            typedef bool ( ::OSG::Window::*hasExtension_function_type )( ::OSG::Char8 const * ) ;
            
            Window_exposer.def( 
                "hasExtension"
                , hasExtension_function_type( &::OSG::Window::hasExtension )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::Window::hasExtension
        
            typedef bool ( ::OSG::Window::*hasExtension_function_type )( ::OSG::UInt32 ) ;
            
            Window_exposer.def( 
                "hasExtension"
                , hasExtension_function_type( &::OSG::Window::hasExtension )
                , ( bp::arg("extId") ) );
        
        }
        { //::OSG::Window::ignoreExtensions
        
            typedef void ( *ignoreExtensions_function_type )( ::OSG::Char8 const * );
            
            Window_exposer.def( 
                "ignoreExtensions"
                , ignoreExtensions_function_type( &::OSG::Window::ignoreExtensions )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::Window::queueGlobalTask
        
            typedef void ( *queueGlobalTask_function_type )( ::OSG::DrawTask * );
            
            Window_exposer.def( 
                "queueGlobalTask"
                , queueGlobalTask_function_type( &::OSG::Window::queueGlobalTask )
                , ( bp::arg("pTask") ) );
        
        }
        { //::OSG::Window::queueTask
        
            typedef void ( ::OSG::Window::*queueTask_function_type )( ::OSG::DrawTask * ) ;
            
            Window_exposer.def( 
                "queueTask"
                , queueTask_function_type( &::OSG::Window::queueTask )
                , ( bp::arg("pTask") ) );
        
        }
        { //::OSG::Window::queueTaskFromDrawer
        
            typedef void ( ::OSG::Window::*queueTaskFromDrawer_function_type )( ::OSG::DrawTask * ) ;
            
            Window_exposer.def( 
                "queueTaskFromDrawer"
                , queueTaskFromDrawer_function_type( &::OSG::Window::queueTaskFromDrawer )
                , ( bp::arg("pTask") ) );
        
        }
        { //::OSG::Window::registerConstant
        
            typedef void ( *registerConstant_function_type )( ::GLenum );
            
            Window_exposer.def( 
                "registerConstant"
                , registerConstant_function_type( &::OSG::Window::registerConstant )
                , ( bp::arg("val") ) );
        
        }
        { //::OSG::Window::render
        
            typedef void ( *render_function_type )( ::OSG::Window &,::OSG::RenderActionBase * );
            
            Window_exposer.def( 
                "render"
                , render_function_type( &render_22e9d27a9747c1d070461eaa54f6f567 )
                , ( bp::arg("inst"), bp::arg("action") ) );
        
        }
        { //::OSG::Window::renderAllViewports
        
            typedef void ( ::OSG::Window::*renderAllViewports_function_type )( ::OSG::RenderActionBase * ) ;
            
            Window_exposer.def( 
                "renderAllViewports"
                , renderAllViewports_function_type( &::OSG::Window::renderAllViewports )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::Window::renderNoFinish
        
            typedef void ( ::OSG::Window::*renderNoFinish_function_type )( ::OSG::RenderActionBase * ) ;
            
            Window_exposer.def( 
                "renderNoFinish"
                , renderNoFinish_function_type( &::OSG::Window::renderNoFinish )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::Window::requestStageRun
        
            typedef void ( *requestStageRun_function_type )( ::OSG::Int32 );
            
            Window_exposer.def( 
                "requestStageRun"
                , requestStageRun_function_type( &::OSG::Window::requestStageRun )
                , ( bp::arg("iStageId") ) );
        
        }
        { //::OSG::Window::resize
        
            typedef void ( ::OSG::Window::*resize_function_type )( int,int ) ;
            
            Window_exposer.def( 
                "resize"
                , resize_function_type( &::OSG::Window::resize )
                , ( bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::Window::resolveLinks
        
            typedef void ( ::OSG::Window::*resolveLinks_function_type )(  ) ;
            
            Window_exposer.def( 
                "resolveLinks"
                , resolveLinks_function_type( &::OSG::Window::resolveLinks ) );
        
        }
        { //::OSG::Window::runFrameExit
        
            typedef void ( ::OSG::Window::*runFrameExit_function_type )(  ) ;
            
            Window_exposer.def( 
                "runFrameExit"
                , runFrameExit_function_type( &::OSG::Window::runFrameExit ) );
        
        }
        { //::OSG::Window::setDrawerType
        
            typedef void ( ::OSG::Window::*setDrawerType_function_type )( ::OSG::UInt32 ) ;
            
            Window_exposer.def( 
                "setDrawerType"
                , setDrawerType_function_type( &::OSG::Window::setDrawerType )
                , ( bp::arg("uiDrawerType") ) );
        
        }
        { //::OSG::Window::setGLLibraryName
        
            typedef void ( *setGLLibraryName_function_type )( ::OSG::Char8 const * );
            
            Window_exposer.def( 
                "setGLLibraryName"
                , setGLLibraryName_function_type( &::OSG::Window::setGLLibraryName )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::Window::setGLObjectId
        
            typedef void ( ::OSG::Window::*setGLObjectId_function_type )( ::OSG::UInt32,::OSG::UIntPointer ) ;
            
            Window_exposer.def( 
                "setGLObjectId"
                , setGLObjectId_function_type( &::OSG::Window::setGLObjectId )
                , ( bp::arg("osgId"), bp::arg("id2") ) );
        
        }
        { //::OSG::Window::setPartitionDrawMode
        
            typedef void ( ::OSG::Window::*setPartitionDrawMode_function_type )( ::OSG::UInt32 ) ;
            
            Window_exposer.def( 
                "setPartitionDrawMode"
                , setPartitionDrawMode_function_type( &::OSG::Window::setPartitionDrawMode )
                , ( bp::arg("uiMode") ) );
        
        }
        { //::OSG::Window::setSize
        
            typedef void ( ::OSG::Window::*setSize_function_type )( ::OSG::UInt16,::OSG::UInt16 ) ;
            
            Window_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::Window::setSize )
                , ( bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::Window::staticDump
        
            typedef void ( *staticDump_function_type )(  );
            
            Window_exposer.def( 
                "staticDump"
                , staticDump_function_type( &::OSG::Window::staticDump ) );
        
        }
        { //::OSG::Window::submitTask
        
            typedef void ( ::OSG::Window::*submitTask_function_type )( ::OSG::HardwareContextTask * ) ;
            
            Window_exposer.def( 
                "submitTask"
                , submitTask_function_type( &::OSG::Window::submitTask )
                , ( bp::arg("pTask") ) );
        
        }
        { //::OSG::Window::submitTaskAndWait
        
            typedef void ( ::OSG::Window::*submitTaskAndWait_function_type )( ::OSG::BlockingTask * ) ;
            
            Window_exposer.def( 
                "submitTaskAndWait"
                , submitTaskAndWait_function_type( &::OSG::Window::submitTaskAndWait )
                , ( bp::arg("pTask") ) );
        
        }
        { //::OSG::Window::swap
        
            typedef bool ( ::OSG::Window::*swap_function_type )(  ) ;
            
            Window_exposer.def( 
                "swap"
                , swap_function_type( &::OSG::Window::swap ) );
        
        }
        { //::OSG::Window::terminate
        
            typedef void ( ::OSG::Window::*terminate_function_type )(  ) ;
            
            Window_exposer.def( 
                "terminate"
                , terminate_function_type( &::OSG::Window::terminate ) );
        
        }
        { //::OSG::Window::validateAllGLObjects
        
            typedef void ( ::OSG::Window::*validateAllGLObjects_function_type )(  ) ;
            
            Window_exposer.def( 
                "validateAllGLObjects"
                , validateAllGLObjects_function_type( &::OSG::Window::validateAllGLObjects ) );
        
        }
        { //::OSG::Window::validateGLObject
        
            typedef ::OSG::UInt32 ( ::OSG::Window::*validateGLObject_function_type )( ::OSG::UInt32,::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            Window_exposer.def( 
                "validateGLObject"
                , validateGLObject_function_type( &::OSG::Window::validateGLObject )
                , ( bp::arg("osgId"), bp::arg("pEnv"), bp::arg("uiOptions")=(::OSG::UInt32)(0) ) );
        
        }
        Window_exposer.staticmethod( "getExtensionId" );
        Window_exposer.staticmethod( "getRegisteredExtensions" );
        Window_exposer.staticmethod( "hasCommonExtension" );
        Window_exposer.staticmethod( "ignoreExtensions" );
        Window_exposer.staticmethod( "queueGlobalTask" );
        Window_exposer.staticmethod( "registerConstant" );
        Window_exposer.staticmethod( "requestStageRun" );
        Window_exposer.staticmethod( "setGLLibraryName" );
        Window_exposer.staticmethod( "staticDump" );
        pyopensg::register_transit< OSG::Window >::execute();
        bp::register_ptr_to_python< OSG::Window::ObjRecPtr >();
        bp::implicitly_convertible< OSG::Window::ObjRecPtr, OSG::Window* >();
        bp::implicitly_convertible< OSG::Window::ObjRecPtr, OSG::Window::ObjCPtr >();
        bp::implicitly_convertible< OSG::Window::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::Window::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::Window::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
        Window_exposer.def("init", defaultInit);
        Window_exposer.def("init", wrapInit, bp::arg("oFunc"));
    }

}
