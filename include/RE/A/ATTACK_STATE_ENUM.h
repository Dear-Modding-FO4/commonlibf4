#pragma once

namespace RE
{
	enum class ATTACK_STATE_ENUM : std::int32_t
	{
		kNone = 0x0,
		kDraw = 0x1,
		kSwing = 0x2,
		kHit = 0x3,
		kNextAttack = 0x4,
		kFollowThrough = 0x5,
		kBash = 0x6
	};
}
