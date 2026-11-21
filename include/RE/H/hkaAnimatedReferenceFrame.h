#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkaAnimatedReferenceFrame :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaAnimatedReferenceFrame };
		inline static constexpr auto VTABLE{ VTABLE::hkaAnimatedReferenceFrame };
		enum class hkaReferenceFrameTypeEnum : std::uint32_t
		{
			kReferenceFrameUnknown = 0,
			kReferenceFrameDefault = 1,
			kReferenceFrameParametric = 2
		};

	};
	static_assert(sizeof(hkaAnimatedReferenceFrame) == 0x10);
}
