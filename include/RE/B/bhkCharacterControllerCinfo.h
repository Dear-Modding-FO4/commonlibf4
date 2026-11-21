#pragma once

namespace RE
{
	class __declspec(novtable) bhkCharacterControllerCinfo
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterControllerCinfo };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterControllerCinfo };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
		virtual void Unk_02();  // 0x10 [02]
		virtual void Unk_03();  // 0x18 [03]
		virtual void Unk_04();  // 0x20 [04]
		virtual void Unk_05();  // 0x28 [05]
		virtual void Unk_06();  // 0x30 [06]

		// members
		std::uint8_t unk08[0x98];  // 0x08
	};
	static_assert(sizeof(bhkCharacterControllerCinfo) == 0xA0);
}
