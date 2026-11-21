#pragma once

#include "RE/H/hkcdFourAabb.h"

namespace RE
{
	class hkcdSimdTreeNode :
		public hkcdFourAabb  // 0x00
	{
	public:

		enum class Flags : std::uint32_t
		{
			kHasInternals = 1,
			kHasLeaves = 2,
			kHasNulls = 4
		};

		// members
		std::uint32_t m_data[4];  // 0x60
	};
	static_assert(sizeof(hkcdSimdTreeNode) == 0x70);
	static_assert(offsetof(hkcdSimdTreeNode, m_data) == 0x60);
}
