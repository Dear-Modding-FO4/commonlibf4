#pragma once

namespace RE
{
	class hkReferencedObject;

	class hkxMaterialTextureStage
	{
	public:

		// members
		hkReferencedObject* m_texture;  // 0x00
		std::int32_t m_usageHint;       // 0x08
		std::int32_t m_tcoordChannel;   // 0x0C
	};
	static_assert(sizeof(hkxMaterialTextureStage) == 0x10);
	static_assert(offsetof(hkxMaterialTextureStage, m_texture) == 0x0);
	static_assert(offsetof(hkxMaterialTextureStage, m_usageHint) == 0x8);
	static_assert(offsetof(hkxMaterialTextureStage, m_tcoordChannel) == 0xC);
}
