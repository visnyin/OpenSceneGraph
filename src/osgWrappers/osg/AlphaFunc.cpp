// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/AlphaFunc>
#include <osg/CopyOp>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>

BEGIN_ENUM_REFLECTOR(osg::AlphaFunc::ComparisonFunction)
	EnumLabel(osg::AlphaFunc::NEVER);
	EnumLabel(osg::AlphaFunc::LESS);
	EnumLabel(osg::AlphaFunc::EQUAL);
	EnumLabel(osg::AlphaFunc::LEQUAL);
	EnumLabel(osg::AlphaFunc::GREATER);
	EnumLabel(osg::AlphaFunc::NOTEQUAL);
	EnumLabel(osg::AlphaFunc::GEQUAL);
	EnumLabel(osg::AlphaFunc::ALWAYS);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::AlphaFunc)
	BaseType(osg::StateAttribute);
	Constructor0();
	Constructor2(IN, osg::AlphaFunc::ComparisonFunction, func, IN, float, ref);
	ConstructorWithDefaults2(IN, const osg::AlphaFunc &, af, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method0(osg::StateAttribute::Type, getType);
	Method1(int, compare, IN, const osg::StateAttribute &, sa);
	Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, usage);
	Method2(void, setFunction, IN, osg::AlphaFunc::ComparisonFunction, func, IN, float, ref);
	Method1(void, setFunction, IN, osg::AlphaFunc::ComparisonFunction, func);
	Method0(osg::AlphaFunc::ComparisonFunction, getFunction);
	Method1(void, setReferenceValue, IN, float, value);
	Method0(float, getReferenceValue);
	Method1(void, apply, IN, osg::State &, state);
	Property(osg::AlphaFunc::ComparisonFunction, Function);
	Property(float, ReferenceValue);
	ReadOnlyProperty(osg::StateAttribute::Type, Type);
END_REFLECTOR

