/*============================================================================
   Copyright (c) 2011-2012 Qualcomm Technologies, Inc.  All Rights Reserved.
   Qualcomm Technologies Proprietary and Confidential.
============================================================================*/
#ifndef __VFE_CONFIG_H__
#define __VFE_CONFIG_H__

#include "vfe_util_common.h"

const uint32_t VIDEO_CONFIG =
  (VFE_MOD_LINEARIZATION |
  VFE_MOD_ROLLOFF |
  VFE_MOD_DEMUX |
  VFE_MOD_DEMOSAIC |
  VFE_MOD_BPC |
  VFE_MOD_ABF |
  VFE_MOD_ASF |
  VFE_MOD_COLOR_CONV |
  VFE_MOD_COLOR_CORRECT |
  VFE_MOD_CHROMA_SS |
  VFE_MOD_CHROMA_SUPPRESS |
  VFE_MOD_LA |
  VFE_MOD_MCE |
  VFE_MOD_SCE |
  VFE_MOD_WB |
  VFE_MOD_GAMMA |
  VFE_MOD_AWB_STATS |
  VFE_MOD_AEC_STATS |
  VFE_MOD_AF_STATS |
  VFE_MOD_FOV |
  VFE_MOD_LA |
  VFE_MOD_SCALER |
  VFE_MOD_CLAMP |
  VFE_MOD_FRAME_SKIP |
  VFE_MOD_IHIST_STATS |
  VFE_MOD_RSCS_STATS);


const uint32_t SNAPSHOT_CONFIG =
  (VFE_MOD_LINEARIZATION |
  VFE_MOD_ROLLOFF |
  VFE_MOD_DEMUX |
  VFE_MOD_DEMOSAIC |
  VFE_MOD_BPC |
  VFE_MOD_ABF |
  VFE_MOD_ASF |
  VFE_MOD_COLOR_CONV |
  VFE_MOD_COLOR_CORRECT |
  VFE_MOD_CHROMA_SS |
  VFE_MOD_CHROMA_SUPPRESS |
  VFE_MOD_LA |
  VFE_MOD_MCE |
  VFE_MOD_SCE |
  VFE_MOD_WB |
  VFE_MOD_GAMMA |
  VFE_MOD_FOV |
  VFE_MOD_SCALER |
  VFE_MOD_CLAMP |
  VFE_MOD_FRAME_SKIP);

const uint32_t ZSL_CONFIG =
  (VFE_MOD_LINEARIZATION |
  VFE_MOD_ROLLOFF |
  VFE_MOD_DEMUX |
  VFE_MOD_DEMOSAIC |
  VFE_MOD_BPC |
  VFE_MOD_ABF |
  VFE_MOD_ASF |
  VFE_MOD_COLOR_CONV |
  VFE_MOD_COLOR_CORRECT |
  VFE_MOD_CHROMA_SS |
  VFE_MOD_CHROMA_SUPPRESS |
  VFE_MOD_LA |
  VFE_MOD_MCE |
  VFE_MOD_SCE |
  VFE_MOD_WB |
  VFE_MOD_GAMMA |
  VFE_MOD_AWB_STATS |
  VFE_MOD_AEC_STATS |
  VFE_MOD_AF_STATS |
  VFE_MOD_FOV |
  VFE_MOD_SCALER |
  VFE_MOD_CLAMP |
  VFE_MOD_FRAME_SKIP |
  VFE_MOD_IHIST_STATS |
  VFE_MOD_RSCS_STATS);

const uint32_t YUV_VIDEO_CONFIG =
  (VFE_MOD_FOV |
  VFE_MOD_SCALER |
  VFE_MOD_DEMUX |
  VFE_MOD_CLAMP |
  VFE_MOD_CHROMA_SS |
  VFE_MOD_FRAME_SKIP);

const uint32_t YUV_SNAPSHOT_CONFIG =
  (VFE_MOD_FOV |
  VFE_MOD_SCALER |
  VFE_MOD_DEMUX |
  VFE_MOD_CLAMP |
  VFE_MOD_CHROMA_SS |
  VFE_MOD_FRAME_SKIP);

const uint32_t YUV_ZSL_CONFIG =
  (VFE_MOD_FOV |
  VFE_MOD_SCALER |
  VFE_MOD_DEMUX |
  VFE_MOD_CLAMP |
  VFE_MOD_CHROMA_SS |
  VFE_MOD_FRAME_SKIP);

const uint32_t STATS_ALL_MASK =
  (~(VFE_MOD_AWB_STATS |
  VFE_MOD_AEC_STATS |
  VFE_MOD_AF_STATS |
  VFE_MOD_IHIST_STATS |
  VFE_MOD_RSCS_STATS));

const uint32_t COLOR_MOD_ALL_MASK =
  (~(VFE_MOD_CHROMA_SUPPRESS |
  VFE_MOD_MCE |
  VFE_MOD_SCE));

const uint32_t BASE_CONFIG =
  (VFE_MOD_CHROMA_SS |
  VFE_MOD_AWB_STATS |
  VFE_MOD_AEC_STATS |
  VFE_MOD_AF_STATS |
  VFE_MOD_FOV |
  VFE_MOD_SCALER |
  VFE_MOD_CLAMP |
  VFE_MOD_FRAME_SKIP |
  VFE_MOD_IHIST_STATS |
  VFE_MOD_RSCS_STATS);

#endif /*__VFE_CONFIG_H__*/
