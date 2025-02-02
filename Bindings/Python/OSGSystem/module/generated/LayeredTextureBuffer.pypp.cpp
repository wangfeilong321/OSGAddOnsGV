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
#include "LayeredTextureBuffer.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_LayeredTextureBuffer_class(){

    { //::OSG::LayeredTextureBuffer
        typedef bp::class_< OSG::LayeredTextureBuffer, bp::bases< OSG::LayeredTextureBufferBase >, OSG::LayeredTextureBuffer::ObjRecPtr, boost::noncopyable > LayeredTextureBuffer_exposer_t;
        LayeredTextureBuffer_exposer_t LayeredTextureBuffer_exposer = LayeredTextureBuffer_exposer_t( "LayeredTextureBuffer", bp::no_init );
        bp::scope LayeredTextureBuffer_scope( LayeredTextureBuffer_exposer );
        { //::OSG::LayeredTextureBuffer::bind
        
            typedef void ( ::OSG::LayeredTextureBuffer::*bind_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            LayeredTextureBuffer_exposer.def( 
                "bind"
                , bind_function_type( &::OSG::LayeredTextureBuffer::bind )
                , ( bp::arg("pEnv"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        { //::OSG::LayeredTextureBuffer::changed
        
            typedef void ( ::OSG::LayeredTextureBuffer::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            LayeredTextureBuffer_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::LayeredTextureBuffer::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::LayeredTextureBuffer::dump
        
            typedef void ( ::OSG::LayeredTextureBuffer::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            LayeredTextureBuffer_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::LayeredTextureBuffer::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::LayeredTextureBuffer::getBufferFormat
        
            typedef ::GLenum ( ::OSG::LayeredTextureBuffer::*getBufferFormat_function_type )(  ) const;
            
            LayeredTextureBuffer_exposer.def( 
                "getBufferFormat"
                , getBufferFormat_function_type( &::OSG::LayeredTextureBuffer::getBufferFormat ) );
        
        }
        { //::OSG::LayeredTextureBuffer::processPostDeactivate
        
            typedef void ( ::OSG::LayeredTextureBuffer::*processPostDeactivate_function_type )( ::OSG::DrawEnv * ) ;
            
            LayeredTextureBuffer_exposer.def( 
                "processPostDeactivate"
                , processPostDeactivate_function_type( &::OSG::LayeredTextureBuffer::processPostDeactivate )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::LayeredTextureBuffer::processPreDeactivate
        
            typedef void ( ::OSG::LayeredTextureBuffer::*processPreDeactivate_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            LayeredTextureBuffer_exposer.def( 
                "processPreDeactivate"
                , processPreDeactivate_function_type( &::OSG::LayeredTextureBuffer::processPreDeactivate )
                , ( bp::arg("pEnv"), bp::arg("index") ) );
        
        }
        { //::OSG::LayeredTextureBuffer::resizeBuffers
        
            typedef void ( ::OSG::LayeredTextureBuffer::*resizeBuffers_function_type )( ::OSG::UInt32,::OSG::UInt32 ) ;
            
            LayeredTextureBuffer_exposer.def( 
                "resizeBuffers"
                , resizeBuffers_function_type( &::OSG::LayeredTextureBuffer::resizeBuffers )
                , ( bp::arg("uiWidth"), bp::arg("uiHeight") ) );
        
        }
        { //::OSG::LayeredTextureBuffer::validate
        
            typedef void ( ::OSG::LayeredTextureBuffer::*validate_function_type )( ::OSG::DrawEnv * ) ;
            
            LayeredTextureBuffer_exposer.def( 
                "validate"
                , validate_function_type( &::OSG::LayeredTextureBuffer::validate )
                , ( bp::arg("pEnv") ) );
        
        }
        pyopensg::register_transit< OSG::LayeredTextureBuffer >::execute();
        bp::implicitly_convertible< OSG::LayeredTextureBuffer::ObjRecPtr, OSG::LayeredTextureBuffer* >();
        bp::implicitly_convertible< OSG::LayeredTextureBuffer::ObjRecPtr, OSG::LayeredTextureBuffer::ObjCPtr >();
        bp::implicitly_convertible< OSG::LayeredTextureBuffer::ObjRecPtr, OSG::FrameBufferAttachment* >();
        bp::implicitly_convertible< OSG::LayeredTextureBuffer::ObjRecPtr, OSG::FrameBufferAttachment::ObjRecPtr >();
        bp::implicitly_convertible<OSG::LayeredTextureBuffer::ObjRecPtr, OSG::FrameBufferAttachment::ObjCPtr>();
    }

}
