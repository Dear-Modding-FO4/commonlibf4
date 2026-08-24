#pragma once

#include "RE/B/BSAudioListener.h"

#include "REX/W32/X3DAUDIO.h"

namespace RE
{
	class __declspec(novtable) BSXAudio2AudioListener :
		public BSAudioListener
	{
	public:
		inline static constexpr auto RTTI{ RTTI::BSXAudio2AudioListener };
		inline static constexpr auto VTABLE{ VTABLE::BSXAudio2AudioListener };

		// members
		REX::W32::X3DAUDIO_LISTENER m_x3DListener;  // 0x48
	};
}
