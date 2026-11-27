#pragma once

#include "RE/B/BSPathingLocation.h"

namespace RE
{
	class TESObjectREFR;

	class Pathing
	{
	public:
		Pathing() = delete;

		[[nodiscard]] static Pathing* GetSingleton()
		{
			static REL::Relocation<Pathing**> singleton{ ID::Pathing::Singleton };
			return *singleton;
		}

		[[nodiscard]] BSPathingLocation MakePathingLocation(TESObjectREFR* a_reference)
		{
			// The native return uses an explicit result buffer after the this pointer.
			using func_t = BSPathingLocation* (*)(Pathing*, BSPathingLocation*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ ID::Pathing::MakePathingLocation };
			BSPathingLocation              result{};
			func(this, &result, a_reference);
			return result;
		}
	};
}
