#pragma once

#include "RE/H/hkbBindable.h"

namespace RE
{
	class hkbBoneWeightArray;
	class hkbGenerator;

	class __declspec(novtable) hkbLayer :
		public hkbBindable  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbLayer };
		inline static constexpr auto VTABLE{ VTABLE::hkbLayer };

		// members
		hkbGenerator* m_generator;          // 0x30
		float m_weight;                     // 0x38
		std::uint8_t pad3C[0x4];            // 0x3C
		hkbBoneWeightArray* m_boneWeights;  // 0x40
		float m_fadeInDuration;             // 0x48
		float m_fadeOutDuration;            // 0x4C
		std::int32_t m_onEventId;           // 0x50
		std::int32_t m_offEventId;          // 0x54
		bool m_onByDefault;                 // 0x58
		bool m_useMotion;                   // 0x59
		bool m_forceFullFadeDurations;      // 0x5A
	};
	static_assert(sizeof(hkbLayer) == 0x60);
	static_assert(offsetof(hkbLayer, m_generator) == 0x30);
	static_assert(offsetof(hkbLayer, m_weight) == 0x38);
	static_assert(offsetof(hkbLayer, m_boneWeights) == 0x40);
	static_assert(offsetof(hkbLayer, m_fadeInDuration) == 0x48);
	static_assert(offsetof(hkbLayer, m_fadeOutDuration) == 0x4C);
	static_assert(offsetof(hkbLayer, m_onEventId) == 0x50);
	static_assert(offsetof(hkbLayer, m_offEventId) == 0x54);
	static_assert(offsetof(hkbLayer, m_onByDefault) == 0x58);
	static_assert(offsetof(hkbLayer, m_useMotion) == 0x59);
	static_assert(offsetof(hkbLayer, m_forceFullFadeDurations) == 0x5A);
}
