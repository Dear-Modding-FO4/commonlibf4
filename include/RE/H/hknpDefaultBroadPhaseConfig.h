#pragma once

#include "RE/H/hknpBroadPhaseConfig.h"
#include "RE/H/hknpBroadPhaseConfigLayer.h"

namespace RE
{
	class __declspec(novtable) hknpDefaultBroadPhaseConfig :
		public hknpBroadPhaseConfig  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDefaultBroadPhaseConfig };
		inline static constexpr auto VTABLE{ VTABLE::hknpDefaultBroadPhaseConfig };

		// members
		hknpBroadPhaseConfigLayer m_layers[4];  // 0x10
	};
	static_assert(sizeof(hknpDefaultBroadPhaseConfig) == 0x30);
	static_assert(offsetof(hknpDefaultBroadPhaseConfig, m_layers) == 0x10);
}
