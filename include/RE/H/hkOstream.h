#pragma once

namespace RE
{
	class __declspec(novtable) hkOstream
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkOstream };
		inline static constexpr auto VTABLE{ VTABLE::hkOstream };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
		virtual void Unk_02();  // 0x10 [02]
		virtual void Unk_03();  // 0x18 [03]

		// members
		std::uint32_t unk8;  // 0x8
		std::uint8_t padC[0x4];  // 0xC
		void* unk10;  // 0x10
	};
	static_assert(sizeof(hkOstream) == 0x18);
	static_assert(offsetof(hkOstream, unk8) == 0x8);
	static_assert(offsetof(hkOstream, padC) == 0xC);
	static_assert(offsetof(hkOstream, unk10) == 0x10);
}
