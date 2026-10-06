#pragma once

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BGSNumericIDIndex.h"
#include "RE/B/BGSSaveGameBuffer.h"
#include "RE/B/BGSSaveLoadFormInfo.h"

namespace RE
{
	class Actor;
	class TESForm;
	class TESObjectREFR;

	class __declspec(novtable) BGSSaveFormBuffer :
		public BGSSaveGameBuffer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSSaveFormBuffer };
		static constexpr auto VTABLE{ VTABLE::BGSSaveFormBuffer };

#pragma pack(push, 1)
		struct Header
		{
		public:
			// members
			BGSNumericIDIndex   formID;       // 0
			BGSChangeFlags      changeFlags;  // 3
			BGSSaveLoadFormInfo formInfo;     // 7
			std::uint8_t        version;      // 8
		};
		static_assert(sizeof(Header) == 0x9);
#pragma pack(pop)

		// override (BGSSaveGameBuffer)
		TESForm*       GetForm() override;       // 01 - { return form; }
		TESObjectREFR* GetReference() override;  // 02
		Actor*         GetActor() override;      // 03

		// members
		Header   header;  // 18
		TESForm* form;    // 28
	};
	static_assert(offsetof(BGSSaveFormBuffer, header) == 0x18);
	static_assert(offsetof(BGSSaveFormBuffer, form) == 0x28);
	static_assert(sizeof(BGSSaveFormBuffer) == 0x30);
}
