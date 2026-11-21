#pragma once

#include "RE/H/hkBaseObject.h"

namespace RE
{
	class __declspec(novtable) hknpSpaceSplitter :
		public hkBaseObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSpaceSplitter };
		inline static constexpr auto VTABLE{ VTABLE::hknpSpaceSplitter };

		// add
		virtual void onShiftWorld();  // 0x10 [02] (hkVector4f&)

		// members
		std::uint8_t m_linksSortedForMultithreadedSolving[0x10];  // 0x08
		std::uint32_t m_type;                                     // 0x18
		std::int32_t m_numGridCells;                              // 0x1C
		std::int32_t m_numLinks;                                  // 0x20
	};
	static_assert(sizeof(hknpSpaceSplitter) == 0x28);
	static_assert(offsetof(hknpSpaceSplitter, m_linksSortedForMultithreadedSolving) == 0x8);
	static_assert(offsetof(hknpSpaceSplitter, m_type) == 0x18);
	static_assert(offsetof(hknpSpaceSplitter, m_numGridCells) == 0x1C);
	static_assert(offsetof(hknpSpaceSplitter, m_numLinks) == 0x20);
}
