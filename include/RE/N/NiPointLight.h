#pragma once

#include "RE/N/NiLight.h"

namespace RE
{
	// Mapped prefix; native creation allocates 0x190, not sizeof this view.
	class __declspec(novtable) NiPointLight : public NiLight
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPointLight };
		static constexpr auto VTABLE{ VTABLE::NiPointLight };
		static constexpr auto Ni_RTTI{ Ni_RTTI::NiPointLight };

		NiPointLight() = delete;
		NiPointLight(const NiPointLight&) = delete;
		NiPointLight(NiPointLight&&) = delete;
		NiPointLight& operator=(const NiPointLight&) = delete;
		NiPointLight& operator=(NiPointLight&&) = delete;

		[[nodiscard]] static NiPointLight* Create()
		{
			auto* storage = static_cast<NiPointLight*>(RE::aligned_alloc(0x10, 0x190));
			if (!storage) {
				return nullptr;
			}
			using func_t = NiPointLight* (*)(NiPointLight*);
			static REL::Relocation<func_t> func{ ID::NiPointLight::Ctor };
			return func(storage);
		}

		float radialConstant;  // 170
		float radialScalar;    // 174
		float radialExponent;  // 178
	};
	static_assert(offsetof(NiPointLight, radialConstant) == 0x170);
	static_assert(offsetof(NiPointLight, radialScalar) == 0x174);
	static_assert(offsetof(NiPointLight, radialExponent) == 0x178);
}
