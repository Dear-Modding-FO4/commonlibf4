#pragma once

#include "RE/F/FindTriangleForLocationFilter.h"

namespace RE
{
	class __declspec(novtable) FindTriangleForLocationTraversableFilter :
		public FindTriangleForLocationFilter
	{
	public:
		static constexpr auto RTTI{ RTTI::FindTriangleForLocationTraversableFilter };
		static constexpr auto VTABLE{ VTABLE::FindTriangleForLocationTraversableFilter };

		FindTriangleForLocationTraversableFilter(std::uint8_t a_flags, float a_maxFall, float a_maxRise)
		{
			using func_t = FindTriangleForLocationTraversableFilter* (*)(FindTriangleForLocationTraversableFilter*, std::uint8_t, float, float);
			static REL::Relocation<func_t> func{ ID::FindTriangleForLocationTraversableFilter::Ctor };
			func(this, a_flags, a_maxFall, a_maxRise);
		}

		virtual ~FindTriangleForLocationTraversableFilter() override = default;                                                              // 00
		virtual bool IsValid(const NiPoint3& a_location, BSNavmesh* a_navmesh, std::uint16_t a_triangle, const NiPoint3& a_point) override;  // 01

		// members
		float        maxFall;  // 08
		float        maxRise;  // 0C
		std::uint8_t flags;    // 10
	};
	static_assert(offsetof(FindTriangleForLocationTraversableFilter, flags) == 0x10);
	static_assert(sizeof(FindTriangleForLocationTraversableFilter) == 0x18);
}
