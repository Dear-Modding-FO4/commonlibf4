#pragma once

#include "RE/H/hkbGeneratorPartitionInfo.h"
#include "RE/H/hkbNode.h"

namespace RE
{
	class __declspec(novtable) hkbGenerator :
		public hkbNode  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbGenerator };

		// add
		virtual void generate();  // 0xB8 [17] (hkbContext&_hkbGeneratorOutput___hkbGeneratorOutput&_float)
		virtual void Unk_18();  // 0xC0 [18]
		virtual void updateSync();  // 0xC8 [19] (hkbContext&)
		virtual void setLocalTime();  // 0xD0 [1A] (hkbContext&_float)
		virtual void startEcho();  // 0xD8 [1B] (float)
		virtual void preUpdate();  // 0xE0 [1C] (hkbContext&_float)
		virtual void Unk_1D();  // 0xE8 [1D]

		// members
		hkbGeneratorPartitionInfo m_partitionInfo;  // 0x50
		void* m_syncInfo;                           // 0x78
		std::int8_t m_pad[4];                       // 0x80
	};
	static_assert(sizeof(hkbGenerator) == 0x88);
	static_assert(offsetof(hkbGenerator, m_partitionInfo) == 0x50);
	static_assert(offsetof(hkbGenerator, m_syncInfo) == 0x78);
	static_assert(offsetof(hkbGenerator, m_pad) == 0x80);
}
