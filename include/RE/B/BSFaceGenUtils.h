#pragma once

#include "RE/B/BGSCharacterTint.h"
#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/B/BSTArray.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class TESNPC;

	namespace BSTextureArray
	{
		class StaticTextureIndexed;
	}

	namespace BSFaceGenUtils
	{
		class FaceGenData :
			public BSIntrusiveRefCounted
		{
		public:
			void Reset()
			{
				using func_t = decltype(&FaceGenData::Reset);
				static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::FaceGenData::Reset };
				return func(this);
			}

			// members
			NiPointer<BSTextureArray::StaticTextureIndexed> textures[4];                     // 008
			std::byte                                       hairLookupTexture[0x30 - 0x28];  // 028 - BSResource::RHandleType
			std::uint32_t                                   layerCount;                      // 030
			std::uint32_t                                   lru[128];                        // 034
			std::uint32_t                                   stamp;                           // 234
		};
		static_assert(sizeof(FaceGenData) == 0x238);

		// Size in bytes of the scratch buffer StartFaceCustomizationGenerationForNPC and
		// RenderFaceCustomizationTextures work in.
		[[nodiscard]] inline std::size_t QCustomizationBufferSize()
		{
			using func_t = decltype(&BSFaceGenUtils::QCustomizationBufferSize);
			static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::QCustomizationBufferSize };
			return func();
		}

		// Builds the customization textures for the NPC in one step. Allocates a FaceGenData when a_data is null.
		inline bool GenerateFaceCustomizationForNPC(TESNPC& a_npc, BSTArray<BGSCharacterTint::Entry*>& a_entries, FaceGenData* a_data, bool a_unk)
		{
			using func_t = decltype(&BSFaceGenUtils::GenerateFaceCustomizationForNPC);
			static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::GenerateFaceCustomizationForNPC };
			return func(a_npc, a_entries, a_data, a_unk);
		}

		// Collects the base skin texture set and one layer per tint entry into a_data and starts loading their
		// textures. a_buffer is a QCustomizationBufferSize sized scratch buffer. Returns true when the loads were started;
		// UpdatePendingCustomizationTextures drops the request when it returns false.
		// Finish with PollFaceCustomizationLoads and RenderFaceCustomizationTextures.
		inline bool StartFaceCustomizationGenerationForNPC(TESNPC& a_npc, BSTArray<BGSCharacterTint::Entry*>& a_entries, FaceGenData& a_data, void* a_buffer, std::uint32_t a_unk, bool a_unk2)
		{
			using func_t = decltype(&BSFaceGenUtils::StartFaceCustomizationGenerationForNPC);
			static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::StartFaceCustomizationGenerationForNPC };
			return func(a_npc, a_entries, a_data, a_buffer, a_unk, a_unk2);
		}

		// True once every texture StartFaceCustomizationGenerationForNPC asked for has resolved.
		[[nodiscard]] inline bool PollFaceCustomizationLoads(FaceGenData& a_data)
		{
			using func_t = decltype(&BSFaceGenUtils::PollFaceCustomizationLoads);
			static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::PollFaceCustomizationLoads };
			return func(a_data);
		}

		// Composites the layers into the diffuse, normal and second map render targets with shader 11.
		inline void RenderFaceCustomizationTextures(FaceGenData* a_data, void* a_buffer)
		{
			using func_t = decltype(&BSFaceGenUtils::RenderFaceCustomizationTextures);
			static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::RenderFaceCustomizationTextures };
			return func(a_data, a_buffer);
		}

		inline void UpdateBodyTintColorsOnScene(NiAVObject* a_root, NiColorA& a_color)
		{
			using func_t = decltype(&BSFaceGenUtils::UpdateBodyTintColorsOnScene);
			static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::UpdateBodyTintColorsOnScene };
			return func(a_root, a_color);
		}

		inline void UpdateFaceCustomizationTexturesOnScene(NiAVObject* a_root, TESNPC* a_npc, bool a_unk, bool a_unk2)
		{
			using func_t = decltype(&BSFaceGenUtils::UpdateFaceCustomizationTexturesOnScene);
			static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::UpdateFaceCustomizationTexturesOnScene };
			return func(a_root, a_npc, a_unk, a_unk2);
		}

		inline void ApplyBlendedSkinTintToObject(NiAVObject* a_root)
		{
			using func_t = decltype(&BSFaceGenUtils::ApplyBlendedSkinTintToObject);
			static REL::Relocation<func_t> func{ ID::BSFaceGenUtils::ApplyBlendedSkinTintToObject };
			return func(a_root);
		}

		[[nodiscard]] inline std::uint32_t& CustomizationTextureWidth()
		{
			static REL::Relocation<std::uint32_t*> width{ ID::BSFaceGenUtils::CustomizationTextureWidth };
			return *width;
		}

		[[nodiscard]] inline std::uint32_t& CustomizationTextureHeight()
		{
			static REL::Relocation<std::uint32_t*> height{ ID::BSFaceGenUtils::CustomizationTextureHeight };
			return *height;
		}
	}
}
