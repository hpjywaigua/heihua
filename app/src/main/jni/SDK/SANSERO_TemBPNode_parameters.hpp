#pragma once

// Pubg Mobile Battelgrounds (2.7.0-64BIT) SDK Generated By @hhamk2 
// 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @SANSERO_MOD_1
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TemBPNode.TemBPLibrary.TempUIMsgInvokeRef
struct UTemBPLibrary_TempUIMsgInvokeRef_Params
{
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	TArray<struct FTemBPDataAddr>                      ParamArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TemBPNode.TemBPLibrary.TempBridgeEventInvokeRef
struct UTemBPLibrary_TempBridgeEventInvokeRef_Params
{
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (Parm, ZeroConstructor)
	TArray<struct FTemBPDataAddr>                      ParamArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TemBPNode.TemBPLibrary.AddrFromWild
struct UTemBPLibrary_AddrFromWild_Params
{
	struct FString                                     DataType;                                                 // (Parm, ZeroConstructor)
	struct FTemBPDataAddr                              InAny;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTemBPDataAddr                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TemBPNode.TemBPLibrary.AddrFromSet
struct UTemBPLibrary_AddrFromSet_Params
{
	struct FString                                     DataType;                                                 // (Parm, ZeroConstructor)
	struct FTemBPDataAddr                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TemBPNode.TemBPLibrary.AddrFromMap
struct UTemBPLibrary_AddrFromMap_Params
{
	struct FString                                     DataType;                                                 // (Parm, ZeroConstructor)
	TMap<int, int>                                     InAny;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTemBPDataAddr                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TemBPNode.TemBPLibrary.AddrFromArray
struct UTemBPLibrary_AddrFromArray_Params
{
	struct FString                                     DataType;                                                 // (Parm, ZeroConstructor)
	TArray<int>                                        InAny;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTemBPDataAddr                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

