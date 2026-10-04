#pragma once

#include "RE/E/ExtraDataList.h"

namespace RE
{
	class TESBoundObject;

	namespace BGSInventoryItemUtils
	{
		[[nodiscard]] inline std::int32_t GetInventoryValue(TESBoundObject* a_object, ExtraDataList& a_extra)
		{
			using func_t = decltype(&BGSInventoryItemUtils::GetInventoryValue);
			static REL::Relocation<func_t> func{ ID::BGSInventoryItemUtils::GetInventoryValue };
			return func(a_object, a_extra);
		}
	}
}
