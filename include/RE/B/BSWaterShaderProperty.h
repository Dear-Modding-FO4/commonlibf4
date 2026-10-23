#pragma once

#include "RE/B/BSShaderProperty.h"

namespace RE
{
	class __declspec(novtable) BSWaterShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWaterShaderProperty };
		static constexpr auto VTABLE{ VTABLE::BSWaterShaderProperty };

		// members
		std::uint32_t waterFlags;  // 70
	};
	static_assert(offsetof(BSWaterShaderProperty, waterFlags) == 0x70);
}
