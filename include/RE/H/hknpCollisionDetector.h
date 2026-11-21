#pragma once

namespace RE
{
	class __declspec(novtable) hknpCollisionDetector
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCollisionDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpCollisionDetector };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
		virtual void Unk_02();  // 0x10 [02]
		virtual void Unk_03();  // 0x18 [03]

		// members
		std::uint8_t unk08[0x8];  // 0x08
	};
	static_assert(sizeof(hknpCollisionDetector) == 0x10);
}
