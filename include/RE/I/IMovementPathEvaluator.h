#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	/// Interface for path evaluation from the movement controller.
	/// Embedded at MovementControllerNPC+0x130.
	///
	/// Note: This may be the same as or related to IMovementPathManager
	/// (both reside at MC+0x130). The path manager interface with
	/// SubmitPath/ClearPath/RequestPath is described in IMovementPathManager.h.
	///
	/// Full virtual function layout is not yet known.
	// Note: IMovementPathEvaluator has no standalone RTTI or VTABLE entry.
	// This may be because IMovementPathManager (at the same offset +0x130)
	// IS the path evaluator. Both names are used in the RE doc for MC+0x130.
	// Use IMovementPathManager for path submission/clear/request operations.
	class __declspec(novtable) IMovementPathEvaluator :
		public IMovementInterface  // 00
	{
	public:
		// No standalone RTTI or VTABLE entry found
		// Consider using IMovementPathManager for path-related operations

		// TODO: Add virtual functions as they are discovered
	};
	static_assert(sizeof(IMovementPathEvaluator) == 0x8);
}
