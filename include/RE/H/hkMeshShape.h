#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshShape :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMeshShape };
		inline static constexpr auto VTABLE{ VTABLE::hkMeshShape };
		enum class AccessFlags : std::uint32_t
		{
			kAccessIndices = 1,
			kAccessVertexBuffer = 2
		};

	};
	static_assert(sizeof(hkMeshShape) == 0x10);
}
