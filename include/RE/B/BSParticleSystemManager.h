#pragma once

#include "RE/N/NiNode.h"

namespace RE
{
	class __declspec(novtable) BSParticleSystemManager : public NiNode
	{
	public:
		static constexpr auto RTTI{ RTTI::BSParticleSystemManager };
		static constexpr auto VTABLE{ VTABLE::BSParticleSystemManager };
	};
}
