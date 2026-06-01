#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/B/BSFixedString.h"
#include "RE/I/IMovementInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementSetGoal :
		public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementSetGoal };
		static constexpr auto VTABLE{ VTABLE::IMovementSetGoal };

		// Add
		/// Stores a goal entry in the BSFixedString array at this+0x48.
		/// Looks up existing entry by name, updates data if found, appends if not.
		/// Uses spinlock at this+0x108.
		/// @param a_name Goal name string
		/// @param a_data Goal data payload
		/// @return 1 on success
		virtual std::int32_t SetGoal(BSFixedString* a_name, std::uint64_t a_data) = 0;  // 01

		/// Requests path computation for a previously stored goal.
		/// Scans the BSFixedString array for matching name.
		/// If found with count==1: clears entire array.
		/// If found with count>1: removes the matching entry, shifts rest.
		/// Uses spinlock at this+0x108.
		/// @param a_name Goal name to request path for
		virtual void RequestPath(BSFixedString* a_name) = 0;  // 02
	};
	static_assert(sizeof(IMovementSetGoal) == 0x8);
}
