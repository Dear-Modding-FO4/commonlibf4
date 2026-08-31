#pragma once

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BGSSaveLoadFormInfo.h"

namespace RE
{
	class TESForm;

	class BGSLoadFormData
	{
	public:
		// members
		std::uint32_t       iFormID;             // 00
		std::uint32_t       uiDataSize;          // 04
		std::uint32_t       uiUncompressedSize;  // 08
		TESForm*            pForm;               // 10
		BGSChangeFlags      iChangeFlags;        // 18
		BGSChangeFlags      iOldChangeFlags;     // 1C
		std::uint16_t       usFlags;             // 20
		BGSSaveLoadFormInfo FormInfo;            // 22
		std::uint8_t        cVersion;            // 23
	};
	static_assert(sizeof(BGSLoadFormData) == 0x28);
}
