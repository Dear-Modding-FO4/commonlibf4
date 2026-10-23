#pragma once

#include "RE/I/IPipelineStageInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementPlannerAgent :
	    public IPipelineStageInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementPlannerAgent };

		virtual void Unk_01() = 0;  // 01
		virtual void Unk_02() = 0;  // 02
		virtual void Unk_03() = 0;  // 03
	};
	static_assert(sizeof(IMovementPlannerAgent) == 0x8);
}
