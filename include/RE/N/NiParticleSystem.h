#pragma once

#include "RE/N/NiParticles.h"

namespace RE
{
	class __declspec(novtable) NiParticleSystem : public NiParticles
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticleSystem };
		static constexpr auto VTABLE{ VTABLE::NiParticleSystem };
		static constexpr auto Ni_RTTI{ Ni_RTTI::NiParticleSystem };

		NiParticleSystem() = delete;

		void UpdateSystemTransform(NiUpdateData& a_data)
		{
			using func_t = decltype(&NiParticleSystem::UpdateSystemTransform);
			static REL::Relocation<func_t> func{ ID::NiParticleSystem::UpdateSystemTransform };
			func(this, a_data);
		}

		std::byte unk170[0x2E];  // 170
		bool      worldSpace;    // 19E
		std::byte unk19F;        // 19F
	};
	static_assert(sizeof(NiParticleSystem) == 0x1A0);
	static_assert(offsetof(NiParticleSystem, worldSpace) == 0x19E);
}
