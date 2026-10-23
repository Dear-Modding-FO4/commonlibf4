#pragma once

namespace RE
{
	// 0xB0 is the native readable lower bound, not a recovered exact sizeof.
	struct LIGHT_CREATE_PARAMS
	{
		bool          field00;
		bool          createShadow;
		bool          field02;
		bool          field03;
		bool          field04;
		bool          field05;
		std::byte     unk06[2];
		float         field08;
		float         angularExponent;
		float         field10;
		float         field14;
		float         field18;
		std::byte     unk1C[4];
		void*         field20;
		bool          specular;
		bool          attenuationOnly;
		bool          zeroRoughness;
		bool          suppressRim;
		bool          specialList;
		bool          field2D;
		std::byte     unk2E[2];
		std::uint32_t field30;
		bool          godrayEmitter;
		std::byte     unk35[3];
		float         godrayIntensity;
		float         godrayNearClip;
		std::uint32_t godrayGridResolution;
		std::byte     unk44[4];
		void*         field48;
		std::uint32_t shape;
		std::byte     unk54[4];
		void*         projectedTexture;
		float         dimensions[6];
		std::byte     unk78[8];
		float         field80[3][4];
	};
	static_assert(sizeof(LIGHT_CREATE_PARAMS) == 0xB0);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, createShadow) == 0x01);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field08) == 0x08);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, angularExponent) == 0x0C);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field10) == 0x10);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field14) == 0x14);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field18) == 0x18);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field20) == 0x20);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, specular) == 0x28);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, attenuationOnly) == 0x29);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, zeroRoughness) == 0x2A);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, suppressRim) == 0x2B);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, specialList) == 0x2C);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field2D) == 0x2D);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field30) == 0x30);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, godrayEmitter) == 0x34);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, godrayIntensity) == 0x38);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, godrayNearClip) == 0x3C);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, godrayGridResolution) == 0x40);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field48) == 0x48);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, shape) == 0x50);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, projectedTexture) == 0x58);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, dimensions) == 0x60);
	static_assert(offsetof(LIGHT_CREATE_PARAMS, field80) == 0x80);
}
