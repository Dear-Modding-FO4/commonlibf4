#pragma once

#include "RE/B/BSShader.h"
#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) BSImagespaceShader :
	    public BSShader  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::BSImagespaceShader };
		static constexpr auto VTABLE{ VTABLE::BSImagespaceShader };

		struct RuntimeData
		{
			// The secondary base moves with the runtime-sized BSShader base.
			ImageSpaceEffect imageSpaceEffect;  // 000
			const char*      className;         // 0B0
			const char*      sourcePrefix;      // 0B8
			std::byte        unkC0[0x68];       // 0C0
		};
		static_assert(offsetof(RuntimeData, className) == 0xB0);
		static_assert(offsetof(RuntimeData, sourcePrefix) == 0xB8);
		static_assert(sizeof(RuntimeData) == 0x128);

		struct ShaderMacro
		{
			const char* name;   // 00
			const char* value;  // 08
		};
		static_assert(offsetof(ShaderMacro, value) == 0x08);
		static_assert(sizeof(ShaderMacro) == 0x10);

		[[nodiscard]] static constexpr std::size_t GetRuntimeSize(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return a_runtime == REX::FModule::Runtime::kOG ? 0x240 : 0x2B8;
		}

		[[nodiscard]] RuntimeData& GetRuntimeData() noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0x118, 0x190, 0x190 });
		}

		[[nodiscard]] const RuntimeData& GetRuntimeData() const noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0x118, 0x190, 0x190 });
		}

		[[nodiscard]] ImageSpaceEffect& GetImageSpaceEffect() noexcept
		{
			return GetRuntimeData().imageSpaceEffect;
		}

		[[nodiscard]] const ImageSpaceEffect& GetImageSpaceEffect() const noexcept
		{
			return GetRuntimeData().imageSpaceEffect;
		}

		[[nodiscard]] const char*& GetShaderClassName() noexcept
		{
			return GetRuntimeData().className;
		}

		[[nodiscard]] const char* const& GetShaderClassName() const noexcept
		{
			return GetRuntimeData().className;
		}

		[[nodiscard]] const char*& GetSourcePrefix() noexcept
		{
			return GetRuntimeData().sourcePrefix;
		}

		[[nodiscard]] const char* const& GetSourcePrefix() const noexcept
		{
			return GetRuntimeData().sourcePrefix;
		}

		[[nodiscard]] ShaderMacro* GetShaderMacros(ShaderMacro* a_macros)
		{
			using func_t = ShaderMacro* (*)(BSImagespaceShader*, ShaderMacro*);
			const auto vtable = *reinterpret_cast<const std::uintptr_t* const*>(this);
			return reinterpret_cast<func_t>(vtable[0x11])(this, a_macros);
		}

	private:
		std::byte unk118[0x128];  // 118
	};
	static_assert(sizeof(BSImagespaceShader) == 0x240);
}
