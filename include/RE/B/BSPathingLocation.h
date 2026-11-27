#pragma once

#include "RE/B/BSPathingCell.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSNavmeshInfo;
	class BSPathingCell;
	class FindTriangleForLocationFilter;

	class BSPathingLocation
	{
	public:
		[[nodiscard]] bool ResolveToClosestNavmeshAndTriangle(FindTriangleForLocationFilter& a_filter)
		{
			using func_t = decltype(&BSPathingLocation::ResolveToClosestNavmeshAndTriangle);
			static REL::Relocation<func_t> func{ ID::BSPathingLocation::ResolveToClosestNavmeshAndTriangle };
			return func(this, a_filter);
		}

		// members
		NiPoint3                              location;    // 00
		const BSNavmeshInfo*                  navMesh;     // 10
		const BSTArray<BSNavmeshInfo const*>* navMeshes;   // 18
		BSTSmartPointer<BSPathingCell>        cell;        // 20
		std::uint16_t                         triangle;    // 28
		std::uint8_t                          flags;       // 2A
		std::uint8_t                          clientData;  // 2B
	};
	static_assert(sizeof(BSPathingLocation) == 0x30);
}
