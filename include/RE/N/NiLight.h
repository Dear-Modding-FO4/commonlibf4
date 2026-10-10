#pragma once

#include "RE/N/NiAVObject.h"
#include "RE/N/NiBound.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPoint3.h"

#include <type_traits>

namespace RE
{
	class __declspec(novtable) NiLight :
	    public NiAVObject  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLight };
		static constexpr auto VTABLE{ VTABLE::NiLight };
		static constexpr auto Ni_RTTI{ Ni_RTTI::NiLight };

		// members
		NiColor amb;   // 120
		NiColor diff;  // 12C
		// Point lights store the radius triple in this slot.
		union
		{
			NiColor  spec{};
			NiPoint3 radius;
		};  // 138
		float dimmer;                    // 144
		alignas(16) NiBound modelBound;  // 150
		void* rendererData;              // 160
	};
	static_assert(sizeof(NiColor) == 0xC && std::is_trivially_copyable_v<NiColor>);
	static_assert(sizeof(NiPoint3) == 0xC && std::is_trivially_copyable_v<NiPoint3>);
	static_assert(offsetof(NiLight, diff) == 0x12C);
	static_assert(offsetof(NiLight, spec) == 0x138);
	static_assert(offsetof(NiLight, radius) == 0x138);
	static_assert(offsetof(NiLight, dimmer) == 0x144);
	static_assert(sizeof(NiLight) == 0x170);
}
