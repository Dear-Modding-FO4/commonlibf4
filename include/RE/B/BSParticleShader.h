#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSParticleShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSParticleShader };
		static constexpr auto VTABLE{ VTABLE::BSParticleShader };
	};
}
