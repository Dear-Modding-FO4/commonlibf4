#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpCollisionQueryCollector.h"
#include "RE/H/hknpCollisionResult.h"

namespace RE
{
	class hknpClosestHitCollector :
		public hknpCollisionQueryCollector  // 0x000
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpClosestHitCollector };
		static constexpr auto VTABLE{ VTABLE::hknpClosestHitCollector };

		hknpClosestHitCollector()
		{
			m_hints = 0;
			Reset();
		}

		// override (hknpCollisionQueryCollector)
		void Reset() override  // 02
		{
			m_earlyOutThreshold.m_real = _mm_set1_ps(std::bit_cast<float>(0x5F7FFFF0U));
			m_result = {};
			m_result.fraction = std::bit_cast<float>(0x7F7FFFEEU);
			m_result.queryBodyInfo.bodyId.m_value = 0x7FFFFFFF;
			m_result.queryBodyInfo.shapeMaterialId.m_value = 0xFFFF;
			m_result.queryBodyInfo.shapeKey = 0xFFFFFFFF;
			m_result.hitBodyInfo.bodyId.m_value = 0x7FFFFFFF;
			m_result.hitBodyInfo.shapeMaterialId.m_value = 0xFFFF;
			m_result.hitBodyInfo.shapeKey = 0xFFFFFFFF;
			m_hasHit = false;
		}

		void AddHit(const hknpCollisionResult& a_hit) override  // 03
		{
			if (a_hit.fraction.val() < m_result.fraction.val()) {
				m_result = a_hit;
				m_hasHit = true;
				m_earlyOutThreshold.m_real = _mm_set1_ps(a_hit.fraction.val());
			}
		}

		[[nodiscard]] bool                       HasHit() const override { return m_hasHit.m_bool; }       // 04
		[[nodiscard]] std::int32_t               GetNumHits() const override { return HasHit() ? 1 : 0; }  // 05
		[[nodiscard]] const hknpCollisionResult* GetHits() const override { return &m_result; }            // 06

		// members
		hknpCollisionResult m_result;  // 0x20
		hkBool              m_hasHit;  // 0x80
	};
	static_assert(sizeof(hknpClosestHitCollector) == 0x90);
}
