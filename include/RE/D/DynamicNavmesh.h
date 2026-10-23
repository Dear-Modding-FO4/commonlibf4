#pragma once

namespace RE
{
	class DynamicNavmesh
	{
	public:
		[[nodiscard]] static DynamicNavmesh* GetSingleton()
		{
			static REL::Relocation<DynamicNavmesh**> singleton{ ID::DynamicNavmesh::Singleton };
			return *singleton;
		}

		// Skips the rebuild debounce; main thread only.
		void ForceUpdate()
		{
			using func_t = decltype(&DynamicNavmesh::ForceUpdate);
			static REL::Relocation<func_t> func{ ID::DynamicNavmesh::ForceUpdate };
			return func(this);
		}
	};
}
