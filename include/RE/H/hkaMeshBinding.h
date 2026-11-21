#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class hkaMeshBindingMapping;
	class hkaSkeleton;
	class hkxMesh;

	class __declspec(novtable) hkaMeshBinding :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaMeshBinding };
		inline static constexpr auto VTABLE{ VTABLE::hkaMeshBinding };

		// members
		hkxMesh* m_mesh;                                     // 0x10
		hkStringPtr m_originalSkeletonName;                  // 0x18
		hkStringPtr m_name;                                  // 0x20
		hkaSkeleton* m_skeleton;                             // 0x28
		hkArray<hkaMeshBindingMapping> m_mappings;           // 0x30
		hkArray<hkTransformf> m_boneFromSkinMeshTransforms;  // 0x40
	};
	static_assert(sizeof(hkaMeshBinding) == 0x50);
	static_assert(offsetof(hkaMeshBinding, m_mesh) == 0x10);
	static_assert(offsetof(hkaMeshBinding, m_originalSkeletonName) == 0x18);
	static_assert(offsetof(hkaMeshBinding, m_name) == 0x20);
	static_assert(offsetof(hkaMeshBinding, m_skeleton) == 0x28);
	static_assert(offsetof(hkaMeshBinding, m_mappings) == 0x30);
	static_assert(offsetof(hkaMeshBinding, m_boneFromSkinMeshTransforms) == 0x40);
}
