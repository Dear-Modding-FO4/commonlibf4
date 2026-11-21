#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkReferencedObject;

	class __declspec(novtable) hkbAssetBundle :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAssetBundle };
		inline static constexpr auto VTABLE{ VTABLE::hkbAssetBundle };

		enum class BundleType : std::uint32_t
		{
			kAnimationBundle = 0
		};

		// members
		hkArray<hkReferencedObject*> m_assets;  // 0x10
		hkStringPtr m_name;                     // 0x20
		std::int8_t m_type;                     // 0x28
	};
	static_assert(sizeof(hkbAssetBundle) == 0x30);
	static_assert(offsetof(hkbAssetBundle, m_assets) == 0x10);
	static_assert(offsetof(hkbAssetBundle, m_name) == 0x20);
	static_assert(offsetof(hkbAssetBundle, m_type) == 0x28);
}
