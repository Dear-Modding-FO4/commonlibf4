#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSSkyShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSkyShader };
		static constexpr auto VTABLE{ VTABLE::BSSkyShader };
	};
}
