// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Array>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Geometry>
#include <osg/Object>
#include <osg/PrimitiveSet>
#include <osg/State>

TYPE_NAME_ALIAS(std::vector< osg::Geometry::ArrayData >, osg::Geometry::ArrayList);

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osg::PrimitiveSet > >, osg::Geometry::PrimitiveSetList);

BEGIN_ENUM_REFLECTOR(osg::Geometry::AttributeBinding)
	EnumLabel(osg::Geometry::BIND_OFF);
	EnumLabel(osg::Geometry::BIND_OVERALL);
	EnumLabel(osg::Geometry::BIND_PER_PRIMITIVE_SET);
	EnumLabel(osg::Geometry::BIND_PER_PRIMITIVE);
	EnumLabel(osg::Geometry::BIND_PER_VERTEX);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Geometry)
	BaseType(osg::Drawable);
	Constructor0();
	ConstructorWithDefaults2(IN, const osg::Geometry &, geometry, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method0(osg::Geometry *, asGeometry);
	Method0(const osg::Geometry *, asGeometry);
	Method0(bool, empty);
	Method1(void, setVertexArray, IN, osg::Array *, array);
	Method0(osg::Array *, getVertexArray);
	Method0(const osg::Array *, getVertexArray);
	Method1(void, setVertexIndices, IN, osg::IndexArray *, array);
	Method0(osg::IndexArray *, getVertexIndices);
	Method0(const osg::IndexArray *, getVertexIndices);
	Method1(void, setVertexData, IN, const osg::Geometry::ArrayData &, arrayData);
	Method0(osg::Geometry::ArrayData &, getVertexData);
	Method0(const osg::Geometry::ArrayData &, getVertexData);
	Method1(void, setNormalBinding, IN, osg::Geometry::AttributeBinding, ab);
	Method0(osg::Geometry::AttributeBinding, getNormalBinding);
	Method1(void, setNormalArray, IN, osg::Vec3Array *, array);
	Method0(osg::Vec3Array *, getNormalArray);
	Method0(const osg::Vec3Array *, getNormalArray);
	Method1(void, setNormalIndices, IN, osg::IndexArray *, array);
	Method0(osg::IndexArray *, getNormalIndices);
	Method0(const osg::IndexArray *, getNormalIndices);
	Method1(void, setNormalData, IN, const osg::Geometry::Vec3ArrayData &, arrayData);
	Method0(osg::Geometry::Vec3ArrayData &, getNormalData);
	Method0(const osg::Geometry::Vec3ArrayData &, getNormalData);
	Method1(void, setColorBinding, IN, osg::Geometry::AttributeBinding, ab);
	Method0(osg::Geometry::AttributeBinding, getColorBinding);
	Method1(void, setColorArray, IN, osg::Array *, array);
	Method0(osg::Array *, getColorArray);
	Method0(const osg::Array *, getColorArray);
	Method1(void, setColorIndices, IN, osg::IndexArray *, array);
	Method0(osg::IndexArray *, getColorIndices);
	Method0(const osg::IndexArray *, getColorIndices);
	Method1(void, setColorData, IN, const osg::Geometry::ArrayData &, arrayData);
	Method0(osg::Geometry::ArrayData &, getColorData);
	Method0(const osg::Geometry::ArrayData &, getColorData);
	Method1(void, setSecondaryColorBinding, IN, osg::Geometry::AttributeBinding, ab);
	Method0(osg::Geometry::AttributeBinding, getSecondaryColorBinding);
	Method1(void, setSecondaryColorArray, IN, osg::Array *, array);
	Method0(osg::Array *, getSecondaryColorArray);
	Method0(const osg::Array *, getSecondaryColorArray);
	Method1(void, setSecondaryColorIndices, IN, osg::IndexArray *, array);
	Method0(osg::IndexArray *, getSecondaryColorIndices);
	Method0(const osg::IndexArray *, getSecondaryColorIndices);
	Method1(void, setSecondaryColorData, IN, const osg::Geometry::ArrayData &, arrayData);
	Method0(osg::Geometry::ArrayData &, getSecondaryColorData);
	Method0(const osg::Geometry::ArrayData &, getSecondaryColorData);
	Method1(void, setFogCoordBinding, IN, osg::Geometry::AttributeBinding, ab);
	Method0(osg::Geometry::AttributeBinding, getFogCoordBinding);
	Method1(void, setFogCoordArray, IN, osg::Array *, array);
	Method0(osg::Array *, getFogCoordArray);
	Method0(const osg::Array *, getFogCoordArray);
	Method1(void, setFogCoordIndices, IN, osg::IndexArray *, array);
	Method0(osg::IndexArray *, getFogCoordIndices);
	Method0(const osg::IndexArray *, getFogCoordIndices);
	Method1(void, setFogCoordData, IN, const osg::Geometry::ArrayData &, arrayData);
	Method0(osg::Geometry::ArrayData &, getFogCoordData);
	Method0(const osg::Geometry::ArrayData &, getFogCoordData);
	Method2(void, setTexCoordArray, IN, unsigned int, unit, IN, osg::Array *, x);
	Method1(osg::Array *, getTexCoordArray, IN, unsigned int, unit);
	Method1(const osg::Array *, getTexCoordArray, IN, unsigned int, unit);
	Method2(void, setTexCoordIndices, IN, unsigned int, unit, IN, osg::IndexArray *, x);
	Method1(osg::IndexArray *, getTexCoordIndices, IN, unsigned int, unit);
	Method1(const osg::IndexArray *, getTexCoordIndices, IN, unsigned int, unit);
	Method2(void, setTexCoordData, IN, unsigned int, index, IN, const osg::Geometry::ArrayData &, arrayData);
	Method1(osg::Geometry::ArrayData &, getTexCoordData, IN, unsigned int, index);
	Method1(const osg::Geometry::ArrayData &, getTexCoordData, IN, unsigned int, index);
	Method0(unsigned int, getNumTexCoordArrays);
	Method0(osg::Geometry::ArrayList &, getTexCoordArrayList);
	Method0(const osg::Geometry::ArrayList &, getTexCoordArrayList);
	Method2(void, setVertexAttribArray, IN, unsigned int, index, IN, osg::Array *, array);
	Method1(osg::Array *, getVertexAttribArray, IN, unsigned int, index);
	Method1(const osg::Array *, getVertexAttribArray, IN, unsigned int, index);
	Method2(void, setVertexAttribIndices, IN, unsigned int, index, IN, osg::IndexArray *, array);
	Method1(osg::IndexArray *, getVertexAttribIndices, IN, unsigned int, index);
	Method1(const osg::IndexArray *, getVertexAttribIndices, IN, unsigned int, index);
	Method2(void, setVertexAttribBinding, IN, unsigned int, index, IN, osg::Geometry::AttributeBinding, ab);
	Method1(osg::Geometry::AttributeBinding, getVertexAttribBinding, IN, unsigned int, index);
	Method2(void, setVertexAttribNormalize, IN, unsigned int, index, IN, GLboolean, norm);
	Method1(GLboolean, getVertexAttribNormalize, IN, unsigned int, index);
	Method2(void, setVertexAttribData, IN, unsigned int, index, IN, const osg::Geometry::ArrayData &, arrayData);
	Method1(osg::Geometry::ArrayData &, getVertexAttribData, IN, unsigned int, index);
	Method1(const osg::Geometry::ArrayData &, getVertexAttribData, IN, unsigned int, index);
	Method0(unsigned int, getNumVertexAttribArrays);
	Method0(osg::Geometry::ArrayList &, getVertexAttribArrayList);
	Method0(const osg::Geometry::ArrayList &, getVertexAttribArrayList);
	Method1(void, setPrimitiveSetList, IN, const osg::Geometry::PrimitiveSetList &, primitives);
	Method0(osg::Geometry::PrimitiveSetList &, getPrimitiveSetList);
	Method0(const osg::Geometry::PrimitiveSetList &, getPrimitiveSetList);
	Method0(unsigned int, getNumPrimitiveSets);
	Method1(osg::PrimitiveSet *, getPrimitiveSet, IN, unsigned int, pos);
	Method1(const osg::PrimitiveSet *, getPrimitiveSet, IN, unsigned int, pos);
	Method1(bool, addPrimitiveSet, IN, osg::PrimitiveSet *, primitiveset);
	Method2(bool, setPrimitiveSet, IN, unsigned int, i, IN, osg::PrimitiveSet *, primitiveset);
	Method2(bool, insertPrimitiveSet, IN, unsigned int, i, IN, osg::PrimitiveSet *, primitiveset);
	MethodWithDefaults2(bool, removePrimitiveSet, IN, unsigned int, i, , IN, unsigned int, numElementsToRemove, 1);
	Method1(unsigned int, getPrimitiveSetIndex, IN, const osg::PrimitiveSet *, primitiveset);
	Method1(void, setFastPathHint, IN, bool, on);
	Method0(bool, getFastPathHint);
	Method0(bool, areFastPathsUsed);
	Method0(bool, computeFastPathsUsed);
	Method0(bool, verifyBindings);
	Method0(void, computeCorrectBindingsAndArraySizes);
	Method0(bool, suitableForOptimization);
	Method1(void, copyToAndOptimize, IN, osg::Geometry &, target);
	Method0(void, computeInternalOptimizedGeometry);
	Method0(void, removeInternalOptimizedGeometry);
	Method1(void, setInternalOptimizedGeometry, IN, osg::Geometry *, geometry);
	Method0(osg::Geometry *, getInternalOptimizedGeometry);
	Method0(const osg::Geometry *, getInternalOptimizedGeometry);
	Method0(unsigned int, getGLObjectSizeHint);
	Method1(void, drawImplementation, IN, osg::State &, state);
	Method1(bool, supports, IN, const osg::Drawable::AttributeFunctor &, x);
	Method1(void, accept, IN, osg::Drawable::AttributeFunctor &, af);
	Method1(bool, supports, IN, const osg::Drawable::ConstAttributeFunctor &, x);
	Method1(void, accept, IN, osg::Drawable::ConstAttributeFunctor &, af);
	Method1(bool, supports, IN, const osg::PrimitiveFunctor &, x);
	Method1(void, accept, IN, osg::PrimitiveFunctor &, pf);
	Method1(bool, supports, IN, const osg::PrimitiveIndexFunctor &, x);
	Method1(void, accept, IN, osg::PrimitiveIndexFunctor &, pf);
	Property(osg::Array *, ColorArray);
	Property(osg::Geometry::AttributeBinding, ColorBinding);
	Property(const osg::Geometry::ArrayData &, ColorData);
	Property(osg::IndexArray *, ColorIndices);
	Property(bool, FastPathHint);
	Property(osg::Array *, FogCoordArray);
	Property(osg::Geometry::AttributeBinding, FogCoordBinding);
	Property(const osg::Geometry::ArrayData &, FogCoordData);
	Property(osg::IndexArray *, FogCoordIndices);
	ReadOnlyProperty(unsigned int, GLObjectSizeHint);
	Property(osg::Geometry *, InternalOptimizedGeometry);
	Property(osg::Vec3Array *, NormalArray);
	Property(osg::Geometry::AttributeBinding, NormalBinding);
	Property(const osg::Geometry::Vec3ArrayData &, NormalData);
	Property(osg::IndexArray *, NormalIndices);
	ArrayProperty_GSA(osg::PrimitiveSet *, PrimitiveSet, PrimitiveSets, unsigned int, bool);
	Property(const osg::Geometry::PrimitiveSetList &, PrimitiveSetList);
	Property(osg::Array *, SecondaryColorArray);
	Property(osg::Geometry::AttributeBinding, SecondaryColorBinding);
	Property(const osg::Geometry::ArrayData &, SecondaryColorData);
	Property(osg::IndexArray *, SecondaryColorIndices);
	ArrayProperty_G(osg::Array *, TexCoordArray, TexCoordArrays, unsigned int, void);
	ReadOnlyProperty(osg::Geometry::ArrayList &, TexCoordArrayList);
	IndexedProperty1(const osg::Geometry::ArrayData &, TexCoordData, unsigned int, index);
	IndexedProperty1(osg::IndexArray *, TexCoordIndices, unsigned int, unit);
	Property(osg::Array *, VertexArray);
	ArrayProperty_G(osg::Array *, VertexAttribArray, VertexAttribArrays, unsigned int, void);
	ReadOnlyProperty(osg::Geometry::ArrayList &, VertexAttribArrayList);
	IndexedProperty1(osg::Geometry::AttributeBinding, VertexAttribBinding, unsigned int, index);
	IndexedProperty1(const osg::Geometry::ArrayData &, VertexAttribData, unsigned int, index);
	IndexedProperty1(osg::IndexArray *, VertexAttribIndices, unsigned int, index);
	IndexedProperty1(GLboolean, VertexAttribNormalize, unsigned int, index);
	Property(const osg::Geometry::ArrayData &, VertexData);
	Property(osg::IndexArray *, VertexIndices);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::Geometry::ArrayData)
	Constructor0();
	ConstructorWithDefaults2(IN, const osg::Geometry::ArrayData &, data, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	ConstructorWithDefaults3(IN, osg::Array *, a, , IN, osg::Geometry::AttributeBinding, b, , IN, GLboolean, n, GL_FALSE);
	ConstructorWithDefaults4(IN, osg::Array *, a, , IN, osg::IndexArray *, i, , IN, osg::Geometry::AttributeBinding, b, , IN, GLboolean, n, GL_FALSE);
	Method0(bool, empty);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::Geometry::Vec3ArrayData)
	Constructor0();
	ConstructorWithDefaults2(IN, const osg::Geometry::Vec3ArrayData &, data, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	ConstructorWithDefaults3(IN, osg::Vec3Array *, a, , IN, osg::Geometry::AttributeBinding, b, , IN, GLboolean, n, GL_FALSE);
	ConstructorWithDefaults4(IN, osg::Vec3Array *, a, , IN, osg::IndexArray *, i, , IN, osg::Geometry::AttributeBinding, b, , IN, GLboolean, n, GL_FALSE);
	Method0(bool, empty);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::PrimitiveSet >)
	Constructor0();
	Constructor1(IN, osg::PrimitiveSet *, t);
	Constructor1(IN, const osg::ref_ptr< osg::PrimitiveSet > &, rp);
	Method0(bool, valid);
	Method0(osg::PrimitiveSet *, get);
	Method0(const osg::PrimitiveSet *, get);
	Method0(osg::PrimitiveSet *, take);
	Method0(osg::PrimitiveSet *, release);
	ReadOnlyProperty(osg::PrimitiveSet *, );
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::Geometry::ArrayData >);

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osg::PrimitiveSet > >);

