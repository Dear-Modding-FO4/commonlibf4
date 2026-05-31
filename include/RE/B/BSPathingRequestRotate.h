#pragma once

#include "RE/B/BSPathingRequest.h"
#include "RE/M/MemoryManager.h"
#include "REL/Relocation.h"

namespace RE
{
	/// A specialized BSPathingRequest that adds a rotate flag.
	///
	/// Created by constructor FUN_1407b6420 (RVA 0x7B6420, ID 2172304).
	/// Used by the PathBuilderRotatePath path builder for rotation-based
	/// movement commands (e.g., from FUN_140dc16f0).
	///
	/// Differences from base BSPathingRequest:
	///   - Different vtable (RVA 0x02514158)
	///   - Sets flag bit 0x200 at +0x1B (as uint32)
	///   - Processed by PathBuilderRotatePath instead of default path builder
	///
	/// Size: 0x140 (same as BSPathingRequest, no additional members)
	class __declspec(novtable) BSPathingRequestRotate :
		public BSPathingRequest  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestRotate };
		static constexpr auto VTABLE{ VTABLE::PathingRequestRotate };

		BSPathingRequestRotate()
		{
			REX::EMPLACE_VTABLE(this);  // override vtable to PathingRequestRotate
			auto flags = reinterpret_cast<std::uint32_t*>(reinterpret_cast<std::uintptr_t>(this) + 0x1B);
			*flags |= 0x200;  // set rotate flag
		}

		~BSPathingRequestRotate() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(BSPathingRequestRotate);

		/// Check if the rotate flag is set.
		[[nodiscard]] bool HasRotateFlag() const
		{
			auto flags = reinterpret_cast<const std::uint32_t*>(reinterpret_cast<std::uintptr_t>(this) + 0x1B);
			return (*flags & 0x200) != 0;
		}

		// No additional member fields - inherits full BSPathingRequest (0x140 bytes) layout.
	};
	static_assert(sizeof(BSPathingRequestRotate) == 0x140);
}
