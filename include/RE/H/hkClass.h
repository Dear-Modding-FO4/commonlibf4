#pragma once

namespace RE
{
	class hkCustomAttributes;

	class hkClass
	{
	public:

		enum class SignatureFlags : std::uint32_t
		{
			kSignatureLocal = 1
		};

		enum class FlagValues : std::uint32_t
		{
			kFlagsNone = 0,
			kFlagsNotSerializable = 1
		};

		// members
		const char* m_name;                       // 0x00
		hkClass* m_parent;                        // 0x08
		std::int32_t m_objectSize;                // 0x10
		std::int32_t m_numImplementedInterfaces;  // 0x14
		std::uint8_t m_declaredEnums[0x10];       // 0x18
		std::uint8_t m_declaredMembers[0x10];     // 0x28
		void* m_defaults;                         // 0x38
		hkCustomAttributes* m_attributes;         // 0x40
		std::uint32_t m_flags;                    // 0x48
		std::int32_t m_describedVersion;          // 0x4C
	};
	static_assert(sizeof(hkClass) == 0x50);
	static_assert(offsetof(hkClass, m_name) == 0x0);
	static_assert(offsetof(hkClass, m_parent) == 0x8);
	static_assert(offsetof(hkClass, m_objectSize) == 0x10);
	static_assert(offsetof(hkClass, m_numImplementedInterfaces) == 0x14);
	static_assert(offsetof(hkClass, m_declaredEnums) == 0x18);
	static_assert(offsetof(hkClass, m_declaredMembers) == 0x28);
	static_assert(offsetof(hkClass, m_defaults) == 0x38);
	static_assert(offsetof(hkClass, m_attributes) == 0x40);
	static_assert(offsetof(hkClass, m_flags) == 0x48);
	static_assert(offsetof(hkClass, m_describedVersion) == 0x4C);
}
