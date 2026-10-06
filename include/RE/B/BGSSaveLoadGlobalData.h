#pragma once

namespace RE
{
	class BGSSaveLoadGlobalData
	{
	public:
		enum class TYPE : std::uint32_t
		{
			kMiscStats = 0,
			kLocationData = 1,
			kTES = 2,
			kGlobals = 3,
			kCreatedObjects = 4,
			kEffects = 5,
			kSky = 6,
			kAudio = 7,
			kSkyCellIDs = 8,
			kInputEnableManager = 9,
			kStoryTeller = 10,
			kUnloadedFormData = 11,
			kProcessLists = 100,
			kCombatManager = 101,
			kUISaveLoadStaticData = 102,
			kActorCauses = 103,
			kLocationStaticData = 105,
			kQuestStaticData = 106,
			kUnknown108 = 108,
			kPlayerControls = 109,
			kStoryEventManager = 110,
			kIngredientSharedData = 111,
			kMenuTopicManager = 113,
			kSceneFiller = 114,
			kRangeFormations = 115,
			kAnimationObjects = 116,
			kRadioManager = 117,
			kUnknown118 = 118,  // 1.11.x only
			kTempEffects = 1000,
			kPapyrusVM = 1001,
			kAnimationObjectsAnimation = 1002,
			kVATS = 1003,
			kSynchronizedAnimationManager = 1004,
			kMain = 1005,
			kTopicInfoStaticData = 1006,
			kExplosionManager = 1007
		};
	};
}
