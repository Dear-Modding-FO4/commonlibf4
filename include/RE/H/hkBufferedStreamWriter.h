#pragma once

namespace RE
{
	class __declspec(novtable) hkBufferedStreamWriter
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkBufferedStreamWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkBufferedStreamWriter };

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

		// members
		std::uint32_t unk8;  // 0x8
		std::uint8_t padC[0x4];  // 0xC
		void* unk10;  // 0x10
		void* unk18;  // 0x18
		std::uint32_t unk20;  // 0x20
		std::uint32_t unk24;  // 0x24
		std::uint8_t unk28[0x8];  // 0x28
	};
	static_assert(sizeof(hkBufferedStreamWriter) == 0x30);
	static_assert(offsetof(hkBufferedStreamWriter, unk8) == 0x8);
	static_assert(offsetof(hkBufferedStreamWriter, padC) == 0xC);
	static_assert(offsetof(hkBufferedStreamWriter, unk10) == 0x10);
	static_assert(offsetof(hkBufferedStreamWriter, unk18) == 0x18);
	static_assert(offsetof(hkBufferedStreamWriter, unk20) == 0x20);
	static_assert(offsetof(hkBufferedStreamWriter, unk24) == 0x24);
	static_assert(offsetof(hkBufferedStreamWriter, unk28) == 0x28);
}
