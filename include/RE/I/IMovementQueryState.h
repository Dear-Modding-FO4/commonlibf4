#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementQueryState :
	    public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementQueryState };
		static constexpr auto VTABLE{ VTABLE::IMovementQueryState };

		virtual void Unk_01() = 0;  // 01
		virtual void Unk_02() = 0;  // 02
	};
	static_assert(sizeof(IMovementQueryState) == 0x8);
}
