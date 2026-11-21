#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbBehaviorGraphStringData;
	class hkbEventInfo;
	class hkbVariableBounds;
	class hkbVariableInfo;
	class hkbVariableValueSet;

	class __declspec(novtable) hkbBehaviorGraphData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBehaviorGraphData };
		inline static constexpr auto VTABLE{ VTABLE::hkbBehaviorGraphData };

		// members
		hkArray<float> m_attributeDefaults;                 // 0x10
		hkArray<hkbVariableInfo> m_variableInfos;           // 0x20
		hkArray<hkbVariableInfo> m_characterPropertyInfos;  // 0x30
		hkArray<hkbEventInfo> m_eventInfos;                 // 0x40
		hkArray<hkbVariableBounds> m_variableBounds;        // 0x50
		hkbVariableValueSet* m_variableInitialValues;       // 0x60
		hkbBehaviorGraphStringData* m_stringData;           // 0x68
	};
	static_assert(sizeof(hkbBehaviorGraphData) == 0x70);
	static_assert(offsetof(hkbBehaviorGraphData, m_attributeDefaults) == 0x10);
	static_assert(offsetof(hkbBehaviorGraphData, m_variableInfos) == 0x20);
	static_assert(offsetof(hkbBehaviorGraphData, m_characterPropertyInfos) == 0x30);
	static_assert(offsetof(hkbBehaviorGraphData, m_eventInfos) == 0x40);
	static_assert(offsetof(hkbBehaviorGraphData, m_variableBounds) == 0x50);
	static_assert(offsetof(hkbBehaviorGraphData, m_variableInitialValues) == 0x60);
	static_assert(offsetof(hkbBehaviorGraphData, m_stringData) == 0x68);
}
