#pragma once

namespace RE
{
	class __declspec(novtable) hkDebugDisplayHandler
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDebugDisplayHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkDebugDisplayHandler };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
		virtual void addGeometry();  // 0x10 [02] (hkDisplayGeometry__unsigned___int64_int_unsigned___int64)
		virtual void Unk_03();  // 0x18 [03]
		virtual void Unk_04();  // 0x20 [04]
		virtual void Unk_05();  // 0x28 [05]
		virtual void Unk_06();  // 0x30 [06]
		virtual void Unk_07();  // 0x38 [07]
		virtual void Unk_08();  // 0x40 [08]
		virtual void Unk_09();  // 0x48 [09]
		virtual void updateGeometries();  // 0x50 [0A] (hkTransformf__unsigned___int64__int_int)
		virtual void Unk_0B();  // 0x58 [0B]
		virtual void Unk_0C();  // 0x60 [0C]
		virtual void Unk_0D();  // 0x68 [0D]
		virtual void Unk_0E();  // 0x70 [0E]
		virtual void Unk_0F();  // 0x78 [0F]
		virtual void Unk_10();  // 0x80 [10]
		virtual void Unk_11();  // 0x88 [11]
		virtual void Unk_12();  // 0x90 [12]
		virtual void Unk_13();  // 0x98 [13]
		virtual void Unk_14();  // 0xA0 [14]
		virtual void Unk_15();  // 0xA8 [15]
		virtual void Unk_16();  // 0xB0 [16]
		virtual void Unk_17();  // 0xB8 [17]
		virtual void Unk_18();  // 0xC0 [18]
		virtual void Unk_19();  // 0xC8 [19]
		virtual void Unk_1A();  // 0xD0 [1A]
		virtual void Unk_1B();  // 0xD8 [1B]
		virtual void Unk_1C();  // 0xE0 [1C]
		virtual void Unk_1D();  // 0xE8 [1D]
		virtual void Unk_1E();  // 0xF0 [1E]
		virtual void Unk_1F();  // 0xF8 [1F]
		virtual void Unk_20();  // 0x100 [20]
		virtual void Unk_21();  // 0x108 [21]
		virtual void Unk_22();  // 0x110 [22]
		virtual void Unk_23();  // 0x118 [23]
		virtual void Unk_24();  // 0x120 [24]
	};
	static_assert(sizeof(hkDebugDisplayHandler) == 0x8);
}
