#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkGeometryTriangle;

	class __declspec(novtable) hkGeometry :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkGeometry };
		inline static constexpr auto VTABLE{ VTABLE::hkGeometry };

		enum class GeometryType : std::uint32_t
		{
			kGeometryStatic = 0,
			kGeometryDynamicVertices = 1
		};

		// members
		hkArray<hkVector4f> m_vertices;           // 0x10
		hkArray<hkGeometryTriangle> m_triangles;  // 0x20
	};
	static_assert(sizeof(hkGeometry) == 0x30);
	static_assert(offsetof(hkGeometry, m_vertices) == 0x10);
	static_assert(offsetof(hkGeometry, m_triangles) == 0x20);
}
