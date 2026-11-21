#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkaAnimationPreviewColorContainer :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaAnimationPreviewColorContainer };
		inline static constexpr auto VTABLE{ VTABLE::hkaAnimationPreviewColorContainer };

		// members
		hkArray<std::uint32_t> m_previewColor;  // 0x10
	};
	static_assert(sizeof(hkaAnimationPreviewColorContainer) == 0x20);
	static_assert(offsetof(hkaAnimationPreviewColorContainer, m_previewColor) == 0x10);
}
