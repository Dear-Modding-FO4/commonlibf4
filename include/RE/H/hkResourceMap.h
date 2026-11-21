#pragma once

namespace RE
{
	class __declspec(novtable) hkResourceMap
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkResourceMap };
		inline static constexpr auto VTABLE{ VTABLE::hkResourceMap };

		// add
		virtual void findObjectByName();  // 0x0 [00] (char__hkClass__)
		virtual void Unk_01();  // 0x8 [01]
	};
	static_assert(sizeof(hkResourceMap) == 0x8);
}
