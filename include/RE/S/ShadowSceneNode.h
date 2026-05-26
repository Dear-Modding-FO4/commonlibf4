#pragma once

#include "RE/N/NiNode.h"

namespace RE
{
	class __declspec(novtable) ShadowSceneNode : public NiNode
	{
	public:
		static constexpr auto RTTI{ RTTI::ShadowSceneNode };
		static constexpr auto VTABLE{ VTABLE::ShadowSceneNode };
	};
}
