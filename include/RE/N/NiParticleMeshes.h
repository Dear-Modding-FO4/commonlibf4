#pragma once

#include "RE/N/NiParticles.h"

namespace RE
{
	class __declspec(novtable) NiParticleMeshes : public NiParticles
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticleMeshes };
		static constexpr auto VTABLE{ VTABLE::NiParticleMeshes };
	};
}
