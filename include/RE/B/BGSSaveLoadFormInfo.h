#pragma once

namespace RE
{
	class BGSSaveLoadFormInfo
	{
	public:
		// members
		std::uint8_t cData;  // 00
	};
	static_assert(sizeof(BGSSaveLoadFormInfo) == 0x1);
}
