/**
  ******************************************************************************
  * @file    sin_wave_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed May 15 02:08:17 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "sin_wave_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sin_wave_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sin_wave_weights_array_u64[161] = {
  0xbe678ff03eee4ae7U, 0xbf0966e3bf0de5d3U, 0xbd804dc03e9f1cb2U, 0x3eab888bbe9c813dU,
  0xbe9d70b6beb24e92U, 0xbe8150873e0a7839U, 0x3e7156573ecb6ddcU, 0x3e4a34d43f1ab64aU,
  0x3e973688U, 0x0U, 0xbf05b268U, 0xbe98731d00000000U,
  0x0U, 0xbe9f476dU, 0xbeeb13fdbeedf041U, 0xbf0bde29bd43ead8U,
  0x3e23cc763e98338eU, 0xbdb82b64bda3f138U, 0xbd091f98beea0224U, 0x3dc9d7e5bd4ce138U,
  0xbcc94540be95d37bU, 0xbe7417e63e3cd87dU, 0xbee8ca8fbe9681d5U, 0xbf41f5573daa9b21U,
  0x3e56bec63e0eef72U, 0xbe9b98f9bd161310U, 0xbec441423e26bf36U, 0xbe8465503e66d436U,
  0xbe4d4de43e87a161U, 0x3dff6e44be9885d8U, 0x3e020d4abdb4bd50U, 0xbec762cebe9ed02dU,
  0x3df997acbe4f3e95U, 0xbeb06bafbec913edU, 0xbe770579be8c6500U, 0xbe9761683cd52230U,
  0xbeb3f8babeccc97fU, 0x3e85f3d9bdb02708U, 0xbe1c300a3e550882U, 0xbeac6c1cbbf4c000U,
  0x3e9deef33dd874e8U, 0x3e9464e93e907b33U, 0x3de93514babe617aU, 0xbec3e0c63e91b66fU,
  0xbdb82554bb9b7100U, 0x3ecc6719be9c52e3U, 0xbf466899be8326a8U, 0xbf10b1c43ed196baU,
  0xbeafd38cbe0cae9fU, 0xbeaf0bd23b37b100U, 0xbe8650333ec957deU, 0x3ef878463eb22cbbU,
  0xbedb1883bdb38404U, 0xbe5c7f28bde4cb6aU, 0x3ecccc8a3ecbe9c8U, 0x3ee485383ea60921U,
  0x3da4778c3e6420d2U, 0x3e9b6a0fbd03a198U, 0x3d7c8100be38b917U, 0x3bff67ab3d93485cU,
  0xbeae97debe54f3ebU, 0x3eccb901bedbdf64U, 0xbf07560cbe912a40U, 0xbf2c78b73e736e98U,
  0x3e95bf3dbcefda6eU, 0xbe7f1bde3c292c40U, 0xbeb7eef7bed55bbdU, 0xbec1b9ccbe64b8aeU,
  0xbe8cf62e3ce1b6c0U, 0xbdf908583db5dad0U, 0x3c7b891abdeaffc4U, 0xbf2386a63ed37ae8U,
  0xbe23d7883eb0bb8cU, 0xbe01f0483ec2e3b5U, 0x3e18d276bf119907U, 0xbf0a2ea13c60fbe0U,
  0x3dfa48743d86c258U, 0x3e4b97763e80ff20U, 0xbef11a53be2230f9U, 0xbf061b3f3e40d140U,
  0xbe9d5171bd9cfff3U, 0xbe789db2be8db231U, 0x3e35ef3a3e4ae2a9U, 0x3c03dc7c3d2deba8U,
  0xbdd7bb24bedb76d1U, 0xbeb8f3b83ea62b3eU, 0x3e4db3a83d82bce5U, 0xbe88a8c5be7e2672U,
  0xbcbd1610bdddb648U, 0x3eb26b5bbe534cb4U, 0x3e4397febe53468fU, 0xbed24c74beb9e2ddU,
  0xbed7d0783ec3a9e1U, 0xbe4e5ad8bce0c740U, 0xbe17572abdd7bb84U, 0xbe5a4bc1bb9e3e00U,
  0xbed9c025be464139U, 0xbe37bc0e3e7d0fa6U, 0xbe93294c3e204327U, 0xbe5b7addbebf9e0fU,
  0xbe1cbbe83e26253eU, 0xbdc2f2f0be4a32b8U, 0x3f065ea93d3f5fe9U, 0x3f3bf8453e673ad7U,
  0xbd6755d8bedbe9a5U, 0x3e8ffa2dbeb4ddaeU, 0x3ec22ef1bedceb96U, 0xbeb525e33e1233aaU,
  0x3e4925b6be899c92U, 0xbe3c37c2be005a5cU, 0x3db97384bed5b0cbU, 0xbbea78403e9dc373U,
  0xbe1f50bcbe810604U, 0x3a3b1e003e3430deU, 0x3e14ae163df71d4bU, 0x3d7c922a3e805823U,
  0xbe33ccc43e06484aU, 0xbe904d163ec229e6U, 0x3eb81b383d0ef460U, 0x3f3925c03d9beb67U,
  0xbe3303aebe462d0aU, 0x3e8b22fd3ea55aa1U, 0x3dea93543c052960U, 0xbe0992383e8db01bU,
  0xbe9e7a80bdd49130U, 0x3d90ad44becc5866U, 0xbeb5d5bebdaa259cU, 0x3e638fa23c8937c0U,
  0x3c041220bbb80d57U, 0xbe38dec63eb26fefU, 0x3db12664bd6e3e88U, 0x3da79736bebd0f1aU,
  0xbd7ee2403e34be2aU, 0xbece75a33e9204e0U, 0x3cfcb8ba3d946454U, 0xbe877a9fbe13407eU,
  0xbe387276be971266U, 0xbe3e20cb3e3e9a32U, 0x3d99344c3eb013e8U, 0xbe693698be950908U,
  0x3e8e59513e8007c9U, 0xbc81f570bedad4b8U, 0xbeacd4333d78b759U, 0x3ea57c603cca9eb2U,
  0xbd4ac9d13d8bcbd7U, 0x3d85982f00000000U, 0x3d4d3a6dbccee97bU, 0x3d366e253caa4e06U,
  0xbd276fceU, 0xbf261203U, 0xbf1b3a1dU, 0xbb4f3addbd0dffc6U,
  0x3e3923bb3f2f5422U, 0x3f18062d3ee77e10U, 0x3f1ec9a0be97e478U, 0x3f494b683f713cfdU,
  0xbe5f34543e39a206U, 0x3eca57963fd14e7dU, 0xbdf959543fe53bd9U, 0x3effe6143e246cd3U,
  0xbe99ec3cU,
};


ai_handle g_sin_wave_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sin_wave_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

