#pragma once

namespace RE
{
	class __declspec(novtable) hkRemoteObjectClientSideListener
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkRemoteObjectClientSideListener };
		inline static constexpr auto VTABLE{ VTABLE::hkRemoteObjectClientSideListener };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]

		// members
		std::uint8_t unk08[0x8];  // 0x08
	};
	static_assert(sizeof(hkRemoteObjectClientSideListener) == 0x10);
}
