#pragma once

#include "RE/H/hkBitField.h"
#include "RE/H/hknpCompositeShape.h"

namespace RE
{
	class hknpCompressedMeshShapeData;

	class __declspec(novtable) hknpCompressedMeshShape :
		public hknpCompositeShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCompressedMeshShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpCompressedMeshShape };

		// members
		hknpCompressedMeshShapeData* m_data;  // 0x60
		hkBitField m_quadIsFlat;              // 0x68
		hkBitField m_triangleIsInterior;      // 0x80
		std::int32_t m_numTriangles;          // 0x98
		std::int32_t m_numConvexShapes;       // 0x9C
	};
	static_assert(sizeof(hknpCompressedMeshShape) == 0xA0);
	static_assert(offsetof(hknpCompressedMeshShape, m_data) == 0x60);
	static_assert(offsetof(hknpCompressedMeshShape, m_quadIsFlat) == 0x68);
	static_assert(offsetof(hknpCompressedMeshShape, m_triangleIsInterior) == 0x80);
	static_assert(offsetof(hknpCompressedMeshShape, m_numTriangles) == 0x98);
	static_assert(offsetof(hknpCompressedMeshShape, m_numConvexShapes) == 0x9C);
}
