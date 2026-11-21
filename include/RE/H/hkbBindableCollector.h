#pragma once

namespace RE
{
	class __declspec(novtable) hkbBindableCollector
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBindableCollector };
		inline static constexpr auto VTABLE{ VTABLE::hkbBindableCollector };

		// add
		virtual void Unk_00();  // 0x0 [00]
		virtual void Unk_01();  // 0x8 [01]
	};
	static_assert(sizeof(hkbBindableCollector) == 0x8);
}
