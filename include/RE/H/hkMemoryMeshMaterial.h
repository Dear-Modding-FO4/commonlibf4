#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMeshMaterial.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMeshTexture;

	class __declspec(novtable) hkMemoryMeshMaterial :
		public hkMeshMaterial  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryMeshMaterial };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryMeshMaterial };

		// members
		hkStringPtr m_materialName;          // 0x10
		hkArray<hkMeshTexture*> m_textures;  // 0x18
		std::uint8_t unk28[0x8];             // 0x28
		hkVector4f m_diffuseColor;           // 0x30
		hkVector4f m_ambientColor;           // 0x40
		hkVector4f m_specularColor;          // 0x50
		hkVector4f m_emissiveColor;          // 0x60
		std::uint64_t m_userData;            // 0x70
		float m_tesselationFactor;           // 0x78
		float m_displacementAmount;          // 0x7C
	};
	static_assert(sizeof(hkMemoryMeshMaterial) == 0x80);
	static_assert(offsetof(hkMemoryMeshMaterial, m_materialName) == 0x10);
	static_assert(offsetof(hkMemoryMeshMaterial, m_textures) == 0x18);
	static_assert(offsetof(hkMemoryMeshMaterial, m_diffuseColor) == 0x30);
	static_assert(offsetof(hkMemoryMeshMaterial, m_ambientColor) == 0x40);
	static_assert(offsetof(hkMemoryMeshMaterial, m_specularColor) == 0x50);
	static_assert(offsetof(hkMemoryMeshMaterial, m_emissiveColor) == 0x60);
	static_assert(offsetof(hkMemoryMeshMaterial, m_userData) == 0x70);
	static_assert(offsetof(hkMemoryMeshMaterial, m_tesselationFactor) == 0x78);
	static_assert(offsetof(hkMemoryMeshMaterial, m_displacementAmount) == 0x7C);
}
