#pragma once

#include <DirectXMath.h>

#include <cmath>

namespace RE
{
	class NiFrustum
	{
	public:
		float left;    // 00
		float right;   // 04
		float top;     // 08
		float bottom;  // 0C
		float near;    // 10
		float far;     // 14
		bool  ortho;   // 18
	};
	static_assert(sizeof(NiFrustum) == 0x1C);

	[[nodiscard]] inline bool BuildPerspectiveFromFrustum(
		const NiFrustum&     a_frustum,
		DirectX::XMFLOAT4X4& a_outProjection,
		DirectX::XMFLOAT4X4& a_outInverseProjection,
		DirectX::XMFLOAT4&   a_outNdcToViewMul,
		DirectX::XMFLOAT4&   a_outNdcToViewAdd)
	{
		const auto& [left, right, top, bottom, nearZ, farZ, ortho] = a_frustum;
		if (ortho ||
			!std::isfinite(left) ||
			!std::isfinite(right) ||
			!std::isfinite(top) ||
			!std::isfinite(bottom) ||
			!std::isfinite(nearZ) ||
			!std::isfinite(farZ) ||
			nearZ <= 0.0f ||
			farZ <= nearZ ||
			left >= right ||
			bottom >= top) {
			return false;
		}

		// Fallout 4 uses standard D3D depth: near = 0, far = 1.
		const auto projection = DirectX::XMMatrixPerspectiveOffCenterLH(
			nearZ * left,
			nearZ * right,
			nearZ * bottom,
			nearZ * top,
			nearZ,
			farZ);
		const auto inverseProjection = DirectX::XMMatrixInverse(nullptr, projection);

		const auto viewTopLeft = DirectX::XMVector4Transform(
			DirectX::XMVectorSet(-1.0f, 1.0f, 1.0f, 1.0f),
			inverseProjection);
		const auto viewBottomRight = DirectX::XMVector4Transform(
			DirectX::XMVectorSet(1.0f, -1.0f, 1.0f, 1.0f),
			inverseProjection);
		const auto topLeftZ = DirectX::XMVectorGetZ(viewTopLeft);
		const auto bottomRightZ = DirectX::XMVectorGetZ(viewBottomRight);
		if (topLeftZ == 0.0f || bottomRightZ == 0.0f) {
			return false;
		}

		DirectX::XMFLOAT4 topLeft;
		DirectX::XMFLOAT4 bottomRight;
		DirectX::XMStoreFloat4(&topLeft, DirectX::XMVectorScale(viewTopLeft, 1.0f / topLeftZ));
		DirectX::XMStoreFloat4(&bottomRight, DirectX::XMVectorScale(viewBottomRight, 1.0f / bottomRightZ));

		DirectX::XMStoreFloat4x4(&a_outProjection, projection);
		DirectX::XMStoreFloat4x4(&a_outInverseProjection, inverseProjection);
		a_outNdcToViewMul = { bottomRight.x - topLeft.x, bottomRight.y - topLeft.y, 0.0f, 0.0f };
		a_outNdcToViewAdd = { topLeft.x, topLeft.y, 0.0f, 0.0f };
		return true;
	}
}
