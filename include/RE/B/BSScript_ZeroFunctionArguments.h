#pragma once

#include "RE/B/BSScript_Variable.h"
#include "RE/B/BSTArray.h"

namespace RE::BSScript
{
	inline bool ZeroFunctionArguments(BSScrapArray<Variable>& a_out)
	{
		using func_t = decltype(&ZeroFunctionArguments);
		static REL::Relocation<func_t> func{ ID::BSScript_ZeroFunctionArguments::ZeroFunctionArguments };
		return func(a_out);
	}
}
