# Copyright (c) 2011 The WebRTC project authors. All Rights Reserved.
#
# Use of this source code is governed by a BSD-style license
# that can be found in the LICENSE file in the root of the source
# tree. An additional intellectual property rights grant can be found
# in the file PATENTS.  All contributing project authors may
# be found in the AUTHORS file in the root of the source tree.

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

include $(LOCAL_PATH)/../../../android-webrtc.mk

LOCAL_ARM_MODE := arm
LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := libwebrtc_resampler
LOCAL_VENDOR_MODULE := true
LOCAL_MODULE_TAGS := optional
LOCAL_CPP_EXTENSION := .cc
LOCAL_SRC_FILES := \
    push_sinc_resampler.cc \
    resampler.cc \
    sinc_resampler.cc \

LOCAL_SRC_FILES_x86 += sinc_resampler_sse.cc
LOCAL_SRC_FILES_x86_64 += sinc_resampler_sse.cc

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := \
    $(MY_WEBRTC_COMMON_DEFS)

LOCAL_CFLAGS_arm := $(MY_WEBRTC_COMMON_DEFS_arm)
LOCAL_CFLAGS_x86 := $(MY_WEBRTC_COMMON_DEFS_x86)
LOCAL_CFLAGS_mips := $(MY_WEBRTC_COMMON_DEFS_mips)
LOCAL_CFLAGS_arm64 := $(MY_WEBRTC_COMMON_DEFS_arm64)
LOCAL_CFLAGS_x86_64 := $(MY_WEBRTC_COMMON_DEFS_x86_64)
LOCAL_CFLAGS_mips64 := $(MY_WEBRTC_COMMON_DEFS_mips64)

LOCAL_CFLAGS += -Wno-unused-parameter

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/include \
    $(LOCAL_PATH)/../../.. \
    $(LOCAL_PATH)/../signal_processing/include

ifdef WEBRTC_STL
LOCAL_NDK_STL_VARIANT := $(WEBRTC_STL)
LOCAL_SDK_VERSION := 14
LOCAL_MODULE := $(LOCAL_MODULE)_$(WEBRTC_STL)
endif

include $(BUILD_STATIC_LIBRARY)
