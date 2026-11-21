#pragma once

namespace RE
{
	class __declspec(novtable) hkaRaycastInterface
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaRaycastInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkaRaycastInterface };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
		virtual void Unk_02();  // 0x10 [02]
	};
	static_assert(sizeof(hkaRaycastInterface) == 0x8);
}
