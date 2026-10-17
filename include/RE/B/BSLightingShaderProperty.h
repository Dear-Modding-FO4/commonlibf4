#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSShaderProperty.h"
#include "RE/N/NiColor.h"

namespace RE
{
	class __declspec(novtable) BSLightingShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLightingShaderProperty };
		static constexpr auto VTABLE{ VTABLE::BSLightingShaderProperty };
		static constexpr auto Ni_RTTI{ Ni_RTTI::BSLightingShaderProperty };

		[[nodiscard]] static BSLightingShaderProperty* Create()
		{
			const auto prop = static_cast<BSLightingShaderProperty*>(RE::malloc(sizeof(BSLightingShaderProperty)));
			if (prop) {
				using func_t = void (*)(BSLightingShaderProperty*);
				static REL::Relocation<func_t> func{ ID::BSLightingShaderProperty::Ctor };
				func(prop);
			}
			return prop;
		}

		void LoadTextureSet(std::uint32_t a_unk = 0)
		{
			using func_t = decltype(&BSLightingShaderProperty::LoadTextureSet);
			static REL::Relocation<func_t> func{ ID::BSLightingShaderProperty::LoadTextureSet };
			return func(this, a_unk);
		}

		// members
		NiColorA        projectedUVParams;           // 70
		NiColorA        projectedUVColor;            // 80
		RenderPassArray depthMapRenderPassListA[3];  // 90
		BSRenderPass*   depthRenderPass;             // A8
		RenderPassArray forwardPassList;             // B0
		NiColor*        emitColor;                   // B8
		BSFixedString   rootName;                    // C0
		float           emitColorScale;              // C8
		float           forcedDarkness;              // CC
		float           specularLODFade;             // D0
		float           envmapLODFade;               // D4
		std::uint32_t   baseTechniqueID;             // D8
		std::uint32_t   clearCommandBufferCount;     // DC
		std::uint16_t   debugTintIndex;              // E0
		std::uint32_t   stencilRef;                  // E4
	};
	static_assert(sizeof(BSLightingShaderProperty) == 0xE8);
}
