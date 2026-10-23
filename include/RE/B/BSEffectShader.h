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

		struct RuntimeData
		{
			std::uint32_t currentTechniqueID;  // 00
			std::byte     unk04[0x4];          // 04
		};
		static_assert(offsetof(RuntimeData, currentTechniqueID) == 0x0);
		static_assert(sizeof(RuntimeData) == 0x8);

		[[nodiscard]] static constexpr std::size_t GetRuntimeSize(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return a_runtime == REX::FModule::Runtime::kOG ? 0x120 : 0x198;
		}

		[[nodiscard]] RuntimeData& GetRuntimeData() noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0x118, 0x190, 0x190 });
		}

		[[nodiscard]] const RuntimeData& GetRuntimeData() const noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0x118, 0x190, 0x190 });
		}

	private:
		// OG storage; use GetRuntimeData across runtimes.
		std::byte unk118[0x8];  // 118
	};
	static_assert(sizeof(BSEffectShader) == 0x120);
}
