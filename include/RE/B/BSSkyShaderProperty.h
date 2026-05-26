#pragma once

#include "RE/B/BSShaderProperty.h"

namespace RE
{
	class __declspec(novtable) BSSkyShaderProperty : public BSShaderProperty
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSkyShaderProperty };
		static constexpr auto VTABLE{ VTABLE::BSSkyShaderProperty };
	};
}
