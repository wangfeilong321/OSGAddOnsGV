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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TranslationTransformationElement.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TranslationTransformationElement_class(){

    { //::OSG::TranslationTransformationElement
        typedef bp::class_< OSG::TranslationTransformationElement, bp::bases< OSG::TranslationTransformationElementBase >, OSG::TranslationTransformationElement::ObjRecPtr, boost::noncopyable > TranslationTransformationElement_exposer_t;
        TranslationTransformationElement_exposer_t TranslationTransformationElement_exposer = TranslationTransformationElement_exposer_t( "TranslationTransformationElement", bp::no_init );
        bp::scope TranslationTransformationElement_scope( TranslationTransformationElement_exposer );
        { //::OSG::TranslationTransformationElement::calcMatrix
        
            typedef void ( ::OSG::TranslationTransformationElement::*calcMatrix_function_type )( ::OSG::Matrix & ) const;
            
            TranslationTransformationElement_exposer.def( 
                "calcMatrix"
                , calcMatrix_function_type( &::OSG::TranslationTransformationElement::calcMatrix )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TranslationTransformationElement::changed
        
            typedef void ( ::OSG::TranslationTransformationElement::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TranslationTransformationElement_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TranslationTransformationElement::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::TranslationTransformationElement::dump
        
            typedef void ( ::OSG::TranslationTransformationElement::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TranslationTransformationElement_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TranslationTransformationElement::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::TranslationTransformationElement >::execute();
        bp::implicitly_convertible< OSG::TranslationTransformationElement::ObjRecPtr, OSG::TranslationTransformationElement* >();
        bp::implicitly_convertible< OSG::TranslationTransformationElement::ObjRecPtr, OSG::TranslationTransformationElement::ObjCPtr >();
        bp::implicitly_convertible< OSG::TranslationTransformationElement::ObjRecPtr, OSG::TransformationElement* >();
        bp::implicitly_convertible< OSG::TranslationTransformationElement::ObjRecPtr, OSG::TransformationElement::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TranslationTransformationElement::ObjRecPtr, OSG::TransformationElement::ObjCPtr>();
    }

}
