#pragma once

#include "REL/Offset.h"

namespace REL
{
	// Access a member whose position differs between runtimes. The offset is
	// the real distance from the start of the structure on each runtime, given
	// as REL::Offset{ OG, NG, AE }; the last value stands for any left out.
	//
	//   RelocateMember<std::int32_t>(info, REL::Offset{ 0x170, 0x1B0 });
	template <class T, class This>
	[[nodiscard]] inline T& RelocateMember(This* a_self, const Offset& a_offset) noexcept
	{
		return *reinterpret_cast<T*>(reinterpret_cast<std::uintptr_t>(a_self) + a_offset.offset());
	}

	template <class T, class This>
	[[nodiscard]] inline const T& RelocateMember(const This* a_self, const Offset& a_offset) noexcept
	{
		return *reinterpret_cast<const T*>(reinterpret_cast<std::uintptr_t>(a_self) + a_offset.offset());
	}
}
