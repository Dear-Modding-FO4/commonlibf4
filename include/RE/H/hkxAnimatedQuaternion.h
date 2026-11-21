#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkxAnimatedQuaternion :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxAnimatedQuaternion };
		inline static constexpr auto VTABLE{ VTABLE::hkxAnimatedQuaternion };

		// members
		hkArray<float> m_quaternions;  // 0x10
	};
	static_assert(sizeof(hkxAnimatedQuaternion) == 0x20);
	static_assert(offsetof(hkxAnimatedQuaternion, m_quaternions) == 0x10);
}
