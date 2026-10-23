#pragma once

#include "RE/B/BSExtraData.h"
#include "RE/B/BSTArray.h"

namespace RE
{
	class BGSKeyword;
	class TESObjectREFR;

	class __declspec(novtable) ExtraLinkedRef :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLinkedRef };
		static constexpr auto VTABLE{ VTABLE::ExtraLinkedRef };
		static constexpr auto TYPE{ EXTRA_DATA_TYPE::kLinkedRef };

		class LinkedRef
		{
		public:
			BGSKeyword*    keyword;  // 00
			TESObjectREFR* REFR;     // 08
		};

		// members
		BSTSmallArray<LinkedRef, 1> linkedRefs;     // 018
		bool                        transientRefs;  // 038
	};
	static_assert(sizeof(ExtraLinkedRef) == 0x40);
}
