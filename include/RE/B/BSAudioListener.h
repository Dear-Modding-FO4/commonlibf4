#pragma once

#include "RE/N/NiPoint3.h"

namespace RE
{
	class __declspec(novtable) BSAudioListener
	{
	public:
		inline static constexpr auto RTTI{ RTTI::BSAudioListener };
		inline static constexpr auto VTABLE{ VTABLE::BSAudioListener };

		virtual ~BSAudioListener() = default;

		// add
		virtual void SetPosition(const NiPoint3& a_pos) = 0;
		virtual void Reset(float a_value = 0.0f) = 0;

		// members
		NiPoint3      m_listenerPosition{ NiPoint3::ZERO };
		NiPoint3      m_frontOrientation{ NiPoint3::UNIT_X };
		NiPoint3      m_topOrientation{ NiPoint3::UNIT_Z };
		NiPoint3      m_velocity2{ NiPoint3::ZERO };
		std::uint64_t m_timeLastUpdated{ 0 };
		float         m_velocity{ 0.0f };
	};
	static_assert(sizeof(BSAudioListener) == 0x48);
}
