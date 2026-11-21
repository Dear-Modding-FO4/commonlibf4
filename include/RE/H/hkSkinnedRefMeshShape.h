#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMeshShape.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkSkinnedMeshShape;

	class __declspec(novtable) hkSkinnedRefMeshShape :
		public hkMeshShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkSkinnedRefMeshShape };
		inline static constexpr auto VTABLE{ VTABLE::hkSkinnedRefMeshShape };

		// members
		hkSkinnedMeshShape* m_skinnedMeshShape;         // 0x10
		hkArray<std::int16_t> m_bones;                  // 0x18
		hkArray<hkVector4f> m_localFromRootTransforms;  // 0x28
		hkStringPtr m_name;                             // 0x38
	};
	static_assert(sizeof(hkSkinnedRefMeshShape) == 0x40);
	static_assert(offsetof(hkSkinnedRefMeshShape, m_skinnedMeshShape) == 0x10);
	static_assert(offsetof(hkSkinnedRefMeshShape, m_bones) == 0x18);
	static_assert(offsetof(hkSkinnedRefMeshShape, m_localFromRootTransforms) == 0x28);
	static_assert(offsetof(hkSkinnedRefMeshShape, m_name) == 0x38);
}
