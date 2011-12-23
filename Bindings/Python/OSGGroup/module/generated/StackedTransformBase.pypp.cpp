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
#include "StackedTransformBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list StackedTransformBase_getMFTransformElements(OSG::StackedTransformBase *self)
{
   boost::python::list result;
   OSG::MFUnrecChildTransformationElementPtr const * mf_data = self->getMFTransformElements();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::TransformationElement::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_StackedTransformBase_class(){

    { //::OSG::StackedTransformBase
        typedef bp::class_< OSG::StackedTransformBase, bp::bases< ::OSG::Group >, boost::noncopyable > StackedTransformBase_exposer_t;
        StackedTransformBase_exposer_t StackedTransformBase_exposer = StackedTransformBase_exposer_t( "StackedTransformBase", bp::no_init );
        bp::scope StackedTransformBase_scope( StackedTransformBase_exposer );
        bp::scope().attr("TransformElementsFieldId") = (int)OSG::StackedTransformBase::TransformElementsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::StackedTransformBase::NextFieldId;
        { //::OSG::StackedTransformBase::assignTransformElements
        
            typedef void ( ::OSG::StackedTransformBase::*assignTransformElements_function_type )( ::OSG::MFUnrecChildTransformationElementPtr const & ) ;
            
            StackedTransformBase_exposer.def( 
                "assignTransformElements"
                , assignTransformElements_function_type( &::OSG::StackedTransformBase::assignTransformElements )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StackedTransformBase::clearTransformElements
        
            typedef void ( ::OSG::StackedTransformBase::*clearTransformElements_function_type )(  ) ;
            
            StackedTransformBase_exposer.def( 
                "clearTransformElements"
                , clearTransformElements_function_type( &::OSG::StackedTransformBase::clearTransformElements ) );
        
        }
        { //::OSG::StackedTransformBase::copyFromBin
        
            typedef void ( ::OSG::StackedTransformBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StackedTransformBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::StackedTransformBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StackedTransformBase::copyToBin
        
            typedef void ( ::OSG::StackedTransformBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StackedTransformBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::StackedTransformBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StackedTransformBase::create
        
            typedef ::OSG::StackedTransformTransitPtr ( *create_function_type )(  );
            
            StackedTransformBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::StackedTransformBase::create ) );
        
        }
        { //::OSG::StackedTransformBase::createDependent
        
            typedef ::OSG::StackedTransformTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            StackedTransformBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::StackedTransformBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::StackedTransformBase::createLocal
        
            typedef ::OSG::StackedTransformTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            StackedTransformBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::StackedTransformBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::StackedTransformBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::StackedTransformBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            StackedTransformBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::StackedTransformBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::StackedTransformBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            StackedTransformBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::StackedTransformBase::getClassGroupId ) );
        
        }
        { //::OSG::StackedTransformBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            StackedTransformBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::StackedTransformBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::StackedTransformBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            StackedTransformBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::StackedTransformBase::getClassTypeId ) );
        
        }
        { //::OSG::StackedTransformBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::StackedTransformBase::*getContainerSize_function_type )(  ) const;
            
            StackedTransformBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::StackedTransformBase::getContainerSize ) );
        
        }
        { //::OSG::StackedTransformBase::getTransformElements
        
            typedef ::OSG::TransformationElement * ( ::OSG::StackedTransformBase::*getTransformElements_function_type )( ::OSG::UInt32 const ) const;
            
            StackedTransformBase_exposer.def( 
                "getTransformElements"
                , getTransformElements_function_type( &::OSG::StackedTransformBase::getTransformElements )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StackedTransformBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::StackedTransformBase::*getType_function_type )(  ) ;
            
            StackedTransformBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StackedTransformBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StackedTransformBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::StackedTransformBase::*getType_function_type )(  ) const;
            
            StackedTransformBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StackedTransformBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StackedTransformBase::insertIntoTransformElements
        
            typedef void ( ::OSG::StackedTransformBase::*insertIntoTransformElements_function_type )( ::OSG::UInt32,::OSG::TransformationElement * const ) ;
            
            StackedTransformBase_exposer.def( 
                "insertIntoTransformElements"
                , insertIntoTransformElements_function_type( &::OSG::StackedTransformBase::insertIntoTransformElements )
                , ( bp::arg("uiIndex"), bp::arg("value") ) );
        
        }
        { //::OSG::StackedTransformBase::pushToTransformElements
        
            typedef void ( ::OSG::StackedTransformBase::*pushToTransformElements_function_type )( ::OSG::TransformationElement * const ) ;
            
            StackedTransformBase_exposer.def( 
                "pushToTransformElements"
                , pushToTransformElements_function_type( &::OSG::StackedTransformBase::pushToTransformElements )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StackedTransformBase::removeFromTransformElements
        
            typedef void ( ::OSG::StackedTransformBase::*removeFromTransformElements_function_type )( ::OSG::UInt32 ) ;
            
            StackedTransformBase_exposer.def( 
                "removeFromTransformElements"
                , removeFromTransformElements_function_type( &::OSG::StackedTransformBase::removeFromTransformElements )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::StackedTransformBase::removeObjFromTransformElements
        
            typedef void ( ::OSG::StackedTransformBase::*removeObjFromTransformElements_function_type )( ::OSG::TransformationElement * const ) ;
            
            StackedTransformBase_exposer.def( 
                "removeObjFromTransformElements"
                , removeObjFromTransformElements_function_type( &::OSG::StackedTransformBase::removeObjFromTransformElements )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StackedTransformBase::replaceInTransformElements
        
            typedef void ( ::OSG::StackedTransformBase::*replaceInTransformElements_function_type )( ::OSG::UInt32,::OSG::TransformationElement * const ) ;
            
            StackedTransformBase_exposer.def( 
                "replaceInTransformElements"
                , replaceInTransformElements_function_type( &::OSG::StackedTransformBase::replaceInTransformElements )
                , ( bp::arg("uiIndex"), bp::arg("value") ) );
        
        }
        { //::OSG::StackedTransformBase::replaceObjInTransformElements
        
            typedef void ( ::OSG::StackedTransformBase::*replaceObjInTransformElements_function_type )( ::OSG::TransformationElement * const,::OSG::TransformationElement * const ) ;
            
            StackedTransformBase_exposer.def( 
                "replaceObjInTransformElements"
                , replaceObjInTransformElements_function_type( &::OSG::StackedTransformBase::replaceObjInTransformElements )
                , ( bp::arg("pOldElem"), bp::arg("pNewElem") ) );
        
        }
        StackedTransformBase_exposer.staticmethod( "create" );
        StackedTransformBase_exposer.staticmethod( "createDependent" );
        StackedTransformBase_exposer.staticmethod( "createLocal" );
        StackedTransformBase_exposer.staticmethod( "getClassGroupId" );
        StackedTransformBase_exposer.staticmethod( "getClassType" );
        StackedTransformBase_exposer.staticmethod( "getClassTypeId" );
        StackedTransformBase_exposer.def("getMFTransformElements",StackedTransformBase_getMFTransformElements);
    }

}
