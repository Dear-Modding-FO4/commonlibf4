#pragma once

#include "RE/H/hkMeshMaterial.h"

namespace RE
{
	class __declspec(novtable) hkMemoryMeshMaterial : public hkMeshMaterial
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryMeshMaterial };
		static constexpr auto VTABLE{ VTABLE::hkMemoryMeshMaterial };
	};
}
