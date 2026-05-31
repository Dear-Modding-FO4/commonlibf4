#pragma once

#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IMovementInterface.h"

namespace RE
{
	class BSPathingRequest;

	/// Interface for path submission, clearing, and re-requesting.
	///
	/// Obtained from MovementControllerNPC via QueryInterface with GUID DAT_143dc3ab8.
	/// Resides at MovementControllerNPC+0x130.
	///
	/// Vtable layout:
	///   +0x00: Destructor
	///   +0x08: SubmitPath(BSTSmartPointer<BSPathingRequest>*)
	///   +0x10: (unknown)
	///   +0x18: ClearPath
	///   +0x20: RequestPath
	// Note: IMovementPathManager has no standalone RTTI or VTABLE entry.
	// It is obtained from MovementControllerNPC via QueryInterface(DAT_143dc3ab8)
	// and resides at MC+0x130.
	class __declspec(novtable) IMovementPathManager :
		public IMovementInterface  // 00
	{
	public:
		// No standalone RTTI or VTABLE entry - resolved at runtime via QueryInterface.

		// add
		/// Submit a pathing request to the path manager for processing.
		/// @param a_request Pointer to a BSTSmartPointer<BSPathingRequest> containing the request
		virtual void SubmitPath(BSTSmartPointer<BSPathingRequest>* a_request) = 0;  // 01

		// 02: Unknown

		/// Clear the current pathing request.
		virtual void ClearPath() = 0;  // 03

		/// Cancel current path and re-request path computation.
		virtual void RequestPath() = 0;  // 04
	};
	static_assert(sizeof(IMovementPathManager) == 0x8);
}
