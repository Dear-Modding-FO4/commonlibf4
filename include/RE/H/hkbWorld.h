#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkRefPtr.h"

namespace RE
{
	class hkbSceneModifier;

	class __declspec(novtable) hkbWorld :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbWorld };
		inline static constexpr auto VTABLE{ VTABLE::hkbWorld };

		// add
		virtual void step();  // 0x20 [04] (float_hkJobQueue__hkThreadPool_)

		// members
		hkArray<hkRefPtr<hkbSceneModifier>> unk10;  // 0x10
		std::uint8_t unk20[0x120];  // 0x20
	};
	static_assert(sizeof(hkbWorld) == 0x140);
	static_assert(offsetof(hkbWorld, unk10) == 0x10);
	static_assert(offsetof(hkbWorld, unk20) == 0x20);
}
