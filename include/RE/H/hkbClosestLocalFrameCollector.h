#pragma once

#include "RE/H/hkLocalFrameCollector.h"
#include "RE/H/hkbHandle.h"

namespace RE
{
	class __declspec(novtable) hkbClosestLocalFrameCollector :
		public hkLocalFrameCollector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbClosestLocalFrameCollector };
		inline static constexpr auto VTABLE{ VTABLE::hkbClosestLocalFrameCollector };

		// members
		hkbHandle unk10;  // 0x10
		float unk40;              // 0x40
		std::uint8_t pad44[0x4];  // 0x44
		hkbHandle unk48;  // 0x48
		float unk78;              // 0x78
		std::uint8_t pad7C[0x4];  // 0x7C
		void* unk80;  // 0x80
		void* unk88;              // 0x88
	};
	static_assert(sizeof(hkbClosestLocalFrameCollector) == 0x90);
	static_assert(offsetof(hkbClosestLocalFrameCollector, unk40) == 0x40);
	static_assert(offsetof(hkbClosestLocalFrameCollector, unk78) == 0x78);
	static_assert(offsetof(hkbClosestLocalFrameCollector, unk88) == 0x88);
	static_assert(offsetof(hkbClosestLocalFrameCollector, unk10) == 0x10);
	static_assert(offsetof(hkbClosestLocalFrameCollector, unk48) == 0x48);
	static_assert(offsetof(hkbClosestLocalFrameCollector, pad7C) == 0x7C);
	static_assert(offsetof(hkbClosestLocalFrameCollector, unk80) == 0x80);
}
