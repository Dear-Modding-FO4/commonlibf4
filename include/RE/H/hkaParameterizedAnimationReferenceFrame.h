#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkaDefaultAnimatedReferenceFrame.h"

namespace RE
{
	class __declspec(novtable) hkaParameterizedAnimationReferenceFrame :
		public hkaDefaultAnimatedReferenceFrame  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaParameterizedAnimationReferenceFrame };
		inline static constexpr auto VTABLE{ VTABLE::hkaParameterizedAnimationReferenceFrame };

		enum class ParameterType : std::uint32_t
		{
			kUnknown = 0,
			kLinearSpeed = 1,
			kLinearDirection = 2,
			kTurnSpeed = 3
		};

		// members
		hkArray<float> m_parameterValues;        // 0x60
		hkArray<std::int32_t> m_parameterTypes;  // 0x70
	};
	static_assert(sizeof(hkaParameterizedAnimationReferenceFrame) == 0x80);
	static_assert(offsetof(hkaParameterizedAnimationReferenceFrame, m_parameterValues) == 0x60);
	static_assert(offsetof(hkaParameterizedAnimationReferenceFrame, m_parameterTypes) == 0x70);
}
