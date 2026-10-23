#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSDFLightShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDFLightShader };
		static constexpr auto VTABLE{ VTABLE::BSDFLightShader };
	};
}
