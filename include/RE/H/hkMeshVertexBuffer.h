#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshVertexBuffer :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMeshVertexBuffer };
		inline static constexpr auto VTABLE{ VTABLE::hkMeshVertexBuffer };
		enum class Flags : std::uint32_t
		{
			kAccessRead = 1,
			kAccessWrite = 2,
			kAccessReadWrite = 3,
			kAccessWriteDiscard = 4,
			kAccessElementArray = 8
		};

		enum class LockResult : std::uint32_t
		{
			kResultFailure = 0,
			kResultSuccess = 1,
			kResultInUse = 2
		};

	};
	static_assert(sizeof(hkMeshVertexBuffer) == 0x10);
}
