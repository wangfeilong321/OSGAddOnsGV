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
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShaderProgramVariableChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

static boost::python::tuple getUniformVariable_e6242563d46634df9e494a9f4e33409c( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Point<float, 3u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_a6e8426fc460a269daa7472087365633( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Point<float, 2u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_aa98d2223a91f8bbf3d875f83de05ad6( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::TransformationMatrix<float> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_366edb03ba369150c82ebedc4921b3ed( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Vector<float, 4u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_60b381ed01db71deb2272b93eca5838a( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Vector<float, 3u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_9f4fe8143c96255e75fa0b4e3c9c59ee( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Vector<float, 2u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_22106cb76b970b13e59deb689cec8e13( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    float value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_a9260991442ab7628b1d9b6f027abd2f( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    int value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_d716cfde6606dfb5f174515260ea162e( ::OSG::ShaderProgramVariableChunk & inst, ::OSG::Char8 const * name ){
    bool value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

namespace
{

void destroyedCallback(bp::object callable, OSG::FieldContainer* fc,
                       const OSG::UInt64 i)
{
   callable(fc, i);
}

void wrapAddDestroyedFunctor(OSG::ShaderProgramVariableChunk* self, bp::object func,
                             const std::string& createSymbol)
{
   self->addDestroyedFunctor(boost::bind(destroyedCallback, func, _1, _2),
                             createSymbol);
}

}

void register_ShaderProgramVariableChunk_class(){

    { //::OSG::ShaderProgramVariableChunk
        typedef bp::class_< OSG::ShaderProgramVariableChunk, bp::bases< OSG::ShaderProgramVariableChunkBase >, OSG::ShaderProgramVariableChunk::ObjRecPtr, boost::noncopyable > ShaderProgramVariableChunk_exposer_t;
        ShaderProgramVariableChunk_exposer_t ShaderProgramVariableChunk_exposer = ShaderProgramVariableChunk_exposer_t( "ShaderProgramVariableChunk", bp::no_init );
        bp::scope ShaderProgramVariableChunk_scope( ShaderProgramVariableChunk_exposer );
        { //::OSG::ShaderProgramVariableChunk::addParent
        
            typedef void ( ::OSG::ShaderProgramVariableChunk::*addParent_function_type )( ::OSG::FieldContainer * const,::OSG::UInt16 ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addParent"
                , addParent_function_type( &::OSG::ShaderProgramVariableChunk::addParent )
                , ( bp::arg("pParent"), bp::arg("uiParentFieldId") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformBlock
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformBlock_function_type )( ::OSG::Char8 const *,::OSG::UInt32 ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformBlock"
                , addUniformBlock_function_type( &::OSG::ShaderProgramVariableChunk::addUniformBlock )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Pnt3f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Pnt2f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Matrix const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec4f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec3f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec2f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Real32 const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Int32 const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,bool const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::changed
        
            typedef void ( ::OSG::ShaderProgramVariableChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShaderProgramVariableChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::clearDestroyedFunctors
        
            typedef void ( ::OSG::ShaderProgramVariableChunk::*clearDestroyedFunctors_function_type )(  ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "clearDestroyedFunctors"
                , clearDestroyedFunctors_function_type( &::OSG::ShaderProgramVariableChunk::clearDestroyedFunctors ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::clearUniformVariables
        
            typedef void ( ::OSG::ShaderProgramVariableChunk::*clearUniformVariables_function_type )(  ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "clearUniformVariables"
                , clearUniformVariables_function_type( &::OSG::ShaderProgramVariableChunk::clearUniformVariables ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::dump
        
            typedef void ( ::OSG::ShaderProgramVariableChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShaderProgramVariableChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShaderProgramVariableChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getChunkId
        
            typedef ::OSG::UInt16 ( ::OSG::ShaderProgramVariableChunk::*getChunkId_function_type )(  ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "getChunkId"
                , getChunkId_function_type( &::OSG::ShaderProgramVariableChunk::getChunkId ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::ShaderProgramVariableChunk::*getClass_function_type )(  ) const;
            
            ShaderProgramVariableChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::ShaderProgramVariableChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::ShaderProgramVariableChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::ShaderProgramVariableChunk::getStaticClassId ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformBlock
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*getUniformBlock_function_type )( ::OSG::Char8 const *,::OSG::UInt32 & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformBlock"
                , getUniformBlock_function_type( &::OSG::ShaderProgramVariableChunk::getUniformBlock )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Point_less__float_comma__3u__greater__function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_Point_less__float_comma__3u__greater_"
                , getUniformVariable_Point_less__float_comma__3u__greater__function_type( &getUniformVariable_e6242563d46634df9e494a9f4e33409c )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Point_less__float_comma__2u__greater__function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_Point_less__float_comma__2u__greater_"
                , getUniformVariable_Point_less__float_comma__2u__greater__function_type( &getUniformVariable_a6e8426fc460a269daa7472087365633 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_TransformationMatrix_less__float__greater__function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_TransformationMatrix_less__float__greater_"
                , getUniformVariable_TransformationMatrix_less__float__greater__function_type( &getUniformVariable_aa98d2223a91f8bbf3d875f83de05ad6 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Vector_less__float_comma__4u__greater__function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_Vector_less__float_comma__4u__greater_"
                , getUniformVariable_Vector_less__float_comma__4u__greater__function_type( &getUniformVariable_366edb03ba369150c82ebedc4921b3ed )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Vector_less__float_comma__3u__greater__function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_Vector_less__float_comma__3u__greater_"
                , getUniformVariable_Vector_less__float_comma__3u__greater__function_type( &getUniformVariable_60b381ed01db71deb2272b93eca5838a )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Vector_less__float_comma__2u__greater__function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_Vector_less__float_comma__2u__greater_"
                , getUniformVariable_Vector_less__float_comma__2u__greater__function_type( &getUniformVariable_9f4fe8143c96255e75fa0b4e3c9c59ee )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_float_function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_float"
                , getUniformVariable_float_function_type( &getUniformVariable_22106cb76b970b13e59deb689cec8e13 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_int_function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_int"
                , getUniformVariable_int_function_type( &getUniformVariable_a9260991442ab7628b1d9b6f027abd2f )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_bool_function_type )( ::OSG::ShaderProgramVariableChunk &,::OSG::Char8 const * );
            
            ShaderProgramVariableChunk_exposer.def( 
                "getUniformVariable_bool"
                , getUniformVariable_bool_function_type( &getUniformVariable_d716cfde6606dfb5f174515260ea162e )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::getVariableId
        
            typedef ::OSG::UInt16 ( ::OSG::ShaderProgramVariableChunk::*getVariableId_function_type )(  ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "getVariableId"
                , getVariableId_function_type( &::OSG::ShaderProgramVariableChunk::getVariableId ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::subParent
        
            typedef void ( ::OSG::ShaderProgramVariableChunk::*subParent_function_type )( ::OSG::FieldContainer * const ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "subParent"
                , subParent_function_type( &::OSG::ShaderProgramVariableChunk::subParent )
                , ( bp::arg("pParent") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::subUniformBlock
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*subUniformBlock_function_type )( ::OSG::Char8 const * ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "subUniformBlock"
                , subUniformBlock_function_type( &::OSG::ShaderProgramVariableChunk::subUniformBlock )
                , ( bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::subUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*subUniformVariable_function_type )( ::OSG::Char8 const * ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "subUniformVariable"
                , subUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::subUniformVariable )
                , ( bp::arg("name") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformBlock
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformBlock_function_type )( ::OSG::Char8 const *,::OSG::UInt32 ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformBlock"
                , updateUniformBlock_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformBlock )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Pnt3f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Pnt2f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Matrix const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec4f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec3f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec2f const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Real32 const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Int32 const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ShaderProgramVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::ShaderProgramVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,bool const & ) ;
            
            ShaderProgramVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::ShaderProgramVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        ShaderProgramVariableChunk_exposer.staticmethod( "getStaticClass" );
        ShaderProgramVariableChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::ShaderProgramVariableChunk >::execute();
        bp::implicitly_convertible< OSG::ShaderProgramVariableChunk::ObjRecPtr, OSG::ShaderProgramVariableChunk* >();
        bp::implicitly_convertible< OSG::ShaderProgramVariableChunk::ObjRecPtr, OSG::ShaderProgramVariableChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShaderProgramVariableChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::ShaderProgramVariableChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShaderProgramVariableChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
        ShaderProgramVariableChunk_exposer.def("addDestroyedFunctor", wrapAddDestroyedFunctor,
                     (bp::arg("func"), bp::arg("createSymbol")));
    }

}
