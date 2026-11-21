#pragma once
#include "RE/H/hkFlags.h"

namespace RE
{
	class hknpBodyQuality
	{
	public:

		enum class FlagsEnum : std::uint32_t
		{
			kDropManifoldCache = 1,
			kForceGskExecution = 2,
			kForceGskSinglePointManifold = 4,
			kAllowInteriorTriangleCollisions = 8,
			kEnableSilhouetteManifolds = 16,
			kUseHigherQualityContactSolving = 64,
			kEnableNeighborWelding = 128,
			kEnableMotionWelding = 256,
			kEnableTriangleWelding = 512,
			kAnyWelding = 896,
			kEnableContactCaching = 1024,
			kRequestLinearOnlyCollisionLookAhead = 2048,
			kForceLinearOnlyCollisionLookAhead = 4096,
			kEnableFrictionEstimation = 8192,
			kFirstNonCachableFlag = 0x10000,
			kClipAngularVelocity = 0x10000,
			kUseDiscreteAabbExpansion = 0x20000,
			kMergeFrictionJacobians = 0x40000
		};

		// members
		std::int32_t m_priority;                          // 0x00
		hkFlags<FlagsEnum, std::uint32_t> m_supportedFlags;                   // 0x04
		hkFlags<FlagsEnum, std::uint32_t> m_requestedFlags;                   // 0x08
		float m_contactCachingRelativeMovementThreshold;  // 0x0C
	};
	static_assert(sizeof(hknpBodyQuality) == 0x10);
	static_assert(offsetof(hknpBodyQuality, m_priority) == 0x0);
	static_assert(offsetof(hknpBodyQuality, m_supportedFlags) == 0x4);
	static_assert(offsetof(hknpBodyQuality, m_requestedFlags) == 0x8);
	static_assert(offsetof(hknpBodyQuality, m_contactCachingRelativeMovementThreshold) == 0xC);
}
