#pragma once

namespace RE
{
	class __declspec(novtable) hkStackTracer
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkStackTracer };
		inline static constexpr auto VTABLE{ VTABLE::hkStackTracer };

		// add
		virtual void Unk_00();  // 0x0 [00]
	};
	static_assert(sizeof(hkStackTracer) == 0x8);
}
