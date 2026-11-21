#pragma once

#include "RE/H/hkbGenerator.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbTransitionEffect :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbTransitionEffect };
		inline static constexpr auto VTABLE{ VTABLE::hkbTransitionEffect };

		// add
		virtual void Unk_1E();  // 0xF0 [1E]
		virtual void Unk_1F();  // 0xF8 [1F]
		virtual void Unk_20();  // 0x100 [20]
		virtual void Unk_21();  // 0x108 [21]
		virtual void computePatchedBindings();  // 0x110 [22] (hkbContext&_hkbBehaviorGraph&)

		enum class SelfTransitionMode : std::uint8_t
		{
			kSelfTransitionModeContinueIfCyclicBlendIfAcyclic = 0,
			kSelfTransitionModeContinue = 1,
			kSelfTransitionModeReset = 2,
			kSelfTransitionModeBlend = 3
		};

		enum class EventMode : std::uint8_t
		{
			kEventModeDefault = 0,
			kEventModeProcessAll = 1,
			kEventModeIgnoreFromGenerator = 2,
			kEventModeIgnoreToGenerator = 3
		};

		// members
		hkEnum<SelfTransitionMode, std::int8_t> m_selfTransitionMode;  // 0x88
		hkEnum<EventMode, std::int8_t> m_eventMode;           // 0x89
		hkEnum<EventMode, std::int8_t> m_defaultEventMode;    // 0x8A
		std::uint8_t pad8B[0x5];           // 0x8B
		void* m_patchedBindingInfo;        // 0x90
		void* m_fromGenerator;             // 0x98
		void* m_toGenerator;               // 0xA0
	};
	static_assert(sizeof(hkbTransitionEffect) == 0xA8);
	static_assert(offsetof(hkbTransitionEffect, m_selfTransitionMode) == 0x88);
	static_assert(offsetof(hkbTransitionEffect, m_eventMode) == 0x89);
	static_assert(offsetof(hkbTransitionEffect, m_defaultEventMode) == 0x8A);
	static_assert(offsetof(hkbTransitionEffect, m_patchedBindingInfo) == 0x90);
	static_assert(offsetof(hkbTransitionEffect, m_fromGenerator) == 0x98);
	static_assert(offsetof(hkbTransitionEffect, m_toGenerator) == 0xA0);
}
