#pragma once

#include "RE/B/BSExtraData.h"
#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTArray.h"

namespace RE
{
	class BGSKeyword;
	class TESObjectREFR;

	class __declspec(novtable) ExtraLinkedRefChildren :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLinkedRefChildren };
		static constexpr auto VTABLE{ VTABLE::ExtraLinkedRefChildren };
		static constexpr auto TYPE{ EXTRA_DATA_TYPE::kLinkedRefChildren };

		class LinkedRefChild
		{
		public:
			BGSKeyword*     keyword;  // 00
			ObjectRefHandle REFR;     // 08
		};

		// members
		BSTSmallArray<LinkedRefChild, 1> linkedChildren;  // 018
	};
	static_assert(sizeof(ExtraLinkedRefChildren) == 0x38);
}
