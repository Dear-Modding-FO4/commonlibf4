#pragma once

#include "RE/B/BSLightingShaderMaterialBase.h"

namespace RE
{
	class __declspec(novtable) BSLightingShaderMaterialGlowmap : public BSLightingShaderMaterialBase
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLightingShaderMaterialGlowmap };
		static constexpr auto VTABLE{ VTABLE::BSLightingShaderMaterialGlowmap };
	};
}
