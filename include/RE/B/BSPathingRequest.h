#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/M/MemoryManager.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class __declspec(novtable) BSPathingRequest
	{
	public:
		static constexpr auto VTABLE{ VTABLE::BSPathingRequest };

		/// Flags byte at +0xDC (set by FUN_140c5ab50 from fly state / walk check).
		enum class Flag : std::uint8_t
		{
			kNone = 0,
			kOverrideSpeed = 1 << 2  // Bit 2: override speed value present at +0x54
		};

		BSPathingRequest() { REX::EMPLACE_VTABLE(this); }

		F4_HEAP_REDEFINE_NEW(BSPathingRequest);

		static BSPathingRequest* Create(const NiPoint3& a_destination)
		{
			auto* request = new BSPathingRequest();
			request->destination = a_destination;
			request->refCount = 1;
			return request;
		}

		/// Check if the override speed flag is set (bit 2 at +0x83 or +0xDC).
		bool HasOverrideSpeed() const { return (flags & static_cast<std::uint8_t>(Flag::kOverrideSpeed)) != 0; }

		/// Get the override speed value at +0x54 (only valid when HasOverrideSpeed() is true).
		float GetOverrideSpeed() const { return overrideSpeed; }

		// members
		void*        vtable;          // 00
		char         pad08[0x12];     // 08-19
		char         typeChar;        // 1A
		char         pad1B[0x05];     // 1B-1F
		void*        allocator;       // 20
		std::int32_t refCount;        // 28
		char         pad2C[0x1C];     // 2C-47
		std::uint64_t targetData;     // 48 - Target data (formID likely)
		char         pad50[0x04];     // 50-53
		float        overrideSpeed;   // 54 - Override speed (conditional, only valid when flags bit 2 set)
		char         pad58[0x2B];     // 58-82
		std::uint8_t flags83;         // 83 - Flag byte, bit 2 = override speed present
		char         pad84[0x34];     // 84-B7
		void*        pathStore;       // B8
		char         padC0[0x10];     // C0-CF
		NiPoint3     destination;     // D0
		std::uint8_t flags;           // DC - Flag byte (from FUN_140c5ab50: fly state / walk check)
		char         padDD[0x63];     // DD-13F (total 0x140)
	};
	static_assert(sizeof(BSPathingRequest) == 0x140);
}
