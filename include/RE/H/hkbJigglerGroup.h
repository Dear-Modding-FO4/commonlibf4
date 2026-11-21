#pragma once

#include "RE/H/hkbBindable.h"

namespace RE
{
	class hkbBoneIndexArray;

	class __declspec(novtable) hkbJigglerGroup :
		public hkbBindable  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbJigglerGroup };
		inline static constexpr auto VTABLE{ VTABLE::hkbJigglerGroup };

		// members
		hkbBoneIndexArray* m_boneIndices;  // 0x30
		float m_mass;                      // 0x38
		float m_stiffness;                 // 0x3C
		float m_damping;                   // 0x40
		float m_maxElongation;             // 0x44
		float m_maxCompression;            // 0x48
		bool m_propagateToChildren;        // 0x4C
		bool m_affectSiblings;             // 0x4D
		bool m_rotateBonesForSkinning;     // 0x4E
		bool m_pad[5];                     // 0x4F
	};
	static_assert(sizeof(hkbJigglerGroup) == 0x58);
	static_assert(offsetof(hkbJigglerGroup, m_boneIndices) == 0x30);
	static_assert(offsetof(hkbJigglerGroup, m_mass) == 0x38);
	static_assert(offsetof(hkbJigglerGroup, m_stiffness) == 0x3C);
	static_assert(offsetof(hkbJigglerGroup, m_damping) == 0x40);
	static_assert(offsetof(hkbJigglerGroup, m_maxElongation) == 0x44);
	static_assert(offsetof(hkbJigglerGroup, m_maxCompression) == 0x48);
	static_assert(offsetof(hkbJigglerGroup, m_propagateToChildren) == 0x4C);
	static_assert(offsetof(hkbJigglerGroup, m_affectSiblings) == 0x4D);
	static_assert(offsetof(hkbJigglerGroup, m_rotateBonesForSkinning) == 0x4E);
	static_assert(offsetof(hkbJigglerGroup, m_pad) == 0x4F);
}
