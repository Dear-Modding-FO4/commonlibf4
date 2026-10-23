#pragma once

#include "RE/B/BSAudio.h"

#include "REX/W32/X3DAUDIO.h"

namespace RE
{
	class __declspec(novtable) BSXAudio2Audio :
		public BSAudio
	{
	public:
		inline static constexpr auto RTTI{ RTTI::BSXAudio2Audio };
		inline static constexpr auto VTABLE{ VTABLE::BSXAudio2Audio };

		virtual ~BSXAudio2Audio() = default;  // 00

		[[nodiscard]] static BSXAudio2Audio* GetSingleton() noexcept
		{
			static REL::Relocation<BSXAudio2Audio**> singleton{ ID::BSXAudio2Audio::Singleton };
			return *singleton;
		}

		// members
		REX::W32::X3DAUDIO_HANDLE m_x3DHandle;  // 0x18
	};
	static_assert(sizeof(BSXAudio2Audio) == 0x30);
}
