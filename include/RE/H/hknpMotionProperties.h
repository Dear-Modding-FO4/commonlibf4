#pragma once
#include "RE/H/hkFlags.h"

namespace RE
{
	class hknpMotionProperties
	{
	public:

		enum class FlagsEnum : std::uint32_t
		{
			kNeverRebuildMassProperties = 2,
			kEnableGravityModification = 0x20000000,
			kEnableTimeFactor = 0x40000000,
			kFlagsMask = 0xE0000000,
			kAutoFlagsMask = 0x3F00000
		};

		enum class SolverStabilizationType : std::uint32_t
		{
			kSolverStabilizationOff = 0,
			kSolverStabilizationLow = 1,
			kSolverStabilizationMedium = 2,
			kSolverStabilizationHigh = 3,
			kSolverStabilizationAggressive = 4
		};

		enum class DeactivationStrategy : std::uint32_t
		{
			kDeactivationStrategyAggressive = 3,
			kDeactivationStrategyBalanced = 4,
			kDeactivationStrategyAccurate = 5
		};

		// members
		std::uint32_t m_isExclusive;                          // 0x00
		hkFlags<FlagsEnum, std::uint32_t> m_flags;                                // 0x04
		float m_gravityFactor;                                // 0x08
		float m_timeFactor;                                   // 0x0C
		float m_maxLinearSpeed;                               // 0x10
		float m_maxAngularSpeed;                              // 0x14
		float m_linearDamping;                                // 0x18
		float m_angularDamping;                               // 0x1C
		float m_solverStabilizationSpeedThreshold;            // 0x20
		float m_solverStabilizationSpeedReduction;            // 0x24
		float m_maxDistSqrd;                                  // 0x28
		float m_maxRotSqrd;                                   // 0x2C
		float m_invBlockSize;                                 // 0x30
		std::int16_t m_pathingUpperThreshold;                 // 0x34
		std::int16_t m_pathingLowerThreshold;                 // 0x36
		std::uint8_t m_numDeactivationFrequencyPasses;        // 0x38
		std::uint8_t m_deactivationVelocityScaleSquare;       // 0x39
		std::uint8_t m_minimumPathingVelocityScaleSquare;     // 0x3A
		std::uint8_t m_spikingVelocityScaleThresholdSquared;  // 0x3B
		std::uint8_t m_minimumSpikingVelocityScaleSquared;    // 0x3C
	};
	static_assert(sizeof(hknpMotionProperties) == 0x40);
	static_assert(offsetof(hknpMotionProperties, m_isExclusive) == 0x0);
	static_assert(offsetof(hknpMotionProperties, m_flags) == 0x4);
	static_assert(offsetof(hknpMotionProperties, m_gravityFactor) == 0x8);
	static_assert(offsetof(hknpMotionProperties, m_timeFactor) == 0xC);
	static_assert(offsetof(hknpMotionProperties, m_maxLinearSpeed) == 0x10);
	static_assert(offsetof(hknpMotionProperties, m_maxAngularSpeed) == 0x14);
	static_assert(offsetof(hknpMotionProperties, m_linearDamping) == 0x18);
	static_assert(offsetof(hknpMotionProperties, m_angularDamping) == 0x1C);
	static_assert(offsetof(hknpMotionProperties, m_solverStabilizationSpeedThreshold) == 0x20);
	static_assert(offsetof(hknpMotionProperties, m_solverStabilizationSpeedReduction) == 0x24);
	static_assert(offsetof(hknpMotionProperties, m_maxDistSqrd) == 0x28);
	static_assert(offsetof(hknpMotionProperties, m_maxRotSqrd) == 0x2C);
	static_assert(offsetof(hknpMotionProperties, m_invBlockSize) == 0x30);
	static_assert(offsetof(hknpMotionProperties, m_pathingUpperThreshold) == 0x34);
	static_assert(offsetof(hknpMotionProperties, m_pathingLowerThreshold) == 0x36);
	static_assert(offsetof(hknpMotionProperties, m_numDeactivationFrequencyPasses) == 0x38);
	static_assert(offsetof(hknpMotionProperties, m_deactivationVelocityScaleSquare) == 0x39);
	static_assert(offsetof(hknpMotionProperties, m_minimumPathingVelocityScaleSquare) == 0x3A);
	static_assert(offsetof(hknpMotionProperties, m_spikingVelocityScaleThresholdSquared) == 0x3B);
	static_assert(offsetof(hknpMotionProperties, m_minimumSpikingVelocityScaleSquared) == 0x3C);
}
