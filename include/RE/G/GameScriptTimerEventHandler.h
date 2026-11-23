#pragma once

#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"

namespace RE::GameScript
{
	// Partial model: Papyrus wait and script timer heaps (binary min-heaps).
	class TimerEventHandler
	{
	public:
		struct WaitingTimer
		{
			// members
			std::uint32_t expiry;   // 00
			std::uint32_t stackID;  // 04
			void*         vm;       // 08
		};
		static_assert(sizeof(WaitingTimer) == 0x10);

		struct ScriptTimer
		{
			// members
			std::uint32_t refCount;  // 00
			std::uint32_t expiry;    // 04
			std::uint32_t timerID;   // 08
			std::uint32_t pad0C;     // 0C
			void*         object;    // 10
		};
		static_assert(offsetof(ScriptTimer, expiry) == 0x4);

		[[nodiscard]] static TimerEventHandler* GetSingleton()
		{
			static REL::Relocation<TimerEventHandler**> singleton{ ID::GameScript::TimerEventHandler::Singleton };
			return *singleton;
		}

		// members
		std::byte                  pad00[0x20];            // 00
		BSSpinLock                 waitingTimerLock;       // 20
		BSTArray<WaitingTimer>     realTimeWaits;          // 28
		BSTArray<WaitingTimer>     menuTimeWaits;          // 40
		BSTArray<WaitingTimer>     gameTimeWaits;          // 58
		BSSpinLock                 scriptTimerLock;        // 70
		BSTArray<ScriptTimer*>     realTimeScriptTimers;   // 78
		BSTArray<ScriptTimer*>     gameTimeScriptTimers;   // 90
	};
	static_assert(offsetof(TimerEventHandler, waitingTimerLock) == 0x20);
	static_assert(offsetof(TimerEventHandler, realTimeWaits) == 0x28);
	static_assert(offsetof(TimerEventHandler, menuTimeWaits) == 0x40);
	static_assert(offsetof(TimerEventHandler, gameTimeWaits) == 0x58);
	static_assert(offsetof(TimerEventHandler, scriptTimerLock) == 0x70);
	static_assert(offsetof(TimerEventHandler, realTimeScriptTimers) == 0x78);
	static_assert(offsetof(TimerEventHandler, gameTimeScriptTimers) == 0x90);
}
