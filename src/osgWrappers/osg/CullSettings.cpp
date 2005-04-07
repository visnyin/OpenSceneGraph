// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/ArgumentParser>
#include <osg/CullSettings>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/Node>

TYPE_NAME_ALIAS(unsigned int, osg::CullSettings::CullingMode);

BEGIN_ENUM_REFLECTOR(osg::CullSettings::VariablesMask)
	EnumLabel(osg::CullSettings::COMPUTE_NEAR_FAR_MODE);
	EnumLabel(osg::CullSettings::CULLING_MODE);
	EnumLabel(osg::CullSettings::LOD_SCALE);
	EnumLabel(osg::CullSettings::SMALL_FEATURE_CULLING_PIXEL_SIZE);
	EnumLabel(osg::CullSettings::CLAMP_PROJECTION_MATRIX_CALLBACK);
	EnumLabel(osg::CullSettings::NEAR_FAR_RATIO);
	EnumLabel(osg::CullSettings::IMPOSTOR_ACTIVE);
	EnumLabel(osg::CullSettings::DEPTH_SORT_IMPOSTOR_SPRITES);
	EnumLabel(osg::CullSettings::IMPOSTOR_PIXEL_ERROR_THRESHOLD);
	EnumLabel(osg::CullSettings::NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES);
	EnumLabel(osg::CullSettings::CULL_MASK);
	EnumLabel(osg::CullSettings::CULL_MASK_LEFT);
	EnumLabel(osg::CullSettings::CULL_MASK_RIGHT);
	EnumLabel(osg::CullSettings::NO_VARIABLES);
	EnumLabel(osg::CullSettings::ALL_VARIABLES);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::CullSettings::ComputeNearFarMode)
	EnumLabel(osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR);
	EnumLabel(osg::CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES);
	EnumLabel(osg::CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::CullSettings::CullingModeValues)
	EnumLabel(osg::CullSettings::NO_CULLING);
	EnumLabel(osg::CullSettings::VIEW_FRUSTUM_SIDES_CULLING);
	EnumLabel(osg::CullSettings::NEAR_PLANE_CULLING);
	EnumLabel(osg::CullSettings::FAR_PLANE_CULLING);
	EnumLabel(osg::CullSettings::VIEW_FRUSTUM_CULLING);
	EnumLabel(osg::CullSettings::SMALL_FEATURE_CULLING);
	EnumLabel(osg::CullSettings::SHADOW_OCCLUSION_CULLING);
	EnumLabel(osg::CullSettings::CLUSTER_CULLING);
	EnumLabel(osg::CullSettings::DEFAULT_CULLING);
	EnumLabel(osg::CullSettings::ENABLE_ALL_CULLING);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::CullSettings)
	Constructor0();
	Constructor1(IN, osg::ArgumentParser &, arguments);
	Constructor1(IN, const osg::CullSettings &, cs);
	Method0(void, setDefaults);
	Method1(void, setInheritanceMask, IN, unsigned int, mask);
	Method0(unsigned int, getInheritanceMask);
	Method1(void, setCullSettings, IN, const osg::CullSettings &, settings);
	Method1(void, inheritCullSettings, IN, const osg::CullSettings &, settings);
	Method2(void, inheritCullSettings, IN, const osg::CullSettings &, settings, IN, unsigned int, inheritanceMask);
	Method0(void, readEnvironmentalVariables);
	Method1(void, readCommandLine, IN, osg::ArgumentParser &, arguments);
	Method1(void, setImpostorsActive, IN, bool, active);
	Method0(bool, getImpostorsActive);
	Method1(void, setImpostorPixelErrorThreshold, IN, float, numPixels);
	Method0(float, getImpostorPixelErrorThreshold);
	Method1(void, setDepthSortImpostorSprites, IN, bool, doDepthSort);
	Method0(bool, getDepthSortImpostorSprites);
	Method1(void, setNumberOfFrameToKeepImpostorSprites, IN, int, numFrames);
	Method0(int, getNumberOfFrameToKeepImpostorSprites);
	Method1(void, setComputeNearFarMode, IN, osg::CullSettings::ComputeNearFarMode, cnfm);
	Method0(osg::CullSettings::ComputeNearFarMode, getComputeNearFarMode);
	Method1(void, setNearFarRatio, IN, double, ratio);
	Method0(double, getNearFarRatio);
	Method1(void, setCullingMode, IN, osg::CullSettings::CullingMode, mode);
	Method0(osg::CullSettings::CullingMode, getCullingMode);
	Method1(void, setCullMask, IN, osg::Node::NodeMask, nm);
	Method0(osg::Node::NodeMask, getCullMask);
	Method1(void, setCullMaskLeft, IN, osg::Node::NodeMask, nm);
	Method0(osg::Node::NodeMask, getCullMaskLeft);
	Method1(void, setCullMaskRight, IN, osg::Node::NodeMask, nm);
	Method0(osg::Node::NodeMask, getCullMaskRight);
	Method1(void, setLODScale, IN, float, bias);
	Method0(float, getLODScale);
	Method1(void, setSmallFeatureCullingPixelSize, IN, float, value);
	Method0(float, getSmallFeatureCullingPixelSize);
	Method1(void, setClampProjectionMatrixCallback, IN, osg::CullSettings::ClampProjectionMatrixCallback *, cpmc);
	Method0(osg::CullSettings::ClampProjectionMatrixCallback *, getClampProjectionMatrixCallback);
	Method0(const osg::CullSettings::ClampProjectionMatrixCallback *, getClampProjectionMatrixCallback);
	Property(osg::CullSettings::ClampProjectionMatrixCallback *, ClampProjectionMatrixCallback);
	Property(osg::CullSettings::ComputeNearFarMode, ComputeNearFarMode);
	Property(osg::Node::NodeMask, CullMask);
	Property(osg::Node::NodeMask, CullMaskLeft);
	Property(osg::Node::NodeMask, CullMaskRight);
	WriteOnlyProperty(const osg::CullSettings &, CullSettings);
	Property(osg::CullSettings::CullingMode, CullingMode);
	Property(bool, DepthSortImpostorSprites);
	Property(float, ImpostorPixelErrorThreshold);
	Property(bool, ImpostorsActive);
	Property(unsigned int, InheritanceMask);
	Property(float, LODScale);
	Property(double, NearFarRatio);
	Property(int, NumberOfFrameToKeepImpostorSprites);
	Property(float, SmallFeatureCullingPixelSize);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::CullSettings::ClampProjectionMatrixCallback)
	BaseType(osg::Referenced);
	Constructor0();
	Method3(bool, clampProjectionMatrixImplementation, IN, osg::Matrixf &, projection, IN, double &, znear, IN, double &, zfar);
	Method3(bool, clampProjectionMatrixImplementation, IN, osg::Matrixd &, projection, IN, double &, znear, IN, double &, zfar);
END_REFLECTOR

