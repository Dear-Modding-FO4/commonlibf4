#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpBSMaterial :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBSMaterial };
		inline static constexpr auto VTABLE{ VTABLE::hknpBSMaterial };

		// members
		std::uint32_t m_uiFilterInfo;   // 0x10
		std::uint32_t m_uiMaterialCRC;  // 0x14
	};
	static_assert(sizeof(hknpBSMaterial) == 0x18);
	static_assert(offsetof(hknpBSMaterial, m_uiFilterInfo) == 0x10);
	static_assert(offsetof(hknpBSMaterial, m_uiMaterialCRC) == 0x14);
}
