#pragma once

#include "RE/B/BSGeometry.h"
#include "RE/N/NiParticlesData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class __declspec(novtable) NiParticles : public BSGeometry
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticles };
		static constexpr auto VTABLE{ VTABLE::NiParticles };
		static constexpr auto Ni_RTTI{ Ni_RTTI::NiParticles };

		NiParticles() = delete;

		NiPointer<NiParticlesData> particleData;  // 160
		void*                      field168;      // 168 - distance-fade pointee is unknown
	};
	static_assert(sizeof(NiParticles) == 0x170);
	static_assert(offsetof(NiParticles, particleData) == 0x160);
	static_assert(offsetof(NiParticles, field168) == 0x168);
}
