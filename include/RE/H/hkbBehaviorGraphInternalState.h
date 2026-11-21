#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbNodeInternalStateInfo;
	class hkbVariableValueSet;

	class __declspec(novtable) hkbBehaviorGraphInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBehaviorGraphInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbBehaviorGraphInternalState };

		// members
		hkArray<hkbNodeInternalStateInfo*> m_nodeInternalStateInfos;  // 0x10
		hkbVariableValueSet* m_variableValueSet;                      // 0x20
	};
	static_assert(sizeof(hkbBehaviorGraphInternalState) == 0x28);
	static_assert(offsetof(hkbBehaviorGraphInternalState, m_nodeInternalStateInfos) == 0x10);
	static_assert(offsetof(hkbBehaviorGraphInternalState, m_variableValueSet) == 0x20);
}
