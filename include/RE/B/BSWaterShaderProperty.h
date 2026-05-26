#pragma once

#include "RE/B/BSShaderProperty.h"

namespace RE
{
	class __declspec(novtable) BSWaterShaderProperty : public BSShaderProperty
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWaterShaderProperty };
		static constexpr auto VTABLE{ VTABLE::BSWaterShaderProperty };
	};
}
