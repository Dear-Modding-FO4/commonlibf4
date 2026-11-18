#pragma once

#include "RE/H/hkcdRay.h"
#include "RE/H/hknpCollisionQuery.h"

namespace RE
{
	class hknpShape;

	class hknpShapeCastQuery :
		public hknpCollisionQuery
	{
	public:
		// members
		const hknpShape* m_shape;      // 20
		std::byte        unk28[0x8];   // 28
		hkcdRay          m_ray;        // 30
		float            m_accuracy;   // 60
		std::byte        unk64[0x1C];  // 64
	};
	static_assert(offsetof(hknpShapeCastQuery, m_shape) == 0x20);
	static_assert(offsetof(hknpShapeCastQuery, m_ray) == 0x30);
	static_assert(offsetof(hknpShapeCastQuery, m_accuracy) == 0x60);
	static_assert(sizeof(hknpShapeCastQuery) == 0x80);
}
