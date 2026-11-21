#pragma once

namespace RE
{
	class hknpPairCollisionFilterMapPairFilterKeyOverrideType
	{
	public:

		// members
		void* m_elem;             // 0x00
		std::int32_t m_numElems;  // 0x08
		std::int32_t m_hashMod;   // 0x0C
	};
	static_assert(sizeof(hknpPairCollisionFilterMapPairFilterKeyOverrideType) == 0x10);
	static_assert(offsetof(hknpPairCollisionFilterMapPairFilterKeyOverrideType, m_elem) == 0x0);
	static_assert(offsetof(hknpPairCollisionFilterMapPairFilterKeyOverrideType, m_numElems) == 0x8);
	static_assert(offsetof(hknpPairCollisionFilterMapPairFilterKeyOverrideType, m_hashMod) == 0xC);
}
