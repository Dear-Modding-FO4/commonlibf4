#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class BSRenderPass;

	class __declspec(novtable) BSUtilityShader :
		public BSShader  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::BSUtilityShader };
		static constexpr auto VTABLE{ VTABLE::BSUtilityShader };

		[[nodiscard]] static BSUtilityShader*& GetSingleton()
		{
			static REL::Relocation<BSUtilityShader**> singleton{ ID::BSUtilityShader::Singleton };
			return *singleton;
		}

		std::byte* CreateCommandBuffer(BSRenderPass* a_pass)
		{
			using func_t = decltype(&BSUtilityShader::CreateCommandBuffer);
			static REL::Relocation<func_t> func{ ID::BSUtilityShader::CreateCommandBuffer };
			return func(this, a_pass);
		}

		// members
		std::uint32_t currentTechniqueID;  // 118
		std::uint32_t currentDecl;         // 11C
	};
	static_assert(sizeof(BSUtilityShader) == 0x120);
}
