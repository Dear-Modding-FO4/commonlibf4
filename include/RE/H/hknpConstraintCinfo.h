#pragma once

namespace RE
{
	class hkpConstraintData;

	class hknpConstraintCinfo
	{
	public:

		// members
		hkpConstraintData* m_constraintData;  // 0x00
		std::uint32_t m_bodyA;                // 0x08
		std::uint32_t m_bodyB;                // 0x0C
		std::uint8_t m_flags;                 // 0x10
	};
	static_assert(sizeof(hknpConstraintCinfo) == 0x18);
	static_assert(offsetof(hknpConstraintCinfo, m_constraintData) == 0x0);
	static_assert(offsetof(hknpConstraintCinfo, m_bodyA) == 0x8);
	static_assert(offsetof(hknpConstraintCinfo, m_bodyB) == 0xC);
	static_assert(offsetof(hknpConstraintCinfo, m_flags) == 0x10);
}
