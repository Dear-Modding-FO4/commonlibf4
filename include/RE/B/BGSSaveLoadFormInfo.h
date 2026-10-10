#pragma once

#include "RE/S/SIZE_TYPE.h"

namespace RE
{
	class BGSSaveLoadFormInfo
	{
	public:
		[[nodiscard]] std::uint8_t GetFormTypeIndex() const noexcept { return cData & 0x3F; }
		[[nodiscard]] SIZE_TYPE GetSizeType() const noexcept { return static_cast<SIZE_TYPE>(cData >> 6); }

		// members
		std::uint8_t cData;  // 00
	};
	static_assert(sizeof(BGSSaveLoadFormInfo) == 0x1);
}
