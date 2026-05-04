#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSWaterShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWaterShader };
		static constexpr auto VTABLE{ VTABLE::BSWaterShader };
	};
}
