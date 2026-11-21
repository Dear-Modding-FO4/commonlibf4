#pragma once

namespace RE
{
	class __declspec(novtable) hkProcessHandler
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkProcessHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkProcessHandler };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
		virtual void Unk_02();  // 0x10 [02]
		virtual void Unk_03();  // 0x18 [03]
		virtual void Unk_04();  // 0x20 [04]
		virtual void Unk_05();  // 0x28 [05]
		virtual void Unk_06();  // 0x30 [06]
		virtual void Unk_07();  // 0x38 [07]
		virtual void Unk_08();  // 0x40 [08]
	};
	static_assert(sizeof(hkProcessHandler) == 0x8);
}
