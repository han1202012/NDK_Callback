LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := jni
LOCAL_SRC_FILES := jni.c
#增加log函数对应的log库
LOCAL_LDLIBS += -llog 

include $(BUILD_SHARED_LIBRARY)