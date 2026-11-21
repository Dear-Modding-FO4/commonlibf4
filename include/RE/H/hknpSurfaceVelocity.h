#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpSurfaceVelocity :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSurfaceVelocity };
		inline static constexpr auto VTABLE{ VTABLE::hknpSurfaceVelocity };
		enum class Space : std::uint32_t
		{
			kUseLocalSpace = 0,
			kUseWorldSpace = 1
		};

	};
	static_assert(sizeof(hknpSurfaceVelocity) == 0x10);
}
