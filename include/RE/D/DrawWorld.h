#pragma once

namespace RE
{
	class BSGeometryListCullingProcess;

	namespace DrawWorld
	{
		// Render_PreUI calls the registered callback first, before any world setup.
		using UpdateWaterFunc = void (*)(BSGeometryListCullingProcess*);

		inline void Begin()
		{
			using func_t = decltype(&DrawWorld::Begin);
			static REL::Relocation<func_t> func{ ID::DrawWorld::Begin };
			return func();
		}

		inline void SetUpdateWaterFunc(UpdateWaterFunc a_func)
		{
			using func_t = decltype(&DrawWorld::SetUpdateWaterFunc);
			static REL::Relocation<func_t> func{ ID::DrawWorld::SetUpdateWaterFunc };
			return func(a_func);
		}

		inline void Imagespace()
		{
			using func_t = decltype(&DrawWorld::Imagespace);
			static REL::Relocation<func_t> func{ ID::DrawWorld::Imagespace };
			return func();
		}

		inline void Render_PreUI()
		{
			using func_t = decltype(&DrawWorld::Render_PreUI);
			static REL::Relocation<func_t> func{ ID::DrawWorld::Render_PreUI };
			return func();
		}

		inline void Forward()
		{
			using func_t = decltype(&DrawWorld::Forward);
			static REL::Relocation<func_t> func{ ID::DrawWorld::Forward };
			return func();
		}

		inline void DeferredPrePass()
		{
			using func_t = decltype(&DrawWorld::DeferredPrePass);
			static REL::Relocation<func_t> func{ ID::DrawWorld::DeferredPrePass };
			return func();
		}

		inline void DeferredLightsImpl()
		{
			using func_t = decltype(&DrawWorld::DeferredLightsImpl);
			static REL::Relocation<func_t> func{ ID::DrawWorld::DeferredLightsImpl };
			return func();
		}

		inline void DeferredComposite()
		{
			using func_t = decltype(&DrawWorld::DeferredComposite);
			static REL::Relocation<func_t> func{ ID::DrawWorld::DeferredComposite };
			return func();
		}

		[[nodiscard]] inline bool QTiledLighting()
		{
			using func_t = decltype(&DrawWorld::QTiledLighting);
			static REL::Relocation<func_t> func{ ID::DrawWorld::QTiledLighting };
			return func();
		}
	}
}
