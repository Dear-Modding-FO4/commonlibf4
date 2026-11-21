#pragma once

namespace RE
{
	class hkMultiThreadCheck
	{
	public:

		enum class AccessType : std::uint32_t
		{
			kAccessIgnore = 0,
			kAccessRo = 1,
			kAccessRw = 2
		};

		enum class ReadMode : std::uint32_t
		{
			kThisObjectOnly = 0,
			kRecursive = 1
		};

		// members
		std::uint32_t m_threadId;      // 0x00
		std::int32_t m_stackTraceId;   // 0x04
		std::uint16_t m_markCount;     // 0x08
		std::uint16_t m_markBitStack;  // 0x0A
	};
	static_assert(sizeof(hkMultiThreadCheck) == 0xC);
	static_assert(offsetof(hkMultiThreadCheck, m_threadId) == 0x0);
	static_assert(offsetof(hkMultiThreadCheck, m_stackTraceId) == 0x4);
	static_assert(offsetof(hkMultiThreadCheck, m_markCount) == 0x8);
	static_assert(offsetof(hkMultiThreadCheck, m_markBitStack) == 0xA);
}
