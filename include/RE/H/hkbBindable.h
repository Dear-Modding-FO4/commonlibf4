#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbVariableBindingSet;

	class __declspec(novtable) hkbBindable :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBindable };
		inline static constexpr auto VTABLE{ VTABLE::hkbBindable };

		// add
		virtual void collectBindables();  // 0x20 [04] (hkbBindableCollector&)
		virtual void copyVariablesToMembers();  // 0x28 [05] (hkbSyncVariableSetup&_hkbBehaviorGraph&_bool)
		virtual void copyVariableToEnable();  // 0x30 [06] (hkbSyncVariableSetup&_hkbBehaviorGraph&)

		// members
		hkbVariableBindingSet* m_variableBindingSet;  // 0x10
		hkArray<void*> m_cachedBindables;             // 0x18
		bool m_areBindablesCached;                    // 0x28
		bool m_hasEnableChanged;                      // 0x29
	};
	static_assert(sizeof(hkbBindable) == 0x30);
	static_assert(offsetof(hkbBindable, m_variableBindingSet) == 0x10);
	static_assert(offsetof(hkbBindable, m_cachedBindables) == 0x18);
	static_assert(offsetof(hkbBindable, m_areBindablesCached) == 0x28);
	static_assert(offsetof(hkbBindable, m_hasEnableChanged) == 0x29);
}
