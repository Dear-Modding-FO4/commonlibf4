#pragma once

#include "RE/H/hkAabb.h"
#include "RE/H/hknpCompositeShape.h"
#include "RE/H/hknpLodShapeLevelOfDetailInfo.h"

namespace RE
{
	class hknpShape;

	class __declspec(novtable) hknpLodShape :
		public hknpCompositeShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpLodShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpLodShape };

		// members
		std::int32_t m_numLevelsOfDetail;          // 0x60
		hknpLodShapeLevelOfDetailInfo m_infos[8];  // 0x64
		std::uint8_t padA4[0x4];                   // 0xA4
		hknpShape* m_shapes[8];                    // 0xA8
		std::uint32_t m_shapesMemorySizes[8];      // 0xE8
		std::int32_t m_indexCurrentShapeOnSpu;     // 0x108
		std::uint8_t pad10C[0x4];                  // 0x10C
		hknpShape* m_currentShapePpuAddress;       // 0x110
		std::uint8_t unk118[0x8];                  // 0x118
		hkAabb m_maximumAabb;                      // 0x120
	};
	static_assert(sizeof(hknpLodShape) == 0x140);
	static_assert(offsetof(hknpLodShape, m_numLevelsOfDetail) == 0x60);
	static_assert(offsetof(hknpLodShape, m_infos) == 0x64);
	static_assert(offsetof(hknpLodShape, m_shapes) == 0xA8);
	static_assert(offsetof(hknpLodShape, m_shapesMemorySizes) == 0xE8);
	static_assert(offsetof(hknpLodShape, m_indexCurrentShapeOnSpu) == 0x108);
	static_assert(offsetof(hknpLodShape, m_currentShapePpuAddress) == 0x110);
	static_assert(offsetof(hknpLodShape, m_maximumAabb) == 0x120);
}
