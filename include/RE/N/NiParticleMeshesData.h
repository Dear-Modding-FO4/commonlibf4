#pragma once

#include "RE/N/NiParticlesData.h"

namespace RE
{
	class __declspec(novtable) NiParticleMeshesData : public NiParticlesData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticleMeshesData };
		static constexpr auto VTABLE{ VTABLE::NiParticleMeshesData };
	};
}
