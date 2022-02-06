// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Get Badge And Count For Player
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerController*   InFortPC                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEarnedBadgeEntry       EarnedBadgeEntry               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Found                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortPlayerController*   FortPC                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortBadgeItemDefinition* Badge                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBadgesEarnedPanelContent_C::Get_Badge_And_Count_For_Player(class AFortPlayerController* InFortPC, const struct FEarnedBadgeEntry& EarnedBadgeEntry, bool* Found, class AFortPlayerController** FortPC, class UFortBadgeItemDefinition** Badge, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Get Badge And Count For Player");

	UBadgesEarnedPanelContent_C_Get_Badge_And_Count_For_Player_Params params;
	params.InFortPC = InFortPC;
	params.EarnedBadgeEntry = EarnedBadgeEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (FortPC != nullptr)
		*FortPC = params.FortPC;
	if (Badge != nullptr)
		*Badge = params.Badge;
	if (Count != nullptr)
		*Count = params.Count;
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleMissionsUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBadgesEarnedPanelContent_C::HandleMissionsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleMissionsUpdated");

	UBadgesEarnedPanelContent_C_HandleMissionsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdatePotentialBadges
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBadgesEarnedPanelContent_C::UpdatePotentialBadges()
{
	static auto fn = UObject::FindObject<UFunction>("Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdatePotentialBadges");

	UBadgesEarnedPanelContent_C_UpdatePotentialBadges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandlePotentialBadgesChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBadgesEarnedPanelContent_C::HandlePotentialBadgesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandlePotentialBadgesChanged");

	UBadgesEarnedPanelContent_C_HandlePotentialBadgesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdateBadgeWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBadgesEarnedPanelContent_C::UpdateBadgeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdateBadgeWidgets");

	UBadgesEarnedPanelContent_C_UpdateBadgeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleEarnedBadgesChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBadgesEarnedPanelContent_C::HandleEarnedBadgesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleEarnedBadgesChanged");

	UBadgesEarnedPanelContent_C_HandleEarnedBadgesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBadgesEarnedPanelContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Construct");

	UBadgesEarnedPanelContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.ExecuteUbergraph_BadgesEarnedPanelContent
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBadgesEarnedPanelContent_C::ExecuteUbergraph_BadgesEarnedPanelContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.ExecuteUbergraph_BadgesEarnedPanelContent");

	UBadgesEarnedPanelContent_C_ExecuteUbergraph_BadgesEarnedPanelContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
