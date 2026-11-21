#pragma once

namespace RE
{
	class __declspec(novtable) bhkIAddToWorld
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkIAddToWorld };
		inline static constexpr auto VTABLE{ VTABLE::bhkIAddToWorld };

		// add
		virtual void Unk_00();  // 0x0 [00]
	};
	static_assert(sizeof(bhkIAddToWorld) == 0x8);
}
