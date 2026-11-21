#pragma once

#include "RE/H/hknpBroadPhaseConfig.h"

namespace RE
{
	class __declspec(novtable) hknpBSBroadPhaseConfig :
		public hknpBroadPhaseConfig  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBSBroadPhaseConfig };
		inline static constexpr auto VTABLE{ VTABLE::hknpBSBroadPhaseConfig };

		// members
		std::uint8_t unk10[0x38];  // 0x10
	};
	static_assert(sizeof(hknpBSBroadPhaseConfig) == 0x48);
}
