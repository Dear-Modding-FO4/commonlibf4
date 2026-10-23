#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"

namespace RE
{
	class __declspec(novtable) IMovementParameters :
	    public BSIntrusiveRefCounted  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementParameters };
		static constexpr auto VTABLE{ VTABLE::IMovementParameters };

		virtual ~IMovementParameters() = default;  // 00

		virtual void Unk_01() = 0;  // 01
		virtual void Unk_02() = 0;  // 02
		virtual void Unk_03() = 0;  // 03
		virtual void Unk_04() = 0;  // 04
		virtual void Unk_05() = 0;  // 05
		virtual void Unk_06() = 0;  // 06
		virtual void Unk_07() = 0;  // 07
		virtual void Unk_08() = 0;  // 08
	};
	static_assert(sizeof(IMovementParameters) == 0x10);
}
