#pragma once

#include "RE/B/BGSLoadFormData.h"
#include "RE/B/BGSLoadGameBuffer.h"

namespace RE
{
	class Actor;
	class TESForm;
	class TESObjectREFR;

	class __declspec(novtable) BGSLoadFormBuffer :
		public BGSLoadGameBuffer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSLoadFormBuffer };
		static constexpr auto VTABLE{ VTABLE::BGSLoadFormBuffer };

		// members
		BGSLoadFormData formData;  // 28
	};
	static_assert(offsetof(BGSLoadFormBuffer, formData) == 0x28);
	static_assert(sizeof(BGSLoadFormBuffer) == 0x50);
}
