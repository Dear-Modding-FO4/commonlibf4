#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshBody :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMeshBody };
		inline static constexpr auto VTABLE{ VTABLE::hkMeshBody };
		enum class PickDataIdentifier : std::uint32_t
		{
			kPickRigidBodyWithBreakableBody = 1,
			kPickUser = 4096
		};

	};
	static_assert(sizeof(hkMeshBody) == 0x10);
}
