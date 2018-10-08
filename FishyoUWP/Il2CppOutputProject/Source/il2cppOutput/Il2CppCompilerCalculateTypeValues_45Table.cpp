#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// Fizzyo.UserData
struct UserData_t4126390532;
// System.Char[]
struct CharU5BU5D_t3528271667;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef USERTAG_T2530831734_H
#define USERTAG_T2530831734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.UserTag
struct  UserTag_t2530831734  : public RuntimeObject
{
public:
	// System.String Fizzyo.UserTag::gamerTag
	String_t* ___gamerTag_0;

public:
	inline static int32_t get_offset_of_gamerTag_0() { return static_cast<int32_t>(offsetof(UserTag_t2530831734, ___gamerTag_0)); }
	inline String_t* get_gamerTag_0() const { return ___gamerTag_0; }
	inline String_t** get_address_of_gamerTag_0() { return &___gamerTag_0; }
	inline void set_gamerTag_0(String_t* value)
	{
		___gamerTag_0 = value;
		Il2CppCodeGenWriteBarrier((&___gamerTag_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERTAG_T2530831734_H
#ifndef USERDATA_T4126390532_H
#define USERDATA_T4126390532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.UserData
struct  UserData_t4126390532  : public RuntimeObject
{
public:
	// System.String Fizzyo.UserData::id
	String_t* ___id_0;
	// System.String Fizzyo.UserData::firstName
	String_t* ___firstName_1;
	// System.String Fizzyo.UserData::lastName
	String_t* ___lastName_2;
	// System.String Fizzyo.UserData::role
	String_t* ___role_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(UserData_t4126390532, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}

	inline static int32_t get_offset_of_firstName_1() { return static_cast<int32_t>(offsetof(UserData_t4126390532, ___firstName_1)); }
	inline String_t* get_firstName_1() const { return ___firstName_1; }
	inline String_t** get_address_of_firstName_1() { return &___firstName_1; }
	inline void set_firstName_1(String_t* value)
	{
		___firstName_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstName_1), value);
	}

	inline static int32_t get_offset_of_lastName_2() { return static_cast<int32_t>(offsetof(UserData_t4126390532, ___lastName_2)); }
	inline String_t* get_lastName_2() const { return ___lastName_2; }
	inline String_t** get_address_of_lastName_2() { return &___lastName_2; }
	inline void set_lastName_2(String_t* value)
	{
		___lastName_2 = value;
		Il2CppCodeGenWriteBarrier((&___lastName_2), value);
	}

	inline static int32_t get_offset_of_role_3() { return static_cast<int32_t>(offsetof(UserData_t4126390532, ___role_3)); }
	inline String_t* get_role_3() const { return ___role_3; }
	inline String_t** get_address_of_role_3() { return &___role_3; }
	inline void set_role_3(String_t* value)
	{
		___role_3 = value;
		Il2CppCodeGenWriteBarrier((&___role_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDATA_T4126390532_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ALLUSERDATA_T1205080024_H
#define ALLUSERDATA_T1205080024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.AllUserData
struct  AllUserData_t1205080024  : public RuntimeObject
{
public:
	// System.String Fizzyo.AllUserData::accessToken
	String_t* ___accessToken_0;
	// System.String Fizzyo.AllUserData::expiresIn
	String_t* ___expiresIn_1;
	// Fizzyo.UserData Fizzyo.AllUserData::user
	UserData_t4126390532 * ___user_2;

public:
	inline static int32_t get_offset_of_accessToken_0() { return static_cast<int32_t>(offsetof(AllUserData_t1205080024, ___accessToken_0)); }
	inline String_t* get_accessToken_0() const { return ___accessToken_0; }
	inline String_t** get_address_of_accessToken_0() { return &___accessToken_0; }
	inline void set_accessToken_0(String_t* value)
	{
		___accessToken_0 = value;
		Il2CppCodeGenWriteBarrier((&___accessToken_0), value);
	}

	inline static int32_t get_offset_of_expiresIn_1() { return static_cast<int32_t>(offsetof(AllUserData_t1205080024, ___expiresIn_1)); }
	inline String_t* get_expiresIn_1() const { return ___expiresIn_1; }
	inline String_t** get_address_of_expiresIn_1() { return &___expiresIn_1; }
	inline void set_expiresIn_1(String_t* value)
	{
		___expiresIn_1 = value;
		Il2CppCodeGenWriteBarrier((&___expiresIn_1), value);
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(AllUserData_t1205080024, ___user_2)); }
	inline UserData_t4126390532 * get_user_2() const { return ___user_2; }
	inline UserData_t4126390532 ** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(UserData_t4126390532 * value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier((&___user_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLUSERDATA_T1205080024_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef TESTHARNESSDATA_T3519976756_H
#define TESTHARNESSDATA_T3519976756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.FizzyoFramework/TestHarnessData
struct  TestHarnessData_t3519976756 
{
public:
	// System.Int32 Fizzyo.FizzyoFramework/TestHarnessData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TestHarnessData_t3519976756, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTHARNESSDATA_T3519976756_H
#ifndef USERTAGRETURNTYPE_T1432432491_H
#define USERTAGRETURNTYPE_T1432432491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.UserTagReturnType
struct  UserTagReturnType_t1432432491 
{
public:
	// System.Int32 Fizzyo.UserTagReturnType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserTagReturnType_t1432432491, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERTAGRETURNTYPE_T1432432491_H
#ifndef LOGINRETURNTYPE_T3413865398_H
#define LOGINRETURNTYPE_T3413865398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.LoginReturnType
struct  LoginReturnType_t3413865398 
{
public:
	// System.Int32 Fizzyo.LoginReturnType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoginReturnType_t3413865398, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINRETURNTYPE_T3413865398_H
#ifndef CALIBRATIONRETURNTYPE_T1835180308_H
#define CALIBRATIONRETURNTYPE_T1835180308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.CalibrationReturnType
struct  CalibrationReturnType_t1835180308 
{
public:
	// System.Int32 Fizzyo.CalibrationReturnType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CalibrationReturnType_t1835180308, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALIBRATIONRETURNTYPE_T1835180308_H
#ifndef FIZZYOUSER_T2963651454_H
#define FIZZYOUSER_T2963651454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.FizzyoUser
struct  FizzyoUser_t2963651454  : public RuntimeObject
{
public:
	// System.String Fizzyo.FizzyoUser::userID
	String_t* ___userID_5;
	// System.String Fizzyo.FizzyoUser::patientRecordId
	String_t* ___patientRecordId_6;
	// System.String Fizzyo.FizzyoUser::token
	String_t* ___token_7;
	// System.Boolean Fizzyo.FizzyoUser::loggedIn
	bool ___loggedIn_8;
	// System.String Fizzyo.FizzyoUser::username
	String_t* ___username_9;
	// System.String Fizzyo.FizzyoUser::testUsername
	String_t* ___testUsername_10;
	// System.String Fizzyo.FizzyoUser::testPassword
	String_t* ___testPassword_11;
	// System.String Fizzyo.FizzyoUser::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_12;
	// System.String Fizzyo.FizzyoUser::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_13;
	// System.Boolean Fizzyo.FizzyoUser::loginInProgress
	bool ___loginInProgress_14;
	// Fizzyo.LoginReturnType Fizzyo.FizzyoUser::loginResult
	int32_t ___loginResult_15;
	// System.Boolean Fizzyo.FizzyoUser::userTagSet
	bool ___userTagSet_16;
	// System.Boolean Fizzyo.FizzyoUser::calibrationSet
	bool ___calibrationSet_17;

public:
	inline static int32_t get_offset_of_userID_5() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___userID_5)); }
	inline String_t* get_userID_5() const { return ___userID_5; }
	inline String_t** get_address_of_userID_5() { return &___userID_5; }
	inline void set_userID_5(String_t* value)
	{
		___userID_5 = value;
		Il2CppCodeGenWriteBarrier((&___userID_5), value);
	}

	inline static int32_t get_offset_of_patientRecordId_6() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___patientRecordId_6)); }
	inline String_t* get_patientRecordId_6() const { return ___patientRecordId_6; }
	inline String_t** get_address_of_patientRecordId_6() { return &___patientRecordId_6; }
	inline void set_patientRecordId_6(String_t* value)
	{
		___patientRecordId_6 = value;
		Il2CppCodeGenWriteBarrier((&___patientRecordId_6), value);
	}

	inline static int32_t get_offset_of_token_7() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___token_7)); }
	inline String_t* get_token_7() const { return ___token_7; }
	inline String_t** get_address_of_token_7() { return &___token_7; }
	inline void set_token_7(String_t* value)
	{
		___token_7 = value;
		Il2CppCodeGenWriteBarrier((&___token_7), value);
	}

	inline static int32_t get_offset_of_loggedIn_8() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___loggedIn_8)); }
	inline bool get_loggedIn_8() const { return ___loggedIn_8; }
	inline bool* get_address_of_loggedIn_8() { return &___loggedIn_8; }
	inline void set_loggedIn_8(bool value)
	{
		___loggedIn_8 = value;
	}

	inline static int32_t get_offset_of_username_9() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___username_9)); }
	inline String_t* get_username_9() const { return ___username_9; }
	inline String_t** get_address_of_username_9() { return &___username_9; }
	inline void set_username_9(String_t* value)
	{
		___username_9 = value;
		Il2CppCodeGenWriteBarrier((&___username_9), value);
	}

	inline static int32_t get_offset_of_testUsername_10() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___testUsername_10)); }
	inline String_t* get_testUsername_10() const { return ___testUsername_10; }
	inline String_t** get_address_of_testUsername_10() { return &___testUsername_10; }
	inline void set_testUsername_10(String_t* value)
	{
		___testUsername_10 = value;
		Il2CppCodeGenWriteBarrier((&___testUsername_10), value);
	}

	inline static int32_t get_offset_of_testPassword_11() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___testPassword_11)); }
	inline String_t* get_testPassword_11() const { return ___testPassword_11; }
	inline String_t** get_address_of_testPassword_11() { return &___testPassword_11; }
	inline void set_testPassword_11(String_t* value)
	{
		___testPassword_11 = value;
		Il2CppCodeGenWriteBarrier((&___testPassword_11), value);
	}

	inline static int32_t get_offset_of_U3CUserIDU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___U3CUserIDU3Ek__BackingField_12)); }
	inline String_t* get_U3CUserIDU3Ek__BackingField_12() const { return ___U3CUserIDU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CUserIDU3Ek__BackingField_12() { return &___U3CUserIDU3Ek__BackingField_12; }
	inline void set_U3CUserIDU3Ek__BackingField_12(String_t* value)
	{
		___U3CUserIDU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIDU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CAccessTokenU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___U3CAccessTokenU3Ek__BackingField_13)); }
	inline String_t* get_U3CAccessTokenU3Ek__BackingField_13() const { return ___U3CAccessTokenU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CAccessTokenU3Ek__BackingField_13() { return &___U3CAccessTokenU3Ek__BackingField_13; }
	inline void set_U3CAccessTokenU3Ek__BackingField_13(String_t* value)
	{
		___U3CAccessTokenU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAccessTokenU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_loginInProgress_14() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___loginInProgress_14)); }
	inline bool get_loginInProgress_14() const { return ___loginInProgress_14; }
	inline bool* get_address_of_loginInProgress_14() { return &___loginInProgress_14; }
	inline void set_loginInProgress_14(bool value)
	{
		___loginInProgress_14 = value;
	}

	inline static int32_t get_offset_of_loginResult_15() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___loginResult_15)); }
	inline int32_t get_loginResult_15() const { return ___loginResult_15; }
	inline int32_t* get_address_of_loginResult_15() { return &___loginResult_15; }
	inline void set_loginResult_15(int32_t value)
	{
		___loginResult_15 = value;
	}

	inline static int32_t get_offset_of_userTagSet_16() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___userTagSet_16)); }
	inline bool get_userTagSet_16() const { return ___userTagSet_16; }
	inline bool* get_address_of_userTagSet_16() { return &___userTagSet_16; }
	inline void set_userTagSet_16(bool value)
	{
		___userTagSet_16 = value;
	}

	inline static int32_t get_offset_of_calibrationSet_17() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___calibrationSet_17)); }
	inline bool get_calibrationSet_17() const { return ___calibrationSet_17; }
	inline bool* get_address_of_calibrationSet_17() { return &___calibrationSet_17; }
	inline void set_calibrationSet_17(bool value)
	{
		___calibrationSet_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIZZYOUSER_T2963651454_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4500 = { sizeof (TestHarnessData_t3519976756)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4500[4] = 
{
	TestHarnessData_t3519976756::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4501 = { sizeof (AllUserData_t1205080024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4501[3] = 
{
	AllUserData_t1205080024::get_offset_of_accessToken_0(),
	AllUserData_t1205080024::get_offset_of_expiresIn_1(),
	AllUserData_t1205080024::get_offset_of_user_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4502 = { sizeof (UserData_t4126390532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4502[4] = 
{
	UserData_t4126390532::get_offset_of_id_0(),
	UserData_t4126390532::get_offset_of_firstName_1(),
	UserData_t4126390532::get_offset_of_lastName_2(),
	UserData_t4126390532::get_offset_of_role_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4503 = { sizeof (UserTag_t2530831734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4503[1] = 
{
	UserTag_t2530831734::get_offset_of_gamerTag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4504 = { sizeof (LoginReturnType_t3413865398)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4504[4] = 
{
	LoginReturnType_t3413865398::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4505 = { sizeof (UserTagReturnType_t1432432491)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4505[5] = 
{
	UserTagReturnType_t1432432491::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4506 = { sizeof (CalibrationReturnType_t1835180308)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4506[4] = 
{
	CalibrationReturnType_t1835180308::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4507 = { sizeof (FizzyoUser_t2963651454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4507[18] = 
{
	0,
	0,
	0,
	0,
	0,
	FizzyoUser_t2963651454::get_offset_of_userID_5(),
	FizzyoUser_t2963651454::get_offset_of_patientRecordId_6(),
	FizzyoUser_t2963651454::get_offset_of_token_7(),
	FizzyoUser_t2963651454::get_offset_of_loggedIn_8(),
	FizzyoUser_t2963651454::get_offset_of_username_9(),
	FizzyoUser_t2963651454::get_offset_of_testUsername_10(),
	FizzyoUser_t2963651454::get_offset_of_testPassword_11(),
	FizzyoUser_t2963651454::get_offset_of_U3CUserIDU3Ek__BackingField_12(),
	FizzyoUser_t2963651454::get_offset_of_U3CAccessTokenU3Ek__BackingField_13(),
	FizzyoUser_t2963651454::get_offset_of_loginInProgress_14(),
	FizzyoUser_t2963651454::get_offset_of_loginResult_15(),
	FizzyoUser_t2963651454::get_offset_of_userTagSet_16(),
	FizzyoUser_t2963651454::get_offset_of_calibrationSet_17(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
