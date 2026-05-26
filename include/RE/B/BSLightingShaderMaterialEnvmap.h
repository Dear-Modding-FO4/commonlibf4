#pragma once

#include "RE/B/BSLightingShaderMaterialBase.h"

namespace RE
{
	class __declspec(novtable) BSLightingShaderMaterialEnvmap : public BSLightingShaderMaterialBase
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLightingShaderMaterialEnvmap };
		static constexpr auto VTABLE{ VTABLE::BSLightingShaderMaterialEnvmap };
	};
}
