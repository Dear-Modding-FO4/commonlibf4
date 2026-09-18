#pragma once

#include "REX/FModule.h"

namespace RE
{
	class BSTimer
	{
	public:
		struct RuntimeData
		{
			std::uint64_t firstTime;                      // 00
			std::uint64_t disabledLastTime;               // 08
			std::uint64_t disabledFirstTime;              // 10
			std::uint32_t disableCounter;                 // 18
			bool          useGlobalTimeMultiplierTarget;  // 1C
		};
		static_assert(sizeof(RuntimeData) == 0x20);

		[[nodiscard]] static constexpr std::size_t GetRuntimeSize(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return a_runtime == REX::FModule::Runtime::kAE ? 0x50 : 0x40;
		}

		[[nodiscard]] RuntimeData& GetRuntimeData(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return *reinterpret_cast<RuntimeData*>(
				reinterpret_cast<std::byte*>(this) + GetRuntimeSize(a_runtime) - sizeof(RuntimeData));
		}

		[[nodiscard]] const RuntimeData& GetRuntimeData(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) const noexcept
		{
			return *reinterpret_cast<const RuntimeData*>(
				reinterpret_cast<const std::byte*>(this) + GetRuntimeSize(a_runtime) - sizeof(RuntimeData));
		}

		[[nodiscard]] static BSTimer* GetSingleton()
		{
			static REL::Relocation<BSTimer*> singleton{ ID::BSTimer::Singleton };
			return singleton.get();
		}

		[[nodiscard]] static float QGlobalTimeMultiplier()
		{
			static REL::Relocation<float*> value{ ID::BSTimer::QGlobalTimeMultiplier };
			return *value;
		}

		[[nodiscard]] static float QGlobalTimeMultiplierTarget()
		{
			static REL::Relocation<float*> value{ ID::BSTimer::QGlobalTimeMultiplierTarget };
			return *value;
		}

		void SetGlobalTimeMultiplier(float a_mult, bool a_now)
		{
			using func_t = decltype(&BSTimer::SetGlobalTimeMultiplier);
			static REL::Relocation<func_t> func{ ID::BSTimer::SetGlobalTimeMultiplier };
			return func(this, a_mult, a_now);
		}

		// members
		std::int64_t  highPrecisionInitTime;          // 00
		float         clamp;                          // 08
		float         clampRemainder;                 // 0C
		float         delta;                          // 10
		float         realTimeDelta;                  // 14
		std::uint64_t lastTime;                       // 18
		// AE-only tail; use GetRuntimeData across runtimes.
		std::byte     unk20[0x10];                    // 20
		std::uint64_t firstTime;                      // 30
		std::uint64_t disabledLastTime;               // 38
		std::uint64_t disabledFirstTime;              // 40
		std::uint32_t disableCounter;                 // 48
		bool          useGlobalTimeMultiplierTarget;  // 4C
	};
	static_assert(sizeof(BSTimer) == 0x50);
}
