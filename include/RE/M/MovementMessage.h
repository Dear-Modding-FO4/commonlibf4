#pragma once

namespace RE
{
	/// Movement message type enum.
	/// Used for inter-system movement commands between
	/// ActorMover, MovementControllerNPC, and the event sink.
	enum class MovementMessageType : std::uint32_t
	{
		kStop = 0,           // Stop all movement
		kNewPath = 1,        // New path available (MovementMessageNewPath)
		kActorCollision = 2, // Actor collision event (MovementMessageActorCollision)
		// TODO: Additional message types unknown
	};

	/// Movement message structure.
	///
	/// Used for inter-system movement command communication.
	/// Full structure layout is not yet known.
	struct MovementMessage
	{
		MovementMessageType type;      // 00 - message type
		std::uint32_t       pad04;    // 04
		void*               data;     // 08 - message data (type-dependent)
	};
	static_assert(sizeof(MovementMessage) == 0x10);
}
