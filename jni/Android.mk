LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := SimpleJni
LOCAL_SRC_FILES := SimpleJni.cpp

include $(BUILD_SHARED_LIBRARY)
