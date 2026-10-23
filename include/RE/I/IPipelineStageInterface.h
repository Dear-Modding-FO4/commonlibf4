#pragma once

namespace RE
{
	class __declspec(novtable) IPipelineStageInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::IPipelineStageInterface };
		static constexpr auto VTABLE{ VTABLE::IPipelineStageInterface };

		virtual ~IPipelineStageInterface() = default;  // 00
	};
	static_assert(sizeof(IPipelineStageInterface) == 0x8);
}
