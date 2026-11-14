#pragma once

#include "RE/B/BSTSmartPointer.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSNavmesh;
	class BSPathingCell;

	class BSNavmeshInfo
	{
	public:
		// members
		std::uint32_t                  navMeshID;       // 00
		NiPoint3                       approxLocation;  // 04
		std::byte                      unk10[0x30];     // 10
		BSNavmesh*                     navMesh;         // 40
		void*                          bounds;          // 48
		BSTSmartPointer<BSPathingCell> pathingCell;     // 50
		std::byte                      unk58[0x8];      // 58
	};
	static_assert(offsetof(BSNavmeshInfo, navMesh) == 0x40);
	static_assert(sizeof(BSNavmeshInfo) == 0x60);
}
