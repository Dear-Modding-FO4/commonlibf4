#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkaParameterizedReferenceFrame.h"

namespace RE
{
	class __declspec(novtable) hkaDirectionalReferenceFrame :
		public hkaParameterizedReferenceFrame  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaDirectionalReferenceFrame };
		inline static constexpr auto VTABLE{ VTABLE::hkaDirectionalReferenceFrame };

		// members
		hkVector4f m_movementDir;  // 0x60
	};
	static_assert(sizeof(hkaDirectionalReferenceFrame) == 0x70);
	static_assert(offsetof(hkaDirectionalReferenceFrame, m_movementDir) == 0x60);
}
