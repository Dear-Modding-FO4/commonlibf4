#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSLightingShader : public BSShader
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLightingShader };
		static constexpr auto VTABLE{ VTABLE::BSLightingShader };

		struct RuntimeData
		{
			std::byte     unk00[0x4];          // 00
			std::uint32_t currentTechniqueID;  // 04
			std::byte     unk08[0x30];         // 08
			std::uint32_t frameID;             // 38
			std::byte     unk3C[0x4];          // 3C
		};
		static_assert(offsetof(RuntimeData, currentTechniqueID) == 0x4);
		static_assert(offsetof(RuntimeData, frameID) == 0x38);
		static_assert(sizeof(RuntimeData) == 0x40);

		[[nodiscard]] static constexpr std::size_t GetRuntimeSize(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return a_runtime == REX::FModule::Runtime::kOG ? 0x158 : 0x1D0;
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
		std::byte unk118[0x40];  // 118
	};
	static_assert(sizeof(BSLightingShader) == 0x158);
}
