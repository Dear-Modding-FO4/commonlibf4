#pragma once

#include "RE/H/hkObjectWriter.h"

namespace RE
{
	class hkObjectCopier;

	class __declspec(novtable) hkPlatformObjectWriter :
		public hkObjectWriter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkPlatformObjectWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkPlatformObjectWriter };

		// members
		hkObjectCopier* m_copier;  // 0x10
		void* m_cache;             // 0x18
	};
	static_assert(sizeof(hkPlatformObjectWriter) == 0x20);
	static_assert(offsetof(hkPlatformObjectWriter, m_copier) == 0x10);
	static_assert(offsetof(hkPlatformObjectWriter, m_cache) == 0x18);
}
