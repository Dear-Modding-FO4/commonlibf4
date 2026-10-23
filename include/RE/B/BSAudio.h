#pragma once

#include "RE/B/BSFixedString.h"

namespace RE
{
	class BSAudioListener;
	class BSGameSound;
	class BSIReverbType;

	namespace BSAudioMonitor
	{
		class Receiver;
	}

	namespace BSResource
	{
		class ID;
	}

	class __declspec(novtable) BSAudio
	{
	public:
		inline static constexpr auto RTTI{ RTTI::BSAudio };
		inline static constexpr auto VTABLE{ VTABLE::BSAudio };

		virtual ~BSAudio() = default;

		// add
		[[nodiscard]] virtual bool                            Init() = 0;
		virtual void                                          Shutdown() = 0;
		[[nodiscard]] virtual BSGameSound*                    GetGameSound(const BSResource::ID& a_resourceID) = 0;
		virtual void                                          ReleaseGameSound(BSGameSound* a_gameSound) = 0;
		[[nodiscard]] virtual const BSFixedString&            GetSystemName() = 0;
		virtual void                                          ApplyReverbType(const std::uint8_t a_unk, const BSIReverbType* a_reverbType, std::uint32_t a_tickLength) = 0;
		virtual void                                          Initialize3D() = 0;
		virtual void                                          nullfunc_40() = 0;
		[[nodiscard]] virtual std::uint32_t                   CreateMonitor(float a_amplitude) = 0;
		virtual void                                          ReleaseMonitor(std::uint32_t a_monitor) = 0;
		[[nodiscard]] virtual const BSAudioMonitor::Receiver* GetReceiver(std::uint32_t a_monitor) = 0;
		virtual void                                          GetDeviceInfo() = 0;

		// members
		BSAudioListener* m_listener;        // 0x08
		std::uint32_t    m_outputChannels;  // 0x10
		bool             m_initialized;     // 0x14
	};
	static_assert(sizeof(BSAudio) == 0x18);
}
