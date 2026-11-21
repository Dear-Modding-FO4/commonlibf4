#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkxAttributeHolder.h"

namespace RE
{
	class hkReferencedObject;
	class hkxMaterialProperty;
	class hkxMaterialTextureStage;

	class __declspec(novtable) hkxMaterial :
		public hkxAttributeHolder  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxMaterial };
		inline static constexpr auto VTABLE{ VTABLE::hkxMaterial };

		enum class UVMappingAlgorithm : std::uint32_t
		{
			kUvmaSrt = 0,
			kUvmaTrs = 1,
			kUvma3dsmaxStyle = 2,
			kUvmaMayaStyle = 3
		};
		enum class Transparency : std::uint8_t
		{
			kTranspNone = 0,
			kTranspAlpha = 2,
			kTranspAdditive = 3,
			kTranspColorkey = 4,
			kTranspSubtractive = 9
		};

		enum class TextureType : std::uint32_t
		{
			kTexUnknown = 0,
			kTexDiffuse = 1,
			kTexReflection = 2,
			kTexBump = 3,
			kTexNormal = 4,
			kTexDisplacement = 5,
			kTexSpecular = 6,
			kTexSpecularandgloss = 7,
			kTexOpacity = 8,
			kTexEmissive = 9,
			kTexRefraction = 10,
			kTexGloss = 11,
			kTexDominants = 12,
			kTexNotexported = 13
		};

		enum class PropertyKey : std::uint32_t
		{
			kPropertyMtlTypeBlend = 1,
			kPropertyMtlUvIdStage0 = 256,
			kPropertyMtlUvIdStage1 = 257,
			kPropertyMtlUvIdStage2 = 258,
			kPropertyMtlUvIdStage3 = 259,
			kPropertyMtlUvIdStage4 = 260,
			kPropertyMtlUvIdStage5 = 261,
			kPropertyMtlUvIdStage6 = 262,
			kPropertyMtlUvIdStage7 = 263,
			kPropertyMtlUvIdStage8 = 264,
			kPropertyMtlUvIdStage9 = 265,
			kPropertyMtlUvIdStage10 = 266,
			kPropertyMtlUvIdStage11 = 267,
			kPropertyMtlUvIdStage12 = 268,
			kPropertyMtlUvIdStage13 = 269,
			kPropertyMtlUvIdStage14 = 270,
			kPropertyMtlUvIdStage15 = 271,
			kPropertyMtlUvIdStageMax = 272
		};

		// members
		hkStringPtr m_name;                                          // 0x20
		hkArray<hkxMaterialTextureStage> m_stages;                   // 0x28
		std::uint8_t unk38[0x8];                                     // 0x38
		hkVector4f m_diffuseColor;                                   // 0x40
		hkVector4f m_ambientColor;                                   // 0x50
		hkVector4f m_specularColor;                                  // 0x60
		hkVector4f m_emissiveColor;                                  // 0x70
		hkArray<hkxMaterial*> m_subMaterials;                        // 0x80
		hkReferencedObject* m_extraData;                             // 0x90
		float m_uvMapScale[2];                                       // 0x98
		float m_uvMapOffset[2];                                      // 0xA0
		float m_uvMapRotation;                                       // 0xA8
		hkEnum<UVMappingAlgorithm, std::uint32_t> m_uvMapAlgorithm;  // 0xAC
		float m_specularMultiplier;                                  // 0xB0
		float m_specularExponent;                                    // 0xB4
		hkEnum<Transparency, std::uint8_t> m_transparency;           // 0xB8
		std::uint8_t padB9[0x7];                                     // 0xB9
		std::uint64_t m_userData;                                    // 0xC0
		hkArray<hkxMaterialProperty> m_properties;                   // 0xC8
	};
	static_assert(sizeof(hkxMaterial) == 0xE0);
	static_assert(offsetof(hkxMaterial, m_name) == 0x20);
	static_assert(offsetof(hkxMaterial, m_stages) == 0x28);
	static_assert(offsetof(hkxMaterial, m_diffuseColor) == 0x40);
	static_assert(offsetof(hkxMaterial, m_ambientColor) == 0x50);
	static_assert(offsetof(hkxMaterial, m_specularColor) == 0x60);
	static_assert(offsetof(hkxMaterial, m_emissiveColor) == 0x70);
	static_assert(offsetof(hkxMaterial, m_subMaterials) == 0x80);
	static_assert(offsetof(hkxMaterial, m_extraData) == 0x90);
	static_assert(offsetof(hkxMaterial, m_uvMapScale) == 0x98);
	static_assert(offsetof(hkxMaterial, m_uvMapOffset) == 0xA0);
	static_assert(offsetof(hkxMaterial, m_uvMapRotation) == 0xA8);
	static_assert(offsetof(hkxMaterial, m_uvMapAlgorithm) == 0xAC);
	static_assert(offsetof(hkxMaterial, m_specularMultiplier) == 0xB0);
	static_assert(offsetof(hkxMaterial, m_specularExponent) == 0xB4);
	static_assert(offsetof(hkxMaterial, m_transparency) == 0xB8);
	static_assert(offsetof(hkxMaterial, m_userData) == 0xC0);
	static_assert(offsetof(hkxMaterial, m_properties) == 0xC8);
}
