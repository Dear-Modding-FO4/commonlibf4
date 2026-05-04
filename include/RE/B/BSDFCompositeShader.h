#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSDFCompositeShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDFCompositeShader };
		static constexpr auto VTABLE{ VTABLE::BSDFCompositeShader };
	};
}
