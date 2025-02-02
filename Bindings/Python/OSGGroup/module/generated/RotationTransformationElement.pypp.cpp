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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "RotationTransformationElement.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_RotationTransformationElement_class(){

    { //::OSG::RotationTransformationElement
        typedef bp::class_< OSG::RotationTransformationElement, bp::bases< OSG::RotationTransformationElementBase >, OSG::RotationTransformationElement::ObjRecPtr, boost::noncopyable > RotationTransformationElement_exposer_t;
        RotationTransformationElement_exposer_t RotationTransformationElement_exposer = RotationTransformationElement_exposer_t( "RotationTransformationElement", bp::no_init );
        bp::scope RotationTransformationElement_scope( RotationTransformationElement_exposer );
        { //::OSG::RotationTransformationElement::calcMatrix
        
            typedef void ( ::OSG::RotationTransformationElement::*calcMatrix_function_type )( ::OSG::Matrix & ) const;
            
            RotationTransformationElement_exposer.def( 
                "calcMatrix"
                , calcMatrix_function_type( &::OSG::RotationTransformationElement::calcMatrix )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::RotationTransformationElement::changed
        
            typedef void ( ::OSG::RotationTransformationElement::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            RotationTransformationElement_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::RotationTransformationElement::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::RotationTransformationElement::dump
        
            typedef void ( ::OSG::RotationTransformationElement::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            RotationTransformationElement_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::RotationTransformationElement::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::RotationTransformationElement >::execute();
        bp::implicitly_convertible< OSG::RotationTransformationElement::ObjRecPtr, OSG::RotationTransformationElement* >();
        bp::implicitly_convertible< OSG::RotationTransformationElement::ObjRecPtr, OSG::RotationTransformationElement::ObjCPtr >();
        bp::implicitly_convertible< OSG::RotationTransformationElement::ObjRecPtr, OSG::TransformationElement* >();
        bp::implicitly_convertible< OSG::RotationTransformationElement::ObjRecPtr, OSG::TransformationElement::ObjRecPtr >();
        bp::implicitly_convertible<OSG::RotationTransformationElement::ObjRecPtr, OSG::TransformationElement::ObjCPtr>();
    }

}
