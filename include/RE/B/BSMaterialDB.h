#pragma once

#include "RE/B/BSResource_ErrorCode.h"

namespace RE
{
	class BSShaderData;

	namespace BSMaterialDB
	{
		inline BSResource::ErrorCode Demand(const char* a_path, BSShaderData& a_data, bool a_unk = false)
		{
			using func_t = BSResource::ErrorCode (*)(const char*, BSShaderData&, bool);
			static REL::Relocation<func_t> func{ ID::BSMaterialDB::Demand };
			return func(a_path, a_data, a_unk);
		}
	}
}
