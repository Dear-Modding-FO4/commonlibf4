#pragma once

#include "RE/H/hknpBroadPhase.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpHybridBroadPhase :
		public hknpBroadPhase  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpHybridBroadPhase };
		inline static constexpr auto VTABLE{ VTABLE::hknpHybridBroadPhase };

		// members
		void* unk8;                // 0x08
		std::uint8_t unk10[0x50];  // 0x10
		std::uint32_t unk60;       // 0x60
		std::uint8_t pad64[0x4];   // 0x64
		hkArray<std::uint32_t> unk68;  // 0x68
		hkArray<std::uint8_t> unk78;  // 0x78
		std::uint32_t unk88;       // 0x88
		std::uint8_t pad8C[0x4];   // 0x8C
		std::uint32_t unk90;       // 0x90
		std::uint32_t unk94;       // 0x94
		void* unk98;               // 0x98
	};
	static_assert(sizeof(hknpHybridBroadPhase) == 0xA0);
	static_assert(offsetof(hknpHybridBroadPhase, unk8) == 0x8);
	static_assert(offsetof(hknpHybridBroadPhase, unk60) == 0x60);
	static_assert(offsetof(hknpHybridBroadPhase, unk88) == 0x88);
	static_assert(offsetof(hknpHybridBroadPhase, unk90) == 0x90);
	static_assert(offsetof(hknpHybridBroadPhase, unk94) == 0x94);
	static_assert(offsetof(hknpHybridBroadPhase, unk98) == 0x98);
	static_assert(offsetof(hknpHybridBroadPhase, unk68) == 0x68);
	static_assert(offsetof(hknpHybridBroadPhase, unk78) == 0x78);
}
