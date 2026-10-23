#pragma once

#include "RE/B/BSDeferredDecal.h"
#include "RE/B/BSLight.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/L/LIGHT_CREATE_PARAMS.h"
#include "RE/N/NiNode.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSLight;
	class BSShadowDirectionalLight;
	class BSCullingProcess;
	class BSBitFieldHeapAllocator;
	template <class Allocator>
	class BSBitField;

	class __declspec(novtable) ShadowSceneNode : public NiNode
	{
	public:
		static constexpr auto RTTI{ RTTI::ShadowSceneNode };
		static constexpr auto VTABLE{ VTABLE::ShadowSceneNode };
		static constexpr auto Ni_RTTI{ Ni_RTTI::ShadowSceneNode };

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
		std::byte                                       unk140[0x18];             // 140
		BSTArray<NiPointer<BSLight>>                    nonShadowLights;          // 158
		BSTArray<NiPointer<BSLight>>                    shadowLights;             // 170
		BSTArray<NiPointer<BSLight>>                    specialLights;            // 188
		BSTArray<NiPointer<BSLight>>                    queuedLightAdditions;     // 1A0
		BSTArray<NiPointer<BSLight>>                    queuedLightRemovals;      // 1B8
		BSSpinLock                                      lightLock;                // 1D0
		BSTArray<NiPointer<BSDeferredDecal::BSDFDecal>> decals;                   // 1D8
		BSNonReentrantSpinLock                          decalLock;                // 1F0
		std::byte                                       unk1F4[0x4];              // 1F4
		BSLight*                                        sunLight;                 // 1F8
		BSLight*                                        cloudSunLight;            // 200
		BSShadowDirectionalLight*                       directionalShadowLight;   // 208
		BSLight*                                        localSunLight;            // 210
		std::byte                                       unk218[0xC];              // 218
		std::uint8_t                                    sceneIndex;               // 224
		bool                                            suppressLightListUpdate;  // 225
		std::byte                                       unk226[0x10A];            // 226
	};
	static_assert(sizeof(ShadowSceneNode) == 0x330);
	static_assert(offsetof(ShadowSceneNode, nonShadowLights) == 0x158);
	static_assert(offsetof(ShadowSceneNode, shadowLights) == 0x170);
	static_assert(offsetof(ShadowSceneNode, specialLights) == 0x188);
	static_assert(offsetof(ShadowSceneNode, queuedLightAdditions) == 0x1A0);
	static_assert(offsetof(ShadowSceneNode, queuedLightRemovals) == 0x1B8);
	static_assert(offsetof(ShadowSceneNode, lightLock) == 0x1D0);
	static_assert(offsetof(ShadowSceneNode, decals) == 0x1D8);
	static_assert(offsetof(ShadowSceneNode, decalLock) == 0x1F0);
	static_assert(offsetof(ShadowSceneNode, sunLight) == 0x1F8);
	static_assert(offsetof(ShadowSceneNode, cloudSunLight) == 0x200);
	static_assert(offsetof(ShadowSceneNode, directionalShadowLight) == 0x208);
	static_assert(offsetof(ShadowSceneNode, localSunLight) == 0x210);
	static_assert(offsetof(ShadowSceneNode, sceneIndex) == 0x224);
	static_assert(offsetof(ShadowSceneNode, suppressLightListUpdate) == 0x225);
}
