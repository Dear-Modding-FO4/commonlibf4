#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/N/NavMesh.h"

namespace RE
{
	class NavMeshArray
	{
	public:
		// members
		BSTArray<BSTSmartPointer<NavMesh>> navMeshes;  // 00
	};
	static_assert(sizeof(NavMeshArray) == 0x18);
}
