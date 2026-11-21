#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbGenerator.h"

namespace RE
{
	class hkbGenerator;

	class __declspec(novtable) hkbScriptGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbScriptGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbScriptGenerator };

		// members
		hkbGenerator* m_child;              // 0x88
		hkStringPtr m_onActivateScript;     // 0x90
		hkStringPtr m_onPreUpdateScript;    // 0x98
		hkStringPtr m_onGenerateScript;     // 0xA0
		hkStringPtr m_onHandleEventScript;  // 0xA8
		hkStringPtr m_onDeactivateScript;   // 0xB0
		std::int32_t m_refOnActivate;       // 0xB8
		std::int32_t m_refOnPreUpdate;      // 0xBC
		std::int32_t m_refOnGenerate;       // 0xC0
		std::int32_t m_refOnHandleEvent;    // 0xC4
		std::int32_t m_refOnDeactivate;     // 0xC8
		float m_timeStep;                   // 0xCC
	};
	static_assert(sizeof(hkbScriptGenerator) == 0xD0);
	static_assert(offsetof(hkbScriptGenerator, m_child) == 0x88);
	static_assert(offsetof(hkbScriptGenerator, m_onActivateScript) == 0x90);
	static_assert(offsetof(hkbScriptGenerator, m_onPreUpdateScript) == 0x98);
	static_assert(offsetof(hkbScriptGenerator, m_onGenerateScript) == 0xA0);
	static_assert(offsetof(hkbScriptGenerator, m_onHandleEventScript) == 0xA8);
	static_assert(offsetof(hkbScriptGenerator, m_onDeactivateScript) == 0xB0);
	static_assert(offsetof(hkbScriptGenerator, m_refOnActivate) == 0xB8);
	static_assert(offsetof(hkbScriptGenerator, m_refOnPreUpdate) == 0xBC);
	static_assert(offsetof(hkbScriptGenerator, m_refOnGenerate) == 0xC0);
	static_assert(offsetof(hkbScriptGenerator, m_refOnHandleEvent) == 0xC4);
	static_assert(offsetof(hkbScriptGenerator, m_refOnDeactivate) == 0xC8);
	static_assert(offsetof(hkbScriptGenerator, m_timeStep) == 0xCC);
}
