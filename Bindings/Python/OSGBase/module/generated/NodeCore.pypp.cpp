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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "NodeCore.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list NodeCore_getParents(OSG::NodeCore *self)
{
   boost::python::list result;
   OSG::MFParentFieldContainerPtr const & mf_data = self->getParents();
   const OSG::UInt32 size(mf_data.size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(mf_data[i]);
   }
   return result;
}

boost::python::list NodeCore_getMFParents(OSG::NodeCore *self)
{
   boost::python::list result;
   OSG::MFParentFieldContainerPtr const * mf_data = self->getMFParents();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_NodeCore_class(){

    { //::OSG::NodeCore
        typedef bp::class_< OSG::NodeCore, bp::bases< OSG::NodeCoreBase >, boost::noncopyable > NodeCore_exposer_t;
        NodeCore_exposer_t NodeCore_exposer = NodeCore_exposer_t( "NodeCore", bp::no_init );
        bp::scope NodeCore_scope( NodeCore_exposer );
        { //::OSG::NodeCore::accumulateMatrix
        
            typedef void ( ::OSG::NodeCore::*accumulateMatrix_function_type )( ::OSG::Matrix & ) ;
            
            NodeCore_exposer.def( 
                "accumulateMatrix"
                , accumulateMatrix_function_type( &::OSG::NodeCore::accumulateMatrix )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::NodeCore::adjustVolume
        
            typedef void ( ::OSG::NodeCore::*adjustVolume_function_type )( ::OSG::Volume & ) ;
            
            NodeCore_exposer.def( 
                "adjustVolume"
                , adjustVolume_function_type( &::OSG::NodeCore::adjustVolume )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::NodeCore::changed
        
            typedef void ( ::OSG::NodeCore::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            NodeCore_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::NodeCore::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::NodeCore::dump
        
            typedef void ( ::OSG::NodeCore::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            NodeCore_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::NodeCore::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::NodeCore::invalidateVolume
        
            typedef void ( ::OSG::NodeCore::*invalidateVolume_function_type )(  ) ;
            
            NodeCore_exposer.def( 
                "invalidateVolume"
                , invalidateVolume_function_type( &::OSG::NodeCore::invalidateVolume ) );
        
        }
        NodeCore_exposer.def("getParents",NodeCore_getParents);
        NodeCore_exposer.def("getMFParents",NodeCore_getMFParents);
        pyopensg::register_transit< OSG::NodeCore >::execute();
        bp::register_ptr_to_python< OSG::NodeCore::ObjRecPtr >();
        bp::implicitly_convertible< OSG::NodeCore::ObjRecPtr, OSG::NodeCore* >();
        bp::implicitly_convertible< OSG::NodeCore::ObjRecPtr, OSG::NodeCore::ObjCPtr >();
        bp::implicitly_convertible< OSG::NodeCore::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::NodeCore::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::NodeCore::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
    }

}
