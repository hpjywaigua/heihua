#pragma once

// Pubg Mobile Battelgrounds (2.7.0-64BIT) SDK Generated By @hhamk2 
// 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @SANSERO_MOD_1
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_global.bp_global_C
// 0x00D8 (0x0538 - 0x0460)
class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_NATION_SWITCH                    BP_STRUCT_NATION_SWITCH;                                  // 0x0468(0x0004) (Edit, BlueprintVisible)
	int                                                BP_StartUpType;                                           // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShouldRequestChatPrivacy;                              // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	int                                                BP_Share_Platform;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_played_cg;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Platform;                                              // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsAppleAudit;                                          // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IOS_CHECK;                                             // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HadPlayAnimation;                                      // 0x0483(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalSwitchCameraIndex;                               // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GLOBAL_USE_ITEM;                                       // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_Url;                                            // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_TouchTitleString;                               // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_SelfUID;                                        // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Global_PreviewItemId;                                  // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsResidentEvilNeedShow;                         // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsChristmasNeedShow;                            // 0x04CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsAnniversaryNeedShow;                          // 0x04CE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04CF(0x0001) MISSED OFFSET
	int                                                BP_Global_Cur_Lobby_Skin_Id;                              // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_BackpackAvatarPreviewID;                        // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_AvatarPreviewTarget;                            // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AndroidKey_IsValid;                             // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AdvertiseNeedShowtask;                          // 0x04DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04DE(0x0002) MISSED OFFSET
	struct FString                                     BP_GEM_REPORT_SUBEVENT;                                   // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GEM_REPORT_PARA2;                                      // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GEM_REPORT_PARA1;                                      // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GameGender;                                            // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_EUChatRestriction;                                     // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	int                                                BP_CurSceneCameraIndex;                                   // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                // 0x051C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	int                                                BP_CHECK_MENU_OPEN_ID;                                    // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatBan;                                               // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_REASON;                                             // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_BUTTON_TYPE;                                        // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return pStaticClass;
	}


	void EventSwitchLobbySkinCompleted_NoFetch();
	void EventSwitchLobbySkinCompleted();
	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventSendClickGemReport_NoFetch();
	void EventSendClickGemReport();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventJumpUrl_NoFetch();
	void EventJumpUrl();
	void EventGotoItemPreviewPress_NoFetch();
	void EventGotoItemPreviewPress();
	void EventGotoItemPreviewClick_NoFetch();
	void EventGotoItemPreviewClick();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventFetchNationSwitch_NoFetch();
	void EventFetchNationSwitch();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickLobbyEventGemReport_NoFetch();
	void EventClickLobbyEventGemReport();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventCheckEUChatRestriction_NoFetch();
	void EventCheckEUChatRestriction();
	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void UserConstructionScript();
};


}

