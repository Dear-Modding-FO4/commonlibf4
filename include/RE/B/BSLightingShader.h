#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSLightingShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLightingShader };
		static constexpr auto VTABLE{ VTABLE::BSLightingShader };
	};
}
