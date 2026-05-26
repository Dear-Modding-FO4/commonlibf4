#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshMaterial : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMeshMaterial };
		static constexpr auto VTABLE{ VTABLE::hkMeshMaterial };
	};
}
