#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkRefPtr.h"

namespace RE
{
	class hkbAnimationBindingWithTriggers;
	class hkbAssetBundle;

	class __declspec(novtable) hkbAnimationBindingSet :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAnimationBindingSet };
		inline static constexpr auto VTABLE{ VTABLE::hkbAnimationBindingSet };

		// members
		hkArray<hkbAnimationBindingWithTriggers*> m_bindings;      // 0x10
		hkArray<hkRefPtr<hkbAssetBundle>> m_assetBundles;         // 0x20
	};
	static_assert(sizeof(hkbAnimationBindingSet) == 0x30);
	static_assert(offsetof(hkbAnimationBindingSet, m_bindings) == 0x10);
	static_assert(offsetof(hkbAnimationBindingSet, m_assetBundles) == 0x20);
}
