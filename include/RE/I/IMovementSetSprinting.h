#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementSetSprinting :
	    public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementSetSprinting };
		static constexpr auto VTABLE{ VTABLE::IMovementSetSprinting };

	protected:
		// Unknown signatures reserve engine slots without exposing unsafe calls.
		virtual void Unk_01() = 0;  // 01
		virtual void Unk_02() = 0;  // 02
		virtual void Unk_03() = 0;  // 03
		virtual void Unk_04() = 0;  // 04
	};
	static_assert(sizeof(IMovementSetSprinting) == 0x8);
}
