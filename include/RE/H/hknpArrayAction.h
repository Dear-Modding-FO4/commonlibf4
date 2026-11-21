#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpAction.h"

namespace RE
{
	class __declspec(novtable) hknpArrayAction :
		public hknpAction  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpArrayAction };
		inline static constexpr auto VTABLE{ VTABLE::hknpArrayAction };

		// members
		void* unk10;  // 0x10
		hkArray<std::uint32_t> m_bodyIds;  // 0x18
	};
	static_assert(sizeof(hknpArrayAction) == 0x28);
	static_assert(offsetof(hknpArrayAction, m_bodyIds) == 0x18);
	static_assert(offsetof(hknpArrayAction, unk10) == 0x10);
}
