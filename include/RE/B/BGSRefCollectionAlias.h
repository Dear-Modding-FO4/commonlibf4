#pragma once

#include "RE/B/BGSRefAlias.h"

namespace RE
{
	class BGSRefCollectionAlias :
		public BGSRefAlias
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSRefCollectionAlias };
		static constexpr auto VTABLE{ VTABLE::BGSRefCollectionAlias };
		static constexpr auto TYPE{ "RefColl"sv };
		static constexpr auto TYPE_ID{ BSScript::kRefCollectionAlias };

		// members
		std::uint8_t maxInitialCount;  // 48
	};
	static_assert(sizeof(BGSRefCollectionAlias) == 0x50);
}
