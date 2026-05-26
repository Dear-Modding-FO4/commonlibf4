#pragma once

#include "RE/A/ActorPackageData.h"

namespace RE
{
	class __declspec(novtable) UseWeaponActorPackageData : public ActorPackageData
	{
	public:
		static constexpr auto RTTI{ RTTI::UseWeaponActorPackageData };
		static constexpr auto VTABLE{ VTABLE::UseWeaponActorPackageData };
	};
}
