#pragma once

#include "RE/B/BSGraphics.h"
#include "RE/B/BSReloadShaderI.h"
#include "RE/B/BSShaderTechniqueIDMap.h"
#include "RE/N/NiRefObject.h"
#include "RE/R/RelocateMember.h"
#include "REX/FModule.h"

namespace RE
{
	class BSGeometry;
	class BSRenderPass;
	class BSShaderMaterial;

	class __declspec(novtable) BSShader :
	    public NiRefObject,     // 000
	    public BSReloadShaderI  // 010
	{
	public:
		static constexpr auto RTTI{ RTTI::BSShader };
		static constexpr auto VTABLE{ VTABLE::BSShader };

		struct RuntimeData
		{
			BSShaderTechniqueIDMap::MapType<BSGraphics::VertexShader*>  vertexShaders;   // 000
			BSShaderTechniqueIDMap::MapType<BSGraphics::HullShader*>    hullShaders;     // 030
			BSShaderTechniqueIDMap::MapType<BSGraphics::DomainShader*>  domainShaders;   // 060
			BSShaderTechniqueIDMap::MapType<BSGraphics::PixelShader*>   pixelShaders;    // 090
			BSShaderTechniqueIDMap::MapType<BSGraphics::ComputeShader*> computeShaders;  // 0C0
			const char*                                                 fxpFilename;     // 0F0
		};
		static_assert(offsetof(RuntimeData, hullShaders) == 0x30);
		static_assert(offsetof(RuntimeData, domainShaders) == 0x60);
		static_assert(offsetof(RuntimeData, pixelShaders) == 0x90);
		static_assert(offsetof(RuntimeData, computeShaders) == 0xC0);
		static_assert(offsetof(RuntimeData, fxpFilename) == 0xF0);
		static_assert(sizeof(RuntimeData) == 0xF8);

		struct BuildCommandBufferParam
		{
		public:
			// members
			BSGeometry*                                 geometry;             // 00
			std::uint32_t                               vertexRegisters;      // 08, float4 count
			std::uint32_t                               pixelRegisters;       // 0C, float4 count
			std::byte                                   unk10[0x08];          // 10
			std::uint32_t                               lodMode;              // 18
			std::byte                                   unk1C[0x04];          // 1C
			const float*                                vertexConstants;      // 20
			float*                                      pixelConstants;       // 28
			std::byte                                   unk30[0x10];          // 30
			BSGraphics::VertexShader*                   vertexShader;         // 40
			REX::TEnum<BSGraphics::AlphaBlendMode>      alphaBlendMode;       // 48
			REX::TEnum<BSGraphics::AlphaBlendWriteMode> alphaBlendWriteMode;  // 4C
			std::byte                                   unk50[0x18];          // 50
		};
		static_assert(offsetof(BuildCommandBufferParam, pixelRegisters) == 0x0C);
		static_assert(offsetof(BuildCommandBufferParam, lodMode) == 0x18);
		static_assert(offsetof(BuildCommandBufferParam, vertexConstants) == 0x20);
		static_assert(offsetof(BuildCommandBufferParam, pixelConstants) == 0x28);
		static_assert(offsetof(BuildCommandBufferParam, vertexShader) == 0x40);
		static_assert(offsetof(BuildCommandBufferParam, alphaBlendWriteMode) == 0x4C);
		static_assert(sizeof(BuildCommandBufferParam) == 0x68);

		// add
		virtual bool          SetupTechnique(std::uint32_t a_currentPass) = 0;                                            // 02
		virtual void          RestoreTechnique(std::uint32_t a_currentPass) = 0;                                          // 03
		virtual void          SetupMaterial([[maybe_unused]] const BSShaderMaterial* a_material) { return; }              // 04
		virtual void          RestoreMaterial([[maybe_unused]] const BSShaderMaterial* a_material) { return; }            // 05
		virtual void          SetupMaterialSecondary([[maybe_unused]] const BSShaderMaterial* a_material) { return; }     // 06
		virtual void          SetupGeometry(BSRenderPass* a_currentPass) = 0;                                             // 07
		virtual void          RestoreGeometry(BSRenderPass* a_currentPass) = 0;                                           // 08
		virtual void          GetTechniqueName(std::uint32_t a_techniqueID, char* a_buffer, std::uint32_t a_bufferSize);  // 09
		virtual void          RecreateRendererData() { return; }                                                          // 0A
		virtual void          ReloadShaders(bool a_clear);                                                                // 0B
		virtual std::uint32_t GetBonesVertexConstant() const { return 0; }                                                // 0C

		[[nodiscard]] std::byte* BuildCommandBuffer(BuildCommandBufferParam& a_param)
		{
			using func_t = decltype(&BSShader::BuildCommandBuffer);
			static REL::Relocation<func_t> func{ ID::BSShader::BuildCommandBuffer };
			return func(this, a_param);
		}

		[[nodiscard]] static constexpr std::size_t GetRuntimeSize(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return a_runtime == REX::FModule::Runtime::kOG ? 0x118 : 0x190;
		}

		[[nodiscard]] RuntimeData& GetRuntimeData() noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0x20, 0x98, 0x98 });
		}

		[[nodiscard]] const RuntimeData& GetRuntimeData() const noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0x20, 0x98, 0x98 });
		}

		[[nodiscard]] auto&              GetVertexShaders() noexcept { return GetRuntimeData().vertexShaders; }
		[[nodiscard]] const auto&        GetVertexShaders() const noexcept { return GetRuntimeData().vertexShaders; }
		[[nodiscard]] auto&              GetHullShaders() noexcept { return GetRuntimeData().hullShaders; }
		[[nodiscard]] const auto&        GetHullShaders() const noexcept { return GetRuntimeData().hullShaders; }
		[[nodiscard]] auto&              GetDomainShaders() noexcept { return GetRuntimeData().domainShaders; }
		[[nodiscard]] const auto&        GetDomainShaders() const noexcept { return GetRuntimeData().domainShaders; }
		[[nodiscard]] auto&              GetPixelShaders() noexcept { return GetRuntimeData().pixelShaders; }
		[[nodiscard]] const auto&        GetPixelShaders() const noexcept { return GetRuntimeData().pixelShaders; }
		[[nodiscard]] auto&              GetComputeShaders() noexcept { return GetRuntimeData().computeShaders; }
		[[nodiscard]] const auto&        GetComputeShaders() const noexcept { return GetRuntimeData().computeShaders; }
		[[nodiscard]] const char*&       GetFxpFilename() noexcept { return GetRuntimeData().fxpFilename; }
		[[nodiscard]] const char* const& GetFxpFilename() const noexcept { return GetRuntimeData().fxpFilename; }

		// members
		std::int32_t shaderType;   // 018
		std::byte    unk1C[0x04];  // 01C

	private:
		// Preserve the OG storage extent; NG/AE add three critical sections.
		std::byte unk20[0xF8];  // 020
	};
	static_assert(offsetof(BSShader, shaderType) == 0x18);
	static_assert(sizeof(BSShader) == 0x118);
}
