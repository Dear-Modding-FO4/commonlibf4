#pragma once

#include "RE/H/hknpExternMeshShapeGeometry.h"

namespace RE
{
	class hkGeometry;

	class __declspec(novtable) hknpDefaultExternMeshShapeGeometry :
		public hknpExternMeshShapeGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDefaultExternMeshShapeGeometry };
		inline static constexpr auto VTABLE{ VTABLE::hknpDefaultExternMeshShapeGeometry };

		// members
		hkGeometry* m_geometry;   // 0x10
		std::uint8_t unk18[0x8];  // 0x18
	};
	static_assert(sizeof(hknpDefaultExternMeshShapeGeometry) == 0x20);
	static_assert(offsetof(hknpDefaultExternMeshShapeGeometry, m_geometry) == 0x10);
}
