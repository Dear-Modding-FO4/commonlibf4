#pragma once

namespace RE
{
	class OBJ_LIGH
	{
	public:
		enum class Flag : std::uint32_t
		{
			kCanBeCarried = 1 << 1,
			kNegative = 1 << 2,
			kFlicker = 1 << 3,
			kOffByDefault = 1 << 5,
			kPulse = 1 << 7,
			kShadowSpotlight = 1 << 10,
			kShadowHemisphere = 1 << 11,
			kShadowOmnidirectional = 1 << 12,
			kNonShadowSpotlight = 1 << 14,
			kNonSpecular = 1 << 15,
			kAttenuationOnly = 1 << 16,
			kNonShadowBox = 1 << 17,
			kIgnoreRoughness = 1 << 18,
			kNoRimLighting = 1 << 19,
			kAmbientOnly = 1 << 20
		};

		// members
		std::int32_t                       time;                      // 00
		std::uint32_t                      radius;                    // 04
		std::uint32_t                      color;                     // 08
		REX::TEnumSet<Flag, std::uint32_t> flags;                     // 0C
		float                              fallOffExponent;           // 10
		float                              fov;                       // 14
		float                              nearDistance;              // 18
		float                              flickerPeriodRecip;        // 1C
		float                              flickerIntensityAmplitude; // 20
		float                              flickerMovementAmplitude;  // 24
		float                              attenConstant;             // 28
		float                              attenScalar;               // 2C
		float                              attenExponent;             // 30
		float                              godrayNearClipDistance;    // 34
	};
	static_assert(sizeof(OBJ_LIGH) == 0x38);
}
