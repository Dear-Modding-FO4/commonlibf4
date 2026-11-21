#pragma once

#include "RE/H/hkbCustomIdSelector.h"

namespace RE
{
	class hkbStateChooser;

	class __declspec(novtable) hkbStateChooserWrapper :
		public hkbCustomIdSelector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbStateChooserWrapper };
		inline static constexpr auto VTABLE{ VTABLE::hkbStateChooserWrapper };

		// members
		hkbStateChooser* m_wrappedChooser;  // 0x10
	};
	static_assert(sizeof(hkbStateChooserWrapper) == 0x18);
	static_assert(offsetof(hkbStateChooserWrapper, m_wrappedChooser) == 0x10);
}
