#pragma once

#include "RE/H/hkbGenerator.h"

namespace RE
{
	class hkbBoneIndexArray;
	class hkbGenerator;

	class __declspec(novtable) hkbPinBonesGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbPinBonesGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbPinBonesGenerator };

		// members
		hkbGenerator* m_referenceFrameGenerator;  // 0x88
		hkbGenerator* m_pinnedGenerator;          // 0x90
		hkbBoneIndexArray* m_boneIndices;         // 0x98
		float m_fraction;                         // 0xA0
	};
	static_assert(sizeof(hkbPinBonesGenerator) == 0xA8);
	static_assert(offsetof(hkbPinBonesGenerator, m_referenceFrameGenerator) == 0x88);
	static_assert(offsetof(hkbPinBonesGenerator, m_pinnedGenerator) == 0x90);
	static_assert(offsetof(hkbPinBonesGenerator, m_boneIndices) == 0x98);
	static_assert(offsetof(hkbPinBonesGenerator, m_fraction) == 0xA0);
}
