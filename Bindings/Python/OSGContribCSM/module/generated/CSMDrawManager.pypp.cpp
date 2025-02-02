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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMDrawManager.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

OSG::FieldContainerRecPtr
wrapFindNamedComponent(OSG::CSMDrawManager* self, const OSG::Char8* szName)
{
   return OSG::FieldContainerRecPtr(self->findNamedComponent(szName));
}

}

void register_CSMDrawManager_class(){

    { //::OSG::CSMDrawManager
        typedef bp::class_< OSG::CSMDrawManager, OSG::CSMDrawManager::ObjRecPtr, boost::noncopyable > CSMDrawManager_exposer_t;
        CSMDrawManager_exposer_t CSMDrawManager_exposer = CSMDrawManager_exposer_t( "CSMDrawManager", bp::no_init );
        bp::scope CSMDrawManager_scope( CSMDrawManager_exposer );
        { //::OSG::CSMDrawManager::changed
        
            typedef void ( ::OSG::CSMDrawManager::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CSMDrawManager_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CSMDrawManager::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CSMDrawManager::dump
        
            typedef void ( ::OSG::CSMDrawManager::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CSMDrawManager_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CSMDrawManager::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::CSMDrawManager::frame
        
            typedef void ( ::OSG::CSMDrawManager::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            CSMDrawManager_exposer.def( 
                "frame"
                , frame_function_type( &::OSG::CSMDrawManager::frame )
                , ( bp::arg("oTime"), bp::arg("uiFrame") ) );
        
        }
        { //::OSG::CSMDrawManager::init
        
            typedef bool ( ::OSG::CSMDrawManager::*init_function_type )(  ) ;
            
            CSMDrawManager_exposer.def( 
                "init"
                , init_function_type( &::OSG::CSMDrawManager::init ) );
        
        }
        { //::OSG::CSMDrawManager::shutdown
        
            typedef void ( ::OSG::CSMDrawManager::*shutdown_function_type )(  ) ;
            
            CSMDrawManager_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::OSG::CSMDrawManager::shutdown ) );
        
        }
        pyopensg::register_transit< OSG::CSMDrawManager >::execute();
        bp::implicitly_convertible< OSG::CSMDrawManager::ObjRecPtr, OSG::CSMDrawManager* >();
        bp::implicitly_convertible< OSG::CSMDrawManager::ObjRecPtr, OSG::CSMDrawManager::ObjCPtr >();
        bp::implicitly_convertible< OSG::CSMDrawManager::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::CSMDrawManager::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CSMDrawManager::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
        CSMDrawManager_exposer.def("findNamedComponent", wrapFindNamedComponent, (bp::arg("szName")));
    }

}
