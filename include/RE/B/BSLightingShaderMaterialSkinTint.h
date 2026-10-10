#pragma once

#include "RE/B/BSLightingShaderMaterialBase.h"
#include "RE/N/NiColor.h"

namespace RE
{
	class __declspec(novtable) BSLightingShaderMaterialSkinTint :
		public BSLightingShaderMaterialBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLightingShaderMaterialSkinTint };
		static constexpr auto VTABLE{ VTABLE::BSLightingShaderMaterialSkinTint };

		// members
		NiColorA tintColor;  // C0
	};
	static_assert(sizeof(BSLightingShaderMaterialSkinTint) == 0xD0);
}
