#pragma once

namespace RE
{
	class __declspec(novtable) hknpModifier
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpModifier };

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
		virtual void Unk_09();  // 0x48 [09]
		virtual void Unk_0A();  // 0x50 [0A]
		virtual void Unk_0B();  // 0x58 [0B]
		virtual void Unk_0C();  // 0x60 [0C]
		virtual void Unk_0D();  // 0x68 [0D]
	};
	static_assert(sizeof(hknpModifier) == 0x8);
}
