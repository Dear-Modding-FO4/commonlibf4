#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSDFPrePassShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDFPrePassShader };
		static constexpr auto VTABLE{ VTABLE::BSDFPrePassShader };

		// clears the NORMALS, BINORMAL_TANGENT and CHARACTER_LIGHT_MASK bits of the technique
		static constexpr std::uint32_t PIXEL_SHADER_ID_MASK{ 0xFFFFEFE7 };

		[[nodiscard]] static constexpr std::uint32_t GetPixelShaderID(std::uint32_t a_technique) noexcept
		{
			return a_technique & PIXEL_SHADER_ID_MASK;
		}

		[[nodiscard]] std::byte* CreateCommandBuffer(BSRenderPass* a_pass)
		{
			using func_t = decltype(&BSDFPrePassShader::CreateCommandBuffer);
			static REL::Relocation<func_t> func{ ID::BSDFPrePassShader::CreateCommandBuffer };
			return func(this, a_pass);
		}
	};
}
