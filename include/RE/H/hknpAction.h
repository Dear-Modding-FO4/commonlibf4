#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpAction :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpAction };
		inline static constexpr auto VTABLE{ VTABLE::hknpAction };
		enum class Result : std::uint32_t
		{
			kResultOk = 0,
			kResultRemove = 1
		};

	};
	static_assert(sizeof(hknpAction) == 0x10);
}
