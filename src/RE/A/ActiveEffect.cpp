#include "RE/A/ActiveEffect.h"

#include "RE/A/Actor.h"
#include "RE/M/MagicTarget.h"

namespace RE
{
	Actor* ActiveEffect::GetTargetActor()
	{
		if (target && target->MagicTargetIsActor()) {
			return static_cast<Actor*>(target);
		} else {
			return nullptr;
		}
	}
}
