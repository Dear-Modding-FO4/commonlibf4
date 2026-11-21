#pragma once

namespace RE
{
	class __declspec(novtable) bhkTrapListener
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkTrapListener };
		inline static constexpr auto VTABLE{ VTABLE::bhkTrapListener };

		// add
		virtual void Unk_00();  // 0x0 [00]
	};
	static_assert(sizeof(bhkTrapListener) == 0x8);
}
