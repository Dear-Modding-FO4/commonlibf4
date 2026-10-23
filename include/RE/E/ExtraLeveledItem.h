#pragma once

#include "RE/B/BSExtraData.h"

namespace RE
{
	class __declspec(novtable) ExtraLeveledItem :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLeveledItem };
		static constexpr auto VTABLE{ VTABLE::ExtraLeveledItem };
		static constexpr auto TYPE{ EXTRA_DATA_TYPE::kLevelItem };

		ExtraLeveledItem(std::uint32_t a_levItem) :
			BSExtraData(TYPE),
			levItem(a_levItem)
		{
			REX::EMPLACE_VTABLE(this);
		}

		// members
		std::uint32_t levItem;  // 18
	};
	static_assert(sizeof(ExtraLeveledItem) == 0x20);
}
