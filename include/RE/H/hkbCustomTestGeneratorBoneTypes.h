#pragma once

#include "RE/H/hkbCustomTestGeneratorNestedTypes.h"

namespace RE
{
	class hkbBoneIndexArray;
	class hkbBoneWeightArray;

	class __declspec(novtable) hkbCustomTestGeneratorBoneTypes :
		public hkbCustomTestGeneratorNestedTypes  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomTestGeneratorBoneTypes };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomTestGeneratorBoneTypes };

		// members
		bool m_boneHiddenTypeCopyStart;         // 0x590
		std::uint8_t unk591[0x1];               // 0x591
		std::int16_t m_oldBoneIndex;            // 0x592
		std::int16_t m_oldBoneIndexNoVar;       // 0x594
		std::int16_t m_boneIndex;               // 0x596
		std::int16_t m_boneIndexNoVar;          // 0x598
		std::int16_t m_boneChainIndex0;         // 0x59A
		std::int16_t m_boneChainIndex1;         // 0x59C
		std::int16_t m_boneChainIndex2;         // 0x59E
		std::int16_t m_boneContractIndex0;      // 0x5A0
		std::int16_t m_boneContractIndex1;      // 0x5A2
		std::int16_t m_boneContractIndex2;      // 0x5A4
		bool m_boneHiddenTypeCopyEnd;           // 0x5A6
		std::uint8_t pad5A7[0x1];               // 0x5A7
		hkbBoneWeightArray* m_boneWeightArray;  // 0x5A8
		hkbBoneIndexArray* m_boneIndexArray;    // 0x5B0
	};
	static_assert(sizeof(hkbCustomTestGeneratorBoneTypes) == 0x5C0);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneHiddenTypeCopyStart) == 0x590);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_oldBoneIndex) == 0x592);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_oldBoneIndexNoVar) == 0x594);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneIndex) == 0x596);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneIndexNoVar) == 0x598);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneChainIndex0) == 0x59A);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneChainIndex1) == 0x59C);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneChainIndex2) == 0x59E);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneContractIndex0) == 0x5A0);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneContractIndex1) == 0x5A2);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneContractIndex2) == 0x5A4);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneHiddenTypeCopyEnd) == 0x5A6);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneWeightArray) == 0x5A8);
	static_assert(offsetof(hkbCustomTestGeneratorBoneTypes, m_boneIndexArray) == 0x5B0);
}
