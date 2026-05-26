#pragma once

#include "RE/H/hkMeshTexture.h"

namespace RE
{
	class __declspec(novtable) hkMemoryMeshTexture : public hkMeshTexture
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryMeshTexture };
		static constexpr auto VTABLE{ VTABLE::hkMemoryMeshTexture };
	};
}
