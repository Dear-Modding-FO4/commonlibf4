#pragma once

#include "RE/B/BSFaceGenUtils.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTSingleton.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/N/NiAVObject.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSTextureSet;
	class BSFaceGenPendingHeadData;
	class BSLightingShaderProperty;
	class NiCamera;
	class TESNPC;

	class BSFaceGenManager :
		public BSTSingletonSDM<BSFaceGenManager>  // 00
	{
	public:
		// A queued request to build the customization textures (skin tone, makeup, scars...) of one NPC's face.
		//
		// The engine's copy constructor and destructor also add and release a reference on pendingHeadData;
		// this struct does not, so a plain copy of one does not take that reference.
		struct PendingCustomizationData
		{
			// members
			TESNPC*                                      npc;              // 00
			NiPointer<NiAVObject>                        node;             // 08
			BSFaceGenPendingHeadData*                    pendingHeadData;  // 10 - reference count is at +0x30 of the pointee, released through its virtual destructor
			void (*onComplete)(void*);                                     // 18 - called by OnFinishUpdateCustomization with onCompleteArg
			void*                                        onCompleteArg;    // 20
			bool                                         refreshBodyTint;  // 28 - OnFinishUpdateCustomization recomputes and re-applies the body tint when set
			bool                                         unk29;            // 29 - passed to BSFaceGenUtils::UpdateFaceCustomizationTexturesOnScene
			bool                                         synchronous;      // 2A - queued from a thread that has a per-thread flag set, or for the player/template NPCs while a save loads; UpdatePendingCustomizationTextures then builds the textures in one step instead of the staged State machine
			BSTSmartPointer<BSFaceGenUtils::FaceGenData> faceGenData;      // 30
		};
		static_assert(sizeof(PendingCustomizationData) == 0x38);

		// What UpdatePendingCustomizationTextures does on its next call. The names describe the behaviour seen there.
		enum class State : std::int32_t
		{
			kIdle = 0,              // take the next queued request
			kAwaitingTextures = 1,  // the texture loads were started; once they finish the composite is rendered
			kRendered = 2,          // the composite was rendered; the next call finishes the request
			kPreloadingPresets = 3  // the textures of a preset NPC from npcs are loading
		};

		[[nodiscard]] static BSFaceGenManager* GetSingleton()
		{
			static REL::Relocation<BSFaceGenManager**> singleton{ ID::BSFaceGenManager::Singleton };
			return *singleton;
		}

		// True for NPCs whose face is baked ahead of time and so does not go through the queue.
		// Never true for the player (form ID 7), the two template NPCs or an NPC whose changed-form flag 0x800 is set.
		[[nodiscard]] static bool CheckNPCUsesPreCalcFace(TESNPC* a_npc)
		{
			using func_t = decltype(&BSFaceGenManager::CheckNPCUsesPreCalcFace);
			static REL::Relocation<func_t> func{ ID::BSFaceGenManager::CheckNPCUsesPreCalcFace };
			return func(a_npc);
		}

		BGSTextureSet* OverrideHeadPartTextures(BGSTextureSet* a_textureSet, BSLightingShaderProperty* a_shaderProperty, std::int32_t a_unk, bool a_unk2)
		{
			using func_t = decltype(&BSFaceGenManager::OverrideHeadPartTextures);
			static REL::Relocation<func_t> func{ ID::BSFaceGenManager::OverrideHeadPartTextures };
			return func(this, a_textureSet, a_shaderProperty, a_unk, a_unk2);
		}

		void OnFinishUpdateCustomization(PendingCustomizationData& a_data)
		{
			using func_t = decltype(&BSFaceGenManager::OnFinishUpdateCustomization);
			static REL::Relocation<func_t> func{ ID::BSFaceGenManager::OnFinishUpdateCustomization };
			return func(this, a_data);
		}

		// members
		//
		// Everything below was read from the constructor and from UpdatePendingCustomizationTextures,
		// and is identical in 1.10.163, 1.10.984 and 1.11.240. sizeof is not asserted: the game
		// builds the object in a static buffer and nothing records the buffer's size.
		bool                                       disableCustomFaceGeneration;  // 01 - bDisableCustomFaceGeneration; when set, SetupHeadPartTexture overrides the face textures directly instead of queueing a request
		std::uint32_t                              numActorsAllowedToMorph;      // 04 - uiNumActorsAllowedToMorph
		BSNonReentrantSpinLock                     overflowLock;                 // 08 - taken while a request is added to overflowQueue
		std::byte                                  unk0C[0x74];                  // 0C
		void*                                      messageQueueVTable;           // 80 - BSTCommonStaticMessageQueue<PendingCustomizationData, 128>::`vftable'
		std::byte                                  unk88[0x78];                  // 88
		std::byte                                  messageQueueStorage[0x3000];  // 100 - ring buffer of requests, zeroed by the constructor
		void*                                      messageQueue;                 // 3100 - points at messageQueueStorage
		std::byte                                  unk3108[0x78];                // 3108
		std::byte                                  overflowQueue[0x38];          // 3180 - BSTObjectArena based list of requests that skip the ring buffer; its element count is the dword at +0x30 (31B0)
		PendingCustomizationData                   current;                      // 31B8 - the request being worked on
		PendingCustomizationData                   next;                         // 31F0 - lookahead used to drop repeated requests for the same NPC
		BSSpinLock                                 pendingCustomizationLock;     // 3228 - held for the whole of UpdatePendingCustomizationTextures
		void*                                      customizationBuffer;          // 3230 - BSFaceGenUtils::QCustomizationBufferSize bytes, scratch space for StartFaceCustomizationGenerationForNPC and RenderFaceCustomizationTextures
		BSFaceGenUtils::FaceGenData                faceGenData;                  // 3238 - embedded by value; the constructor adds a reference so it is never freed
		TESNPC*                                    preloadedNPC;                 // 3470 - the NPC whose textures preloadedFaceGenData holds; QueueCustomizationTexturesForNPC reuses them for this NPC
		BSTSmartPointer<BSFaceGenUtils::FaceGenData> preloadedFaceGenData;       // 3478
		BSTArray<TESNPC*>                          npcs;                         // 3480 - the presets PreLoadPresetsTextures walks
		std::int32_t                               presetCursor;                 // 3498 - index into npcs, -1 when none, -2 while the first preset's textures are still loading
		std::uint32_t                              presetStartIndex;             // 349C - index into npcs the preload started from
		State                                      state;                        // 34A0
		bool                                       unk34A4;                      // 34A4 - constructed true, never read by the code examined
		NiCamera*                                  camera;                       // 34A8 - GetCameraPosition returns its world translate
		std::byte                                  faceGenModelMap[0x41];        // 34B0 - BSFaceGenModelMap, the cache GetFaceGenModel searches; its layout is not decomposed
		std::byte                                  pad34F1[3];                   // 34F1
		std::uint32_t                              unk34F4;                      // 34F4 - zeroed by the constructor, never read by the code examined
		std::uint8_t                               unk34F8;                      // 34F8 - zeroed by the constructor, never read by the code examined
		bool                                       lastRequestWasPlayer;         // 34F9 - set from "was the request for the player" when a texture build starts, cleared when it finishes
		std::uint8_t                               updateArg;                    // 34FA - the argument UpdatePendingCustomizationTextures was last called with (1.11 only; 1.10.163 takes none)
	};
	static_assert(offsetof(BSFaceGenManager, disableCustomFaceGeneration) == 0x01);
	static_assert(offsetof(BSFaceGenManager, numActorsAllowedToMorph) == 0x04);
	static_assert(offsetof(BSFaceGenManager, overflowLock) == 0x08);
	static_assert(offsetof(BSFaceGenManager, messageQueueVTable) == 0x80);
	static_assert(offsetof(BSFaceGenManager, messageQueueStorage) == 0x100);
	static_assert(offsetof(BSFaceGenManager, messageQueue) == 0x3100);
	static_assert(offsetof(BSFaceGenManager, overflowQueue) == 0x3180);
	static_assert(offsetof(BSFaceGenManager, current) == 0x31B8);
	static_assert(offsetof(BSFaceGenManager, next) == 0x31F0);
	static_assert(offsetof(BSFaceGenManager, pendingCustomizationLock) == 0x3228);
	static_assert(offsetof(BSFaceGenManager, customizationBuffer) == 0x3230);
	static_assert(offsetof(BSFaceGenManager, faceGenData) == 0x3238);
	static_assert(offsetof(BSFaceGenManager, preloadedNPC) == 0x3470);
	static_assert(offsetof(BSFaceGenManager, preloadedFaceGenData) == 0x3478);
	static_assert(offsetof(BSFaceGenManager, npcs) == 0x3480);
	static_assert(offsetof(BSFaceGenManager, presetCursor) == 0x3498);
	static_assert(offsetof(BSFaceGenManager, presetStartIndex) == 0x349C);
	static_assert(offsetof(BSFaceGenManager, state) == 0x34A0);
	static_assert(offsetof(BSFaceGenManager, camera) == 0x34A8);
	static_assert(offsetof(BSFaceGenManager, faceGenModelMap) == 0x34B0);
	static_assert(offsetof(BSFaceGenManager, unk34F4) == 0x34F4);
	static_assert(offsetof(BSFaceGenManager, lastRequestWasPlayer) == 0x34F9);
	static_assert(offsetof(BSFaceGenManager, updateArg) == 0x34FA);
}
