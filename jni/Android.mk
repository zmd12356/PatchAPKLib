
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := bspatch
LOCAL_SRC_FILES := com_zmd_patchapklib_PatchUtil.c \
		   bspatch.c \
		   bzlib/bzlib.c \
		   bzlib/crctable.c \
		   bzlib/compress.c \
		   bzlib/randtable.c \
		   bzlib/decompress.c \
		   bzlib/huffman.c \
		   bzlib/blocksort.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)/bzlib

include $(BUILD_SHARED_LIBRARY)
