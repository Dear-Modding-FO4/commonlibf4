#pragma once

#include "RE/B/BSShaderProperty.h"
#include "RE/N/NiColor.h"

namespace RE
{
	class __declspec(novtable) BSEffectShaderProperty : public BSShaderProperty
	{
	public:
		static constexpr auto RTTI{ RTTI::BSEffectShaderProperty };
		static constexpr auto VTABLE{ VTABLE::BSEffectShaderProperty };
		static constexpr auto Ni_RTTI{ Ni_RTTI::BSEffectShaderProperty };

		BSEffectShaderProperty() = delete;

		RenderPassArray* GetRenderPasses(BSGeometry* a_geometry, std::uint32_t a_renderMode,
			BSShaderAccumulator* a_accumulator) override
		{
			using func_t = decltype(&BSEffectShaderProperty::GetRenderPasses);
			static REL::Relocation<func_t> func{ ID::BSEffectShaderProperty::GetRenderPasses };
			return func(this, a_geometry, a_renderMode, a_accumulator);
		}

		[[nodiscard]] static std::uint8_t& GetLocalLightEnable()
		{
			static REL::Relocation<std::uint8_t*> value{ ID::BSEffectShaderProperty::LocalLightEnable };
			return *value;
		}

		void*     emitter;            // 70 - pointee type is unestablished
		NiColor*  externalEmittance;  // 78 - borrowed storage
		std::byte unk80[8];           // 80
	};
	static_assert(sizeof(BSEffectShaderProperty) == 0x88);
	static_assert(offsetof(BSEffectShaderProperty, emitter) == 0x70);
	static_assert(offsetof(BSEffectShaderProperty, externalEmittance) == 0x78);
}
