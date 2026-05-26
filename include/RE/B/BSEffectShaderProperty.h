#pragma once

#include "RE/B/BSShaderProperty.h"

namespace RE
{
	class __declspec(novtable) BSEffectShaderProperty : public BSShaderProperty
	{
	public:
		static constexpr auto RTTI{ RTTI::BSEffectShaderProperty };
		static constexpr auto VTABLE{ VTABLE::BSEffectShaderProperty };
	};
}
