#pragma once

#include "RE/H/hknpCollisionQuery.h"

namespace RE
{
	class hknpBody;
	class hknpShape;

	class hknpClosestPointsQuery :
		public hknpCollisionQuery
	{
	public:
		// members
		const hknpShape* m_shape;        // 20
		float            m_maxDistance;  // 28
		const hknpBody*  m_body;         // 30
	};
	static_assert(offsetof(hknpClosestPointsQuery, m_shape) == 0x20);
	static_assert(offsetof(hknpClosestPointsQuery, m_maxDistance) == 0x28);
	static_assert(offsetof(hknpClosestPointsQuery, m_body) == 0x30);
	static_assert(sizeof(hknpClosestPointsQuery) == 0x38);
}
