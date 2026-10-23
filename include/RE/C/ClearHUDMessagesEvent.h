#pragma once

namespace RE
{
	class ClearHUDMessagesEvent
	{
	public:
	};
	static_assert(std::is_empty_v<ClearHUDMessagesEvent>);
}
