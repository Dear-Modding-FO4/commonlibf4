#pragma once

#include "RE/H/hkAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkbProceduralBlenderGenerator.h"

namespace RE
{
	class hkbGenerator;

	class __declspec(novtable) hkbParametricMotionGenerator :
		public hkbProceduralBlenderGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbParametricMotionGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbParametricMotionGenerator };

		enum class MotionSpaceType : std::uint32_t
		{
			kMstUnknown = 0,
			kMstAngular = 1,
			kMstDirectional = 2
		};

		// members
		std::int8_t m_motionSpace;            // 0x90
		std::uint8_t pad91[0x7];              // 0x91
		hkArray<hkbGenerator*> m_generators;  // 0x98
		float m_xAxisParameterValue;          // 0xA8
		float m_yAxisParameterValue;          // 0xAC
		hkAabb m_paramsDomain;                // 0xB0
		void* m_animationSpace;               // 0xD0
		std::uint8_t m_clipDurations[0x10];   // 0xD8
	};
	static_assert(sizeof(hkbParametricMotionGenerator) == 0xF0);
	static_assert(offsetof(hkbParametricMotionGenerator, m_motionSpace) == 0x90);
	static_assert(offsetof(hkbParametricMotionGenerator, m_generators) == 0x98);
	static_assert(offsetof(hkbParametricMotionGenerator, m_xAxisParameterValue) == 0xA8);
	static_assert(offsetof(hkbParametricMotionGenerator, m_yAxisParameterValue) == 0xAC);
	static_assert(offsetof(hkbParametricMotionGenerator, m_paramsDomain) == 0xB0);
	static_assert(offsetof(hkbParametricMotionGenerator, m_animationSpace) == 0xD0);
	static_assert(offsetof(hkbParametricMotionGenerator, m_clipDurations) == 0xD8);
}
