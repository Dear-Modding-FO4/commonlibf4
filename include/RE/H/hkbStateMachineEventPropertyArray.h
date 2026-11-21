#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbEventProperty;

	class __declspec(novtable) hkbStateMachineEventPropertyArray :
		public hkReferencedObject  // 0x00
	{
	public:

		// members
		hkArray<hkbEventProperty> m_events;  // 0x10
	};
	static_assert(sizeof(hkbStateMachineEventPropertyArray) == 0x20);
	static_assert(offsetof(hkbStateMachineEventPropertyArray, m_events) == 0x10);
}
