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

	class __declspec(novtable) IMovementPlannerAgent :
	    public IPipelineStageInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementPlannerAgent };

	protected:
		// Unknown signatures reserve engine slots without exposing unsafe calls.
		virtual void Unk_01() = 0;  // 01
		virtual void Unk_02() = 0;  // 02
		virtual void Unk_03() = 0;  // 03
	};
	static_assert(sizeof(IMovementPlannerAgent) == 0x8);
}
