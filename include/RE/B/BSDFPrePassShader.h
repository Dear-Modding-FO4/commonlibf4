#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSDFPrePassShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDFPrePassShader };
		static constexpr auto VTABLE{ VTABLE::BSDFPrePassShader };
	};
}
