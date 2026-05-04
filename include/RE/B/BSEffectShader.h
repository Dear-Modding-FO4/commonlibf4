#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSEffectShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSEffectShader };
		static constexpr auto VTABLE{ VTABLE::BSEffectShader };
	};
}
