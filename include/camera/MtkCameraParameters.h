/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_HARDWARE_MTK_CAMERA_PARAMETERS_H
#define ANDROID_HARDWARE_MTK_CAMERA_PARAMETERS_H

#include <utils/KeyedVector.h>
#include <utils/String8.h>

namespace android {

class MtkCameraParameters
{
public:
    static const char APP_MODE_NAME_DEFAULT[];
    static const char APP_MODE_NAME_MTK_ATV[];
    static const char APP_MODE_NAME_MTK_ENG[];
    static const char APP_MODE_NAME_MTK_PHOTO[];
    static const char APP_MODE_NAME_MTK_S3D[];
    static const char APP_MODE_NAME_MTK_VIDEO[];
    static const char APP_MODE_NAME_MTK_VT[];
    static const char APP_MODE_NAME_MTK_ZSD[];
    static const int  CAMERA_MODE_MTK_PRV;
    static const int  CAMERA_MODE_MTK_VDO;
    static const int  CAMERA_MODE_MTK_VT;
    static const int  CAMERA_MODE_NORMAL;
    static const char CAPTURE_MODE_ASD_SHOT[];
    static const char CAPTURE_MODE_AUTO_PANORAMA_SHOT[];
    static const char CAPTURE_MODE_BEST_SHOT[];
    static const char CAPTURE_MODE_BURST_SHOT[];
    static const char CAPTURE_MODE_CONTINUOUS_SHOT[];
    static const char CAPTURE_MODE_EV_BRACKET_SHOT[];
    static const char CAPTURE_MODE_FACE_BEAUTY[];
    static const char CAPTURE_MODE_HDR_SHOT[];
    static const char CAPTURE_MODE_MAV_SHOT[];
    static const char CAPTURE_MODE_MULTI_MOTION[];
    static const char CAPTURE_MODE_NORMAL[];
    static const char CAPTURE_MODE_PANORAMA_SHOT[];
    static const char CAPTURE_MODE_PANO_3D[];
    static const char CAPTURE_MODE_SINGLE_3D[];
    static const char CAPTURE_MODE_SMILE_SHOT[];
    static const char CAPTURE_MODE_ZSD_SHOT[];
    static const int  DISABLE;
    static const char EFFECT_SEPIA_BLUE[];
    static const char EFFECT_SEPIA_GREEN[];
    static const int  ENABLE;
    static const char EXPOSURE_METER_AVERAGE[];
    static const char EXPOSURE_METER_CENTER[];
    static const char EXPOSURE_METER_SPOT[];
    static const char FOCUS_METER_MULTI[];
    static const char FOCUS_METER_SPOT[];
    static const int  FPS_MODE_FIX;
    static const int  FPS_MODE_NORMAL;
    static const char HIGH[];
    static const char ISO_SPEED_100[];
    static const char ISO_SPEED_1600[];
    static const char ISO_SPEED_200[];
    static const char ISO_SPEED_400[];
    static const char ISO_SPEED_800[];
    static const char ISO_SPEED_AUTO[];
    static const char ISO_SPEED_ENG[];
    static const char KEY_AE_MODE[];
    static const char KEY_AF_LAMP_MODE[];
    static const char KEY_AF_X[];
    static const char KEY_AF_Y[];
    static const char KEY_AWB2PASS[];
    static const char KEY_BRIGHTNESS[];
    static const char KEY_BRIGHTNESS_VALUE[];
    static const char KEY_BURST_SHOT_NUM[];
    static const char KEY_CAMERA_MODE[];
    static const char KEY_CAPTURE_MODE[];
    static const char KEY_CAPTURE_PATH[];
    static const char KEY_CONTRAST[];
    static const char KEY_EDGE[];
    static const char KEY_EXPOSURE[];
    static const char KEY_EXPOSURE_METER[];
    static const char KEY_FAST_CONTINUOUS_SHOT[];
    static const char KEY_FB_SHARP[];
    static const char KEY_FB_SHARP_MAX[];
    static const char KEY_FB_SHARP_MIN[];
    static const char KEY_FB_SKIN_COLOR[];
    static const char KEY_FB_SKIN_COLOR_MAX[];
    static const char KEY_FB_SKIN_COLOR_MIN[];
    static const char KEY_FB_SMOOTH_LEVEL[];
    static const char KEY_FB_SMOOTH_LEVEL_MAX[];
    static const char KEY_FB_SMOOTH_LEVEL_MIN[];
    static const char KEY_FOCUS_DRAW[];
    static const char KEY_FOCUS_ENG_BEST_STEP[];
    static const char KEY_FOCUS_ENG_MAX_STEP[];
    static const char KEY_FOCUS_ENG_MIN_STEP[];
    static const char KEY_FOCUS_ENG_MODE[];
    static const char KEY_FOCUS_ENG_STEP[];
    static const char KEY_FOCUS_METER[];
    static const char KEY_FPS_MODE[];
    static const char KEY_HUE[];
    static const char KEY_ISO_SPEED[];
    static const char KEY_ISP_MODE[];
    static const char KEY_MATV_PREVIEW_DELAY[];
    static const char KEY_PANORAMA_DIR[];
    static const char KEY_PANORAMA_IDX[];
    static const char KEY_PREVIEW_DUMP_RESOLUTION[];
    static const char KEY_PREVIEW_INT_FORMAT[];
    static const char KEY_RAW_DUMP_FLAG[];
    static const char KEY_RAW_PATH[];
    static const char KEY_RAW_SAVE_MODE[];
    static const char KEY_SATURATION[];
    static const char KEY_STEREO_3D_IMAGE_FORMAT[];
    static const char KEY_STEREO_3D_MODE[];
    static const char KEY_STEREO_3D_PICTURE_SIZE[];
    static const char KEY_STEREO_3D_PREVIEW_SIZE[];
    static const char KEY_STEREO_3D_TYPE[];
    static const char KEY_SUPPORTED_CAPTURE_MODES[];
    static const char KEY_SUPPORTED_ZSD_MODE[];
    static const char KEY_VIDEO_HDR[];
    static const char KEY_ZSD_MODE[];
    static const char LOW[];
    static const char MIDDLE[];
    static const char OFF[];
    static const char ON[];
    static const char PANORAMA_DIR_DOWN[];
    static const char PANORAMA_DIR_LEFT[];
    static const char PANORAMA_DIR_RIGHT[];
    static const char PANORAMA_DIR_TOP[];
    static const char PIXEL_FORMAT_BAYER10[];
    static const char PIXEL_FORMAT_BAYER8[];
    static const char PIXEL_FORMAT_YUV420I[];
    static const char PIXEL_FORMAT_YUV422I_UYVY[];
    static const char PIXEL_FORMAT_YUV422I_VYUY[];
    static const char PIXEL_FORMAT_YUV422I_YVYU[];
    static const char PIXEL_FORMAT_YV12_GPU[];
    static const int  PREVIEW_DUMP_RESOLUTION_CROP;
    static const int  PREVIEW_DUMP_RESOLUTION_NORMAL;
    static const char PROPERTY_KEY_CLIENT_APPMODE[];
    static const char SCENE_MODE_NORMAL[];
    static const char WHITE_BALANCE_TUNGSTEN[];
};

}; // namespace android

#endif
