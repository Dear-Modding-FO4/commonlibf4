#pragma once

namespace RE
{
	class BGSChangeFlags
	{
	public:
		// members
		std::int32_t iFlags;  // 00
	};
	static_assert(sizeof(BGSChangeFlags) == 0x4);
}
