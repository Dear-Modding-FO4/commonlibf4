#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementSelectIdle :
		public IMovementInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementSelectIdle };
		static constexpr auto VTABLE{ VTABLE::IMovementSelectIdle };

	protected:
		virtual void Unk_01() = 0;  // 01
		virtual void Unk_02() = 0;  // 02
		virtual void Unk_03() = 0;  // 03

	public:
		// Sets fIdleStopTime and dispatches ActionIdleStop; success reports the action result.
		virtual bool StopIdle(float a_stopTime) = 0;  // 04
		// Cancels pending movement-idle loading and releases its retained result.
		virtual void FlushIdle() = 0;  // 05
	};
	static_assert(sizeof(IMovementSelectIdle) == 0x8);
}
