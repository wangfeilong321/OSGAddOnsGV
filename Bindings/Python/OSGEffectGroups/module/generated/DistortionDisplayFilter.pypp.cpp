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
#include "DistortionDisplayFilter.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DistortionDisplayFilter_class(){

    { //::OSG::DistortionDisplayFilter
        typedef bp::class_< OSG::DistortionDisplayFilter, bp::bases< OSG::DistortionDisplayFilterBase >, OSG::DistortionDisplayFilter::ObjRecPtr, boost::noncopyable > DistortionDisplayFilter_exposer_t;
        DistortionDisplayFilter_exposer_t DistortionDisplayFilter_exposer = DistortionDisplayFilter_exposer_t( "DistortionDisplayFilter", bp::no_init );
        bp::scope DistortionDisplayFilter_scope( DistortionDisplayFilter_exposer );
        { //::OSG::DistortionDisplayFilter::changed
        
            typedef void ( ::OSG::DistortionDisplayFilter::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DistortionDisplayFilter_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DistortionDisplayFilter::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::DistortionDisplayFilter::dump
        
            typedef void ( ::OSG::DistortionDisplayFilter::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DistortionDisplayFilter_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DistortionDisplayFilter::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::DistortionDisplayFilter::process
        
            typedef void ( ::OSG::DistortionDisplayFilter::*process_function_type )( ::OSG::DisplayFilterStageData * ) ;
            
            DistortionDisplayFilter_exposer.def( 
                "process"
                , process_function_type( &::OSG::DistortionDisplayFilter::process )
                , ( bp::arg("pData") ) );
        
        }
        pyopensg::register_transit< OSG::DistortionDisplayFilter >::execute();
        bp::implicitly_convertible< OSG::DistortionDisplayFilter::ObjRecPtr, OSG::DistortionDisplayFilter* >();
        bp::implicitly_convertible< OSG::DistortionDisplayFilter::ObjRecPtr, OSG::DistortionDisplayFilter::ObjCPtr >();
        bp::implicitly_convertible< OSG::DistortionDisplayFilter::ObjRecPtr, OSG::DisplayFilter* >();
        bp::implicitly_convertible< OSG::DistortionDisplayFilter::ObjRecPtr, OSG::DisplayFilter::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DistortionDisplayFilter::ObjRecPtr, OSG::DisplayFilter::ObjCPtr>();
    }

}
