#pragma once

#include "REX/W32/XAPO.h"

#pragma pack(push, 8)

namespace RE
{
	class __declspec(novtable) CXAPOBase :
		public REX::W32::IXAPO
	{
	public:
		// add
		virtual REX::W32::HRESULT ValidateFormatDefault(REX::W32::WAVEFORMATEX* a_format, REX::W32::BOOL a_overwrite) noexcept = 0;

		virtual ~CXAPOBase() = default;

		// members
		const REX::W32::XAPO_REGISTRATION_PROPERTIES* m_registrationProperties;  // 0x08
		void*                                         m_matrixMixFunction;       // 0x10
		float*                                        m_matrixCoefficients;      // 0x18
		std::uint32_t                                 m_srcFormatType;           // 0x20
		REX::W32::BOOL                                m_isScalarMatrix;          // 0x24
		REX::W32::BOOL                                m_isLocked;                // 0x28
		std::int32_t                                  m_referenceCount;          // 0x2C
	};
	static_assert(sizeof(CXAPOBase) == 0x30);
}

#pragma pack(pop)
