#pragma once

#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSNavmesh;

	class __declspec(novtable) FindTriangleForLocationFilter
	{
	public:
		static constexpr auto RTTI{ RTTI::FindTriangleForLocationFilter };
		static constexpr auto VTABLE{ VTABLE::FindTriangleForLocationFilter };

		FindTriangleForLocationFilter() = default;
		virtual ~FindTriangleForLocationFilter() = default;                                                                             // 00
		virtual bool IsValid(const NiPoint3& a_location, BSNavmesh* a_navmesh, std::uint16_t a_triangle, const NiPoint3& a_point) = 0;  // 01
	};
	static_assert(sizeof(FindTriangleForLocationFilter) == 0x8);
}
