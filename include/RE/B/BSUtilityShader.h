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

		bool SetupTechnique(std::uint32_t a_currentPass) override
		{
			using func_t = decltype(&BSUtilityShader::SetupTechnique);
			static REL::Relocation<func_t> func{ ID::BSUtilityShader::SetupTechnique };
			return func(this, a_currentPass);
		}

		// Technique bits, named from BSUtilityShaderMacros::Get.
		enum class Flags : std::uint32_t
		{
			kVertexColors = 1u << 0,
			kTexture = 1u << 1,
			kSkinned = 1u << 2,
			kNormals = 1u << 3,
			kBinormalTangent = 1u << 4,
			kLandscape = 1u << 5,  // no macro; landscape decl bit
			kEye = 1u << 6,
			kAlphaTest = 1u << 7,
			kClipVolume = 1u << 8,
			kRenderNormal = 1u << 9,
			kRenderNormalFalloff = 1u << 10,
			kRenderNormalClamp = 1u << 11,
			kRenderNormalClear = 1u << 12,
			kRenderDepth = 1u << 13,
			kRenderShadowMap = 1u << 14,
			kRenderShadowMapClamped = 1u << 15,
			kRenderShadowMapPB = 1u << 16,
			kDebugShadowSplit = 1u << 18,
			kGrayscaleMask = 1u << 20,
			kCombined = 1u << 21,
			kInstanced = 1u << 23,  // with kCombined: MERGE_INSTANCED
			kVatsMask = 1u << 24,
			kRenderBaseTexture = 1u << 25,
			kTreeAnim = 1u << 26,
			kLodObject = 1u << 27,
			kAdditionalAlphaMask = 1u << 28,
			kSpline = 1u << 30
		};

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

		struct RuntimeData
		{
			std::uint32_t currentTechniqueID;  // 00
			std::uint32_t currentDecl;         // 04
		};
		static_assert(sizeof(RuntimeData) == 0x8);

		[[nodiscard]] RuntimeData& GetRuntimeData() noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0x118, 0x190 });
		}

		[[nodiscard]] const RuntimeData& GetRuntimeData() const noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0x118, 0x190 });
		}

	private:
		// OG storage; use GetRuntimeData across runtimes.
		std::byte unk118[0x8];  // 118
	};
	static_assert(sizeof(BSUtilityShader) == 0x120);
}
