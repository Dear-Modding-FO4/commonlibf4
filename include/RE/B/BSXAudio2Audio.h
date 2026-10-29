#pragma once

#include "RE/B/BSAudio.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "REX/W32/XAUDIO2.h"

#include "REX/W32/X3DAUDIO.h"

namespace RE
{
	class MonitorAPO;

	class __declspec(novtable) BSXAudio2Audio :
		public BSAudio
	{
	public:
		inline static constexpr auto RTTI{ RTTI::BSXAudio2Audio };
		inline static constexpr auto VTABLE{ VTABLE::BSXAudio2Audio };

		struct Monitor
		{
			MonitorAPO*                      m_apo;    // 0x00
			REX::W32::IXAudio27SubmixVoice*  m_voice;  // 0x08
		};
		static_assert(sizeof(Monitor) == 0x10);

		using Monitors = BSTSmallArray<Monitor, 8>;

		virtual ~BSXAudio2Audio() = default;  // 00

		[[nodiscard]] static BSXAudio2Audio* GetSingleton() noexcept
		{
			static REL::Relocation<BSXAudio2Audio**> singleton{ ID::BSXAudio2Audio::Singleton };
			return *singleton;
		}

		[[nodiscard]] static BSSpinLock* GetMonitorLock() noexcept
		{
			static REL::Relocation<BSSpinLock*> lock{ ID::BSXAudio2Audio::MonitorLock };
			return lock.get();
		}

		// Indexed by monitor handle; guarded by GetMonitorLock().
		[[nodiscard]] static Monitors* GetActiveMonitors() noexcept
		{
			static REL::Relocation<Monitors*> monitors{ ID::BSXAudio2Audio::ActiveMonitors };
			return monitors.get();
		}

		// Released monitors kept for reuse by CreateMonitor; guarded by GetMonitorLock().
		[[nodiscard]] static Monitors* GetInactiveMonitors() noexcept
		{
			static REL::Relocation<Monitors*> monitors{ ID::BSXAudio2Audio::InactiveMonitors };
			return monitors.get();
		}

		// members
		REX::W32::X3DAUDIO_HANDLE m_x3DHandle;  // 0x18
	};
	static_assert(sizeof(BSXAudio2Audio) == 0x30);
}
