#pragma once

#include "RE/B/BSLight.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/L/LIGHT_CREATE_PARAMS.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSLight;
	class BSShadowDirectionalLight;
	class BSCullingProcess;
	class BSBitFieldHeapAllocator;
	template <class Allocator>
	class BSBitField;

	// NiNode base is unmapped; only proven fields are declared.
	class __declspec(novtable) ShadowSceneNode
	{
	public:
		using LIGHT_CREATE_PARAMS = RE::LIGHT_CREATE_PARAMS;

		ShadowSceneNode() = delete;

		[[nodiscard]] BSLight* AddLight(NiLight* a_light, LIGHT_CREATE_PARAMS& a_params)
		{
			using func_t = BSLight* (*)(ShadowSceneNode*, NiLight*, LIGHT_CREATE_PARAMS&);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::AddLight };
			return func(this, a_light, a_params);
		}

		[[nodiscard]] BSLight* AddLight(NiLight* a_light, bool a_flag)
		{
			using func_t = BSLight* (*)(ShadowSceneNode*, NiLight*, bool);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::AddLightWithBool };
			return func(this, a_light, a_flag);
		}

		void GetLuminanceAtPoint(NiPoint3 a_point, std::int32_t& a_count,
			float& a_localLuminance, float& a_directionalLuminance, NiLight* a_ignoreLight,
			BSBitField<BSBitFieldHeapAllocator>* a_filter)
		{
			using func_t = decltype(&ShadowSceneNode::GetLuminanceAtPoint);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::GetLuminanceAtPoint };
			func(this, a_point, a_count, a_localLuminance, a_directionalLuminance, a_ignoreLight, a_filter);
		}

		void RemoveLight(NiPointer<BSLight>& a_light)
		{
			using func_t = decltype(&ShadowSceneNode::RemoveLight);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::RemoveLight };
			func(this, a_light);
		}

		void AddQueuedLight(BSLight* a_light)
		{
			using func_t = decltype(&ShadowSceneNode::AddQueuedLight);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::AddQueuedLight };
			func(this, a_light);
		}

		void UpdateQueuedLight(BSLight* a_light)
		{
			using func_t = decltype(&ShadowSceneNode::UpdateQueuedLight);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::UpdateQueuedLight };
			func(this, a_light);
		}

		void ProcessQueuedLights(BSCullingProcess* a_process)
		{
			using func_t = decltype(&ShadowSceneNode::ProcessQueuedLights);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::ProcessQueuedLights };
			func(this, a_process);
		}

		static void ProcessAllQueuedLights(BSCullingProcess* a_process)
		{
			using func_t = decltype(&ShadowSceneNode::ProcessAllQueuedLights);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::ProcessAllQueuedLights };
			func(a_process);
		}

		void UpdateLightList(BSTArray<NiPointer<BSLight>>& a_list, BSCullingProcess* a_process)
		{
			using func_t = decltype(&ShadowSceneNode::UpdateLightList);
			static REL::Relocation<func_t> func{ ID::ShadowSceneNode::UpdateLightList };
			func(this, a_list, a_process);
		}

		// members
		std::byte                    field_0x000[0x158];       // 000 - NiNode base
		BSTArray<NiPointer<BSLight>> nonShadowLights;          // 158
		BSTArray<NiPointer<BSLight>> shadowLights;             // 170
		BSTArray<NiPointer<BSLight>> specialLights;            // 188
		BSTArray<NiPointer<BSLight>> queuedLightAdditions;     // 1A0
		BSTArray<NiPointer<BSLight>> queuedLightRemovals;      // 1B8
		BSSpinLock                   lightLock;                // 1D0
		std::byte                    field_0x1D8[0x20];        // 1D8
		BSLight*                     sunLight;                 // 1F8
		std::byte                    field_0x200[0x8];         // 200
		BSShadowDirectionalLight*    directionalShadowLight;   // 208
		std::byte                    field_0x210[0x14];        // 210
		std::uint8_t                 sceneIndex;               // 224
		bool                         suppressLightListUpdate;  // 225
	};
	static_assert(offsetof(ShadowSceneNode, nonShadowLights) == 0x158);
	static_assert(offsetof(ShadowSceneNode, shadowLights) == 0x170);
	static_assert(offsetof(ShadowSceneNode, specialLights) == 0x188);
	static_assert(offsetof(ShadowSceneNode, queuedLightAdditions) == 0x1A0);
	static_assert(offsetof(ShadowSceneNode, queuedLightRemovals) == 0x1B8);
	static_assert(offsetof(ShadowSceneNode, lightLock) == 0x1D0);
	static_assert(offsetof(ShadowSceneNode, sunLight) == 0x1F8);
	static_assert(offsetof(ShadowSceneNode, directionalShadowLight) == 0x208);
	static_assert(offsetof(ShadowSceneNode, sceneIndex) == 0x224);
	static_assert(offsetof(ShadowSceneNode, suppressLightListUpdate) == 0x225);
}
