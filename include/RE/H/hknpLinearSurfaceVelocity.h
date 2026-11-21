#pragma once

#include "RE/H/hkEnum.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hknpSurfaceVelocity.h"

namespace RE
{
	class __declspec(novtable) hknpLinearSurfaceVelocity :
		public hknpSurfaceVelocity  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpLinearSurfaceVelocity };
		inline static constexpr auto VTABLE{ VTABLE::hknpLinearSurfaceVelocity };

		enum class ProjectMethod : std::uint8_t
		{
			kVelocityProject = 0,
			kVelocityRescale = 1
		};

		// members
		hkEnum<hknpSurfaceVelocity::Space, std::uint8_t> m_space;                                 // 0x10
		hkEnum<ProjectMethod, std::uint8_t> m_projectMethod;  // 0x11
		std::uint8_t pad12[0x2];                              // 0x12
		float m_maxVelocityScale;                             // 0x14
		std::uint8_t unk18[0x8];                              // 0x18
		hkVector4f m_velocityMeasurePlane;                    // 0x20
		hkVector4f m_velocity;                                // 0x30
	};
	static_assert(sizeof(hknpLinearSurfaceVelocity) == 0x40);
	static_assert(offsetof(hknpLinearSurfaceVelocity, m_space) == 0x10);
	static_assert(offsetof(hknpLinearSurfaceVelocity, m_projectMethod) == 0x11);
	static_assert(offsetof(hknpLinearSurfaceVelocity, m_maxVelocityScale) == 0x14);
	static_assert(offsetof(hknpLinearSurfaceVelocity, m_velocityMeasurePlane) == 0x20);
	static_assert(offsetof(hknpLinearSurfaceVelocity, m_velocity) == 0x30);
}
