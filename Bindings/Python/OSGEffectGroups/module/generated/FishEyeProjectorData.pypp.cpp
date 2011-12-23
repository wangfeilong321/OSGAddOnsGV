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
#include "FishEyeProjectorData.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FishEyeProjectorData_class(){

    { //::OSG::FishEyeProjectorData
        typedef bp::class_< OSG::FishEyeProjectorData, bp::bases< OSG::FishEyeProjectorDataBase >, OSG::FishEyeProjectorData::ObjRecPtr, boost::noncopyable > FishEyeProjectorData_exposer_t;
        FishEyeProjectorData_exposer_t FishEyeProjectorData_exposer = FishEyeProjectorData_exposer_t( "FishEyeProjectorData", bp::no_init );
        bp::scope FishEyeProjectorData_scope( FishEyeProjectorData_exposer );
        { //::OSG::FishEyeProjectorData::changed
        
            typedef void ( ::OSG::FishEyeProjectorData::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            FishEyeProjectorData_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::FishEyeProjectorData::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::FishEyeProjectorData::dump
        
            typedef void ( ::OSG::FishEyeProjectorData::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            FishEyeProjectorData_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::FishEyeProjectorData::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::FishEyeProjectorData >::execute();
        bp::implicitly_convertible< OSG::FishEyeProjectorData::ObjRecPtr, OSG::FishEyeProjectorData* >();
        bp::implicitly_convertible< OSG::FishEyeProjectorData::ObjRecPtr, OSG::FishEyeProjectorData::ObjCPtr >();
        bp::implicitly_convertible< OSG::FishEyeProjectorData::ObjRecPtr, OSG::StageData* >();
        bp::implicitly_convertible< OSG::FishEyeProjectorData::ObjRecPtr, OSG::StageData::ObjRecPtr >();
        bp::implicitly_convertible<OSG::FishEyeProjectorData::ObjRecPtr, OSG::StageData::ObjCPtr>();
    }

}
