#pragma once

namespace RE
{
	class __declspec(novtable) hkDataRefCounted
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataRefCounted };
		inline static constexpr auto VTABLE{ VTABLE::hkDataRefCounted };

		// add
		virtual void Unk_00();  // 0x0 [00]

		// members
		std::uint8_t unk08[0x2];  // 0x08
		std::uint16_t unkA;       // 0x0A
		std::uint8_t pad0C[0x4];  // 0x0C
	};
	static_assert(sizeof(hkDataRefCounted) == 0x10);
	static_assert(offsetof(hkDataRefCounted, unkA) == 0xA);
}
