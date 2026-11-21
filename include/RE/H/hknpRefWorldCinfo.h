#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hknpWorldCinfo.h"

namespace RE
{
	class __declspec(novtable) hknpRefWorldCinfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpRefWorldCinfo };
		inline static constexpr auto VTABLE{ VTABLE::hknpRefWorldCinfo };

		// members
		hknpWorldCinfo m_info;  // 0x10
	};
	static_assert(sizeof(hknpRefWorldCinfo) == 0x110);
	static_assert(offsetof(hknpRefWorldCinfo, m_info) == 0x10);
}
