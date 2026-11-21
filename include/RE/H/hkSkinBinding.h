#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMeshShape.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMeshShape;

	class __declspec(novtable) hkSkinBinding :
		public hkMeshShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkSkinBinding };
		inline static constexpr auto VTABLE{ VTABLE::hkSkinBinding };

		// members
		hkMeshShape* m_skin;                           // 0x10
		std::uint8_t m_worldFromBoneTransforms[0x10];  // 0x18
		hkArray<hkStringPtr> m_boneNames;              // 0x28
	};
	static_assert(sizeof(hkSkinBinding) == 0x38);
	static_assert(offsetof(hkSkinBinding, m_skin) == 0x10);
	static_assert(offsetof(hkSkinBinding, m_worldFromBoneTransforms) == 0x18);
	static_assert(offsetof(hkSkinBinding, m_boneNames) == 0x28);
}
