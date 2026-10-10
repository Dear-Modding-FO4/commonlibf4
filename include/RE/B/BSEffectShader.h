#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSEffectShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSEffectShader };
		static constexpr auto VTABLE{ VTABLE::BSEffectShader };

		void SetupGeometry(BSRenderPass* a_pass) override
		{
			using func_t = decltype(&BSEffectShader::SetupGeometry);
			static REL::Relocation<func_t> func{ ID::BSEffectShader::SetupGeometry };
			func(this, a_pass);
		}
	};
}
