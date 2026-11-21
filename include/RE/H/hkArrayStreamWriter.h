#pragma once

namespace RE
{
	class __declspec(novtable) hkArrayStreamWriter
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkArrayStreamWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkArrayStreamWriter };

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

		// members
		std::uint32_t unk8;  // 0x8
		std::uint8_t unkC[0x4];  // 0xC
		void* unk10;  // 0x10
		std::uint8_t unk18[0xC];  // 0x18
		std::uint32_t unk24;  // 0x24
	};
	static_assert(sizeof(hkArrayStreamWriter) == 0x28);
	static_assert(offsetof(hkArrayStreamWriter, unk8) == 0x8);
	static_assert(offsetof(hkArrayStreamWriter, unkC) == 0xC);
	static_assert(offsetof(hkArrayStreamWriter, unk10) == 0x10);
	static_assert(offsetof(hkArrayStreamWriter, unk18) == 0x18);
	static_assert(offsetof(hkArrayStreamWriter, unk24) == 0x24);
}
