#pragma once

#include "RE/B/BGSKeyword.h"

namespace RE
{
	class __declspec(novtable) BGSAction :
		public BGSKeyword  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSAction };
		static constexpr auto VTABLE{ VTABLE::BGSAction };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kAACT };
		static constexpr auto TYPE_ID{ BSScript::kAction };

		// members
		std::uint32_t index;  // 28
	};
	static_assert(sizeof(BGSAction) == 0x30);
}
