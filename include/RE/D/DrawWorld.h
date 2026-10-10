#pragma once

#include "RE/B/BSTArray.h"

namespace RE
{
	class BSGeometryListCullingProcess;
	class BSCullingProcess;
	class BSCullingGroup;

	namespace DrawWorld
	{
		inline void BuildSceneLists(BSCullingProcess* a_process, BSCullingGroup& a_group1,
			BSCullingGroup& a_group2, BSCullingGroup& a_group3,
			BSTArray<BSCullingGroup, BSTAlignedHeapArrayAllocator<0x10>::Allocator>& a_groups,
			bool                                                                     a_flag)
		{
			using func_t = decltype(&BuildSceneLists);
			static REL::Relocation<func_t> func{ ID::DrawWorld::BuildSceneLists };
			func(a_process, a_group1, a_group2, a_group3, a_groups, a_flag);
		}

		inline void SetDoTiledLighting(bool a_enabled)
		{
			using func_t = decltype(&SetDoTiledLighting);
			static REL::Relocation<func_t> func{ ID::DrawWorld::SetDoTiledLighting };
			func(a_enabled);
		}

		inline void LightUpdate()
		{
			using func_t = decltype(&LightUpdate);
			static REL::Relocation<func_t> func{ ID::DrawWorld::LightUpdate };
			func();
		}

		inline void MainAccum()
		{
			using func_t = decltype(&MainAccum);
			static REL::Relocation<func_t> func{ ID::DrawWorld::MainAccum };
			func();
		}

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
