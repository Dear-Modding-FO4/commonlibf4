#pragma once

namespace RE
{
	class BSShaderAccumulator;
	class NiAVObject;
	class NiAvObject;
	class NiCamera;
	class NiCullingProcess;
	class NiSwitchNode;

	class NiAVObject;

	namespace BSShaderUtil
	{
		inline void ClearRenderPasses(NiAVObject* a_object)
		{
			using func_t = decltype(&BSShaderUtil::ClearRenderPasses);
			static REL::Relocation<func_t> func{ ID::BSShaderUtil::ClearRenderPasses };
			return func(a_object);
		}

		inline void SetMaterialAlpha(NiAvObject* a_object, float a_alpha, bool a_onlyFade)
		{
			using func_t = decltype(&BSShaderUtil::SetMaterialAlpha);
			static REL::Relocation<func_t> func{ ID::BSShaderUtil::SetMaterialAlpha };
			return func(a_object, a_alpha, a_onlyFade);
		}

		inline void AccumulateScene(NiCamera* a_camera, NiAVObject* a_scene, NiCullingProcess& a_cullingProcess, bool a_resetCamera)
		{
			using func_t = decltype(&BSShaderUtil::AccumulateScene);
			static REL::Relocation<func_t> func{ ID::BSShaderUtil::AccumulateScene };
			return func(a_camera, a_scene, a_cullingProcess, a_resetCamera);
		}

		// The flag feeds BSGraphics::State::SetCameraData.
		inline void RenderScene(NiCamera* a_camera, BSShaderAccumulator* a_accumulator, bool a_jitter)
		{
			using func_t = decltype(&BSShaderUtil::RenderScene);
			static REL::Relocation<func_t> func{ ID::BSShaderUtil::RenderScene };
			return func(a_camera, a_accumulator, a_jitter);
		}
	}
}
