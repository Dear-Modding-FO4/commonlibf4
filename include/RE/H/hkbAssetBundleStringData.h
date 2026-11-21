#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkbAssetBundleStringData
	{
	public:

		// members
		hkStringPtr m_bundleName;           // 0x00
		hkArray<hkStringPtr> m_assetNames;  // 0x08
	};
	static_assert(sizeof(hkbAssetBundleStringData) == 0x18);
	static_assert(offsetof(hkbAssetBundleStringData, m_bundleName) == 0x0);
	static_assert(offsetof(hkbAssetBundleStringData, m_assetNames) == 0x8);
}
