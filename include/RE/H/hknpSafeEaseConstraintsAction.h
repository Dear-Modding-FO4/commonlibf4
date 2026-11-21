#pragma once

#include "RE/H/hknpEaseConstraintsAction.h"

namespace RE
{
	class __declspec(novtable) hknpSafeEaseConstraintsAction :
		public hknpEaseConstraintsAction  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSafeEaseConstraintsAction };
		inline static constexpr auto VTABLE{ VTABLE::hknpSafeEaseConstraintsAction };

		// members
		void* unk50;  // 0x50
	};
	static_assert(sizeof(hknpSafeEaseConstraintsAction) == 0x58);
	static_assert(offsetof(hknpSafeEaseConstraintsAction, unk50) == 0x50);
}
