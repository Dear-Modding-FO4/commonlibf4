#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshTexture : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMeshTexture };
		static constexpr auto VTABLE{ VTABLE::hkMeshTexture };
	};
}
