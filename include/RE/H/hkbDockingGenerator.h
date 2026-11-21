#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbGenerator.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbGenerator;

	class __declspec(novtable) hkbDockingGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDockingGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbDockingGenerator };

		enum class BlendType : std::uint8_t
		{
			kBlendTypeBlendIn = 0,
			kBlendTypeFullOn = 1
		};

		enum class DockingFlagBits : std::uint32_t
		{
			kFlagNone = 0,
			kFlagDockToFuturePosition = 1,
			kFlagOverrideMotion = 2
		};

		// members
		std::int16_t m_dockingBone;      // 0x88
		std::uint8_t pad8A[0x6];         // 0x8A
		hkVector4f m_translationOffset;  // 0x90
		hkQuaternionf m_rotationOffset;  // 0xA0
		hkEnum<BlendType, std::int8_t> m_blendType;         // 0xB0
		std::uint8_t unkB1[0x1];         // 0xB1
		std::uint16_t m_flags;           // 0xB2
		std::uint8_t padB4[0x4];         // 0xB4
		hkbGenerator* m_child;           // 0xB8
		std::int32_t m_intervalStart;    // 0xC0
		std::int32_t m_intervalEnd;      // 0xC4
		float m_localTime;               // 0xC8
		float m_previousLocalTime;       // 0xCC
		float m_intervalStartLocalTime;  // 0xD0
		float m_intervalEndLocalTime;    // 0xD4
	};
	static_assert(sizeof(hkbDockingGenerator) == 0xE0);
	static_assert(offsetof(hkbDockingGenerator, m_dockingBone) == 0x88);
	static_assert(offsetof(hkbDockingGenerator, m_translationOffset) == 0x90);
	static_assert(offsetof(hkbDockingGenerator, m_rotationOffset) == 0xA0);
	static_assert(offsetof(hkbDockingGenerator, m_blendType) == 0xB0);
	static_assert(offsetof(hkbDockingGenerator, m_flags) == 0xB2);
	static_assert(offsetof(hkbDockingGenerator, m_child) == 0xB8);
	static_assert(offsetof(hkbDockingGenerator, m_intervalStart) == 0xC0);
	static_assert(offsetof(hkbDockingGenerator, m_intervalEnd) == 0xC4);
	static_assert(offsetof(hkbDockingGenerator, m_localTime) == 0xC8);
	static_assert(offsetof(hkbDockingGenerator, m_previousLocalTime) == 0xCC);
	static_assert(offsetof(hkbDockingGenerator, m_intervalStartLocalTime) == 0xD0);
	static_assert(offsetof(hkbDockingGenerator, m_intervalEndLocalTime) == 0xD4);
}
