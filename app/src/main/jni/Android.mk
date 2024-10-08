LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libcurl
LOCAL_SRC_FILES := curl/curl-android-$(TARGET_ARCH_ABI)/lib/libcurl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libdobby
LOCAL_SRC_FILES := Dobby/libraries/$(TARGET_ARCH_ABI)/libdobby.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/Dobby/libraries/
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libssl
LOCAL_SRC_FILES := curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libssl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcrypto
LOCAL_SRC_FILES := curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libcrypto.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := GaGa

LOCAL_CFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CFLAGS += -fno-rtti -fno-exceptions -fpermissive
LOCAL_CPPFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -Werror -s -std=c++17
LOCAL_CPPFLAGS += -Wno-error=c++11-narrowing -fms-extensions -fno-rtti -fno-exceptions -fpermissive
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all, -llog
LOCAL_ARM_MODE := arm

LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)

LOCAL_SRC_FILES 		:=  main.cpp \
        Helper/fake_dlfcn.cpp \
        tools.cpp \
        Helper/ElfImg.cpp \
        Helper/plthook_elf.cpp \
        base64/base64.cpp \
        SDK/SANSERO_Basic.cpp \
        SDK/SANSERO_Basic_functions.cpp \
        SDK/SANSERO_CoreUObject_functions.cpp \
        SDK/SANSERO_Engine_functions.cpp \
        SDK/SANSERO_ShadowTrackerExtra_functions.cpp \
        SDK/SANSERO_Client_functions.cpp \
        imgui/imgui.cpp \
        imgui/imgui_demo.cpp \
        imgui/imgui_draw.cpp \
        imgui/imgui_tables.cpp \
        imgui/imgui_widgets.cpp \
        imgui/backends/imgui_impl_android.cpp \
        imgui/backends/imgui_impl_opengl3.cpp \
        Substrate/hde64.c \
        Substrate/SubstrateDebug.cpp \
        Substrate/SubstrateHook.cpp \
        Substrate/SubstratePosixMemory.cpp \
        Substrate/And64InlineHook.cpp 

LOCAL_C_INCLUDES := $(LOCAL_PATH)/curl/curl-android-$(TARGET_ARCH_ABI)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/curl/openssl-android-$(TARGET_ARCH_ABI)/include

LOCAL_CPP_FEATURES                      := exceptions
LOCAL_LDLIBS                            := -llog -landroid -lEGL -lGLESv2 -lGLESv3 -lGLESv1_CM -lz
LOCAL_STATIC_LIBRARIES					:= libcurl libssl libcrypto libdobby
include $(BUILD_SHARED_LIBRARY)
