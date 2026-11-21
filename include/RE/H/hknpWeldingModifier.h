#pragma once

namespace RE
{
	class __declspec(novtable) hknpWeldingModifier
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpWeldingModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpWeldingModifier };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
	};
	static_assert(sizeof(hknpWeldingModifier) == 0x8);
}
