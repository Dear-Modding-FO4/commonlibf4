#pragma once

#include "RE/N/NiParticles.h"

namespace RE
{
	class __declspec(novtable) NiParticleSystem : public NiParticles
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticleSystem };
		static constexpr auto VTABLE{ VTABLE::NiParticleSystem };
	};
}
