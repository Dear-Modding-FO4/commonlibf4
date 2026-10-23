#pragma once

namespace RE
{
	class EndLoadGameEvent
	{
	public:
	};
	static_assert(std::is_empty_v<EndLoadGameEvent>);
}
