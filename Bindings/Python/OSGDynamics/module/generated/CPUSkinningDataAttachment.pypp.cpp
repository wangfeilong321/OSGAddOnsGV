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
#include "CPUSkinningDataAttachment.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CPUSkinningDataAttachment_class(){

    { //::OSG::CPUSkinningDataAttachment
        typedef bp::class_< OSG::CPUSkinningDataAttachment, bp::bases< OSG::CPUSkinningDataAttachmentBase >, OSG::CPUSkinningDataAttachment::ObjRecPtr, boost::noncopyable > CPUSkinningDataAttachment_exposer_t;
        CPUSkinningDataAttachment_exposer_t CPUSkinningDataAttachment_exposer = CPUSkinningDataAttachment_exposer_t( "CPUSkinningDataAttachment", bp::no_init );
        bp::scope CPUSkinningDataAttachment_scope( CPUSkinningDataAttachment_exposer );
        { //::OSG::CPUSkinningDataAttachment::changed
        
            typedef void ( ::OSG::CPUSkinningDataAttachment::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CPUSkinningDataAttachment_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CPUSkinningDataAttachment::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CPUSkinningDataAttachment::dump
        
            typedef void ( ::OSG::CPUSkinningDataAttachment::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CPUSkinningDataAttachment_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CPUSkinningDataAttachment::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::CPUSkinningDataAttachment >::execute();
        bp::implicitly_convertible< OSG::CPUSkinningDataAttachment::ObjRecPtr, OSG::CPUSkinningDataAttachment* >();
        bp::implicitly_convertible< OSG::CPUSkinningDataAttachment::ObjRecPtr, OSG::CPUSkinningDataAttachment::ObjCPtr >();
        bp::implicitly_convertible< OSG::CPUSkinningDataAttachment::ObjRecPtr, OSG::Attachment* >();
        bp::implicitly_convertible< OSG::CPUSkinningDataAttachment::ObjRecPtr, OSG::Attachment::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CPUSkinningDataAttachment::ObjRecPtr, OSG::Attachment::ObjCPtr>();
    }

}
