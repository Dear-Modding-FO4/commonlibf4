#pragma once

#include "RE/H/hkaDefaultAnimatedReferenceFrame.h"

namespace RE
{
	class __declspec(novtable) hkaParameterizedReferenceFrame :
		public hkaDefaultAnimatedReferenceFrame  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaParameterizedReferenceFrame };
		inline static constexpr auto VTABLE{ VTABLE::hkaParameterizedReferenceFrame };

		// add
		virtual void getParameters();  // 0x38 [07] (hkVector4f&)
		virtual float getDistanceCovered();  // 0x40 [08]
	};
	static_assert(sizeof(hkaParameterizedReferenceFrame) == 0x60);
}
