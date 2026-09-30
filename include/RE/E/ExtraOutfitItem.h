#pragma once

#include "RE/B/BSExtraData.h"

namespace RE
{
	class __declspec(novtable) ExtraOutfitItem :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraOutfitItem };
		static constexpr auto VTABLE{ VTABLE::ExtraOutfitItem };
		static constexpr auto TYPE{ EXTRA_DATA_TYPE::kOutfitItem };

		ExtraOutfitItem(std::uint32_t a_outfit) :
			BSExtraData(TYPE),
			outfit(a_outfit)
		{
			REX::EMPLACE_VTABLE(this);
		}

		// members
		std::uint32_t outfit;  // 18
	};
	static_assert(sizeof(ExtraOutfitItem) == 0x20);
}
