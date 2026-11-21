#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbParticleSystemEventPayload :
		public hkbEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbParticleSystemEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbParticleSystemEventPayload };

		enum class SystemType : std::uint32_t
		{
			kDebris = 0,
			kDust = 1,
			kExplosion = 2,
			kSmoke = 3,
			kSparks = 4
		};

		// members
		std::uint8_t m_type;           // 0x10
		std::uint8_t unk11[0x1];       // 0x11
		std::int16_t m_emitBoneIndex;  // 0x12
		std::uint8_t unk14[0xC];       // 0x14
		hkVector4f m_offset;           // 0x20
		hkVector4f m_direction;        // 0x30
		std::int32_t m_numParticles;   // 0x40
		float m_speed;                 // 0x44
	};
	static_assert(sizeof(hkbParticleSystemEventPayload) == 0x50);
	static_assert(offsetof(hkbParticleSystemEventPayload, m_type) == 0x10);
	static_assert(offsetof(hkbParticleSystemEventPayload, m_emitBoneIndex) == 0x12);
	static_assert(offsetof(hkbParticleSystemEventPayload, m_offset) == 0x20);
	static_assert(offsetof(hkbParticleSystemEventPayload, m_direction) == 0x30);
	static_assert(offsetof(hkbParticleSystemEventPayload, m_numParticles) == 0x40);
	static_assert(offsetof(hkbParticleSystemEventPayload, m_speed) == 0x44);
}
