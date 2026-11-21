#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkcdPlanarEntity :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdPlanarEntity };
		inline static constexpr auto VTABLE{ VTABLE::hkcdPlanarEntity };

		// add
		virtual void extractGeometry();  // 0x20 [04] (hkGeometry&)

		// members
		void* m_debugger;  // 0x10
	};
	static_assert(sizeof(hkcdPlanarEntity) == 0x18);
	static_assert(offsetof(hkcdPlanarEntity, m_debugger) == 0x10);
}
