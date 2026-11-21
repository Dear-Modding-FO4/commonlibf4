#pragma once

#include "RE/H/hkAabb.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hknpCompositeShape.h"
#include "RE/H/hknpMinMaxQuadTree.h"

namespace RE
{
	class __declspec(novtable) hknpHeightFieldShape :
		public hknpCompositeShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpHeightFieldShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpHeightFieldShape };

		// add
		virtual void getQuadInfoAt();  // 0xF0 [1E] (int_int_hkVector4f__ushort__uint_)
		virtual void getCoarseMinMax();  // 0xF8 [1F] (int_int_int_hkVector4f__hkVector4f_)

		// members
		hkAabb m_aabb;                        // 0x60
		hkVector4f m_floatToIntScale;         // 0x80
		hkVector4f m_intToFloatScale;         // 0x90
		std::int32_t m_intSizeX;              // 0xA0
		std::int32_t m_intSizeZ;              // 0xA4
		std::int32_t m_numBitsX;              // 0xA8
		std::int32_t m_numBitsZ;              // 0xAC
		hknpMinMaxQuadTree m_minMaxTree;      // 0xB0
		std::int32_t m_minMaxTreeCoarseness;  // 0xE0
		bool m_includeShapeKeyInSdfContacts;  // 0xE4
	};
	static_assert(sizeof(hknpHeightFieldShape) == 0xF0);
	static_assert(offsetof(hknpHeightFieldShape, m_aabb) == 0x60);
	static_assert(offsetof(hknpHeightFieldShape, m_floatToIntScale) == 0x80);
	static_assert(offsetof(hknpHeightFieldShape, m_intToFloatScale) == 0x90);
	static_assert(offsetof(hknpHeightFieldShape, m_intSizeX) == 0xA0);
	static_assert(offsetof(hknpHeightFieldShape, m_intSizeZ) == 0xA4);
	static_assert(offsetof(hknpHeightFieldShape, m_numBitsX) == 0xA8);
	static_assert(offsetof(hknpHeightFieldShape, m_numBitsZ) == 0xAC);
	static_assert(offsetof(hknpHeightFieldShape, m_minMaxTree) == 0xB0);
	static_assert(offsetof(hknpHeightFieldShape, m_minMaxTreeCoarseness) == 0xE0);
	static_assert(offsetof(hknpHeightFieldShape, m_includeShapeKeyInSdfContacts) == 0xE4);
}
