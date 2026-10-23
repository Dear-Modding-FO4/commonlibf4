#pragma once

#include "RE/B/BSTArray.h"

namespace RE
{
	class BSLight;
	class NiBound;
	class ShadowSceneNode;

	class BSShaderPropertyLightData
	{
	public:
		void AttachLight(BSLight* a_light, NiBound* a_bound)
		{
			using func_t = decltype(&BSShaderPropertyLightData::AttachLight);
			static REL::Relocation<func_t> func{ ID::BSShaderPropertyLightData::AttachLight };
			func(this, a_light, a_bound);
		}

		std::uint32_t CreateActiveLightList(BSLight** a_lights, std::uint32_t a_capacity,
			ShadowSceneNode* a_scene, bool a_useHDRAmbient)
		{
			using func_t = decltype(&BSShaderPropertyLightData::CreateActiveLightList);
			static REL::Relocation<func_t> func{ ID::BSShaderPropertyLightData::CreateActiveLightList };
			return func(this, a_lights, a_capacity, a_scene, a_useHDRAmbient);
		}

		// members
		std::uint32_t      lightListFence;    // 00
		std::uint32_t      shadowAccumFlags;  // 04
		std::uint32_t      lightListChanged;  // 08
		BSTArray<BSLight*> lightList;         // 10
	};
	static_assert(offsetof(BSShaderPropertyLightData, lightList) == 0x10);
	static_assert(sizeof(BSShaderPropertyLightData) == 0x28);
}
