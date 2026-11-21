#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterSkinInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterSkinInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterSkinInfo };

		// members
		std::uint64_t m_characterId;               // 0x10
		hkArray<std::uint64_t> m_deformableSkins;  // 0x18
		hkArray<std::uint64_t> m_rigidSkins;       // 0x28
	};
	static_assert(sizeof(hkbCharacterSkinInfo) == 0x38);
	static_assert(offsetof(hkbCharacterSkinInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbCharacterSkinInfo, m_deformableSkins) == 0x18);
	static_assert(offsetof(hkbCharacterSkinInfo, m_rigidSkins) == 0x28);
}
