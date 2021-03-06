/*
* Copyright(c) 2018 Intel Corporation
* SPDX - License - Identifier: BSD - 2 - Clause - Patent
*/

#ifndef EbErrorCodes_h
#define EbErrorCodes_h

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


#define   CHECK_REPORT_ERROR(cond, appCallbackPtr, errorCode)  if(!(cond))                                           \
                                                                {                                                    \
                                                                    appCallbackPtr->callbackFunctions.ErrorHandler(  \
                                                                        ((appCallbackPtr)->handle),                  \
                                                                        ((appCallbackPtr)->appPrivateData),          \
                                                                        (errorCode),                                 \
                                                                        (0),                                         \
                                                                        ((appCallbackPtr)->appPrivateData));                                    \
                                                                }

#define   CHECK_REPORT_ERROR_NC(appCallbackPtr, errorCode)     appCallbackPtr->callbackFunctions.ErrorHandler(  \
                                                                        ((appCallbackPtr)->handle),                  \
                                                                        ((appCallbackPtr)->appPrivateData),          \
                                                                        (errorCode),                                 \
                                                                        (0),                                         \
                                                                        ((appCallbackPtr)->appPrivateData));         \


typedef enum ENCODER_ERROR_CODES
{
    EB_APP_ERRORS                       = 0x0100,     
    
    //EB_ENC_AMVP_ERRORS                = 0x0200,
    EB_ENC_AMVP_ERROR1                  = 0x0200,
    EB_ENC_AMVP_ERROR2                  = 0x0201,
    EB_ENC_AMVP_ERROR3                  = 0x0202,
    EB_ENC_AMVP_ERROR4                  = 0x0203,
    EB_ENC_AMVP_ERROR5                  = 0x0204,
    EB_ENC_AMVP_ERROR6                  = 0x0205,
    EB_ENC_AMVP_NULL_REF_ERROR          = 0x0206,
    EB_ENC_AMVP_SPATIAL_NA_ERROR        = 0x0207,
	EB_ENC_AMVP_ERROR7					= 0x0208,
	EB_ENC_AMVP_ERROR8					= 0x0209,

    EB_ENC_MCP_ERRORS                   = 0x0300,

    //EB_ENC_BITSTREAM_ERRORS           = 0x0400,
    EB_ENC_BITSTREAM_ERROR1             = 0x0400,
    EB_ENC_BITSTREAM_ERROR2             = 0x0401,
    EB_ENC_BITSTREAM_ERROR3             = 0x0402,
    EB_ENC_BITSTREAM_ERROR4             = 0x0403,
    EB_ENC_BITSTREAM_ERROR5             = 0x0404,
    EB_ENC_BITSTREAM_ERROR6             = 0x0405,
    EB_ENC_BITSTREAM_ERROR7             = 0x0406,
    EB_ENC_BITSTREAM_ERROR8             = 0x0407,
    
    //EB_ENC_CL_ERRORS                  = 0x0500,
    EB_ENC_CL_ERROR1                    = 0x0500,
    EB_ENC_CL_ERROR2                    = 0x0501,
    EB_ENC_CL_ERROR3                    = 0x0502,
    EB_ENC_CL_ERROR4                    = 0x0503,
    EB_ENC_CL_ERROR5                    = 0x0504,
    EB_ENC_CL_ERROR6                    = 0x0505,
    EB_ENC_CL_ERROR7                    = 0x0506, 
    EB_ENC_CL_ERROR8                    = 0x0507, 
    EB_ENC_CL_ERROR9                    = 0x0508, 

    //EB_ENC_DLF_ERRORS                 = 0x0600,
    EB_ENC_DLF_ERROR1                   = 0x0600,
    EB_ENC_DLF_ERROR2                   = 0x0601,
    EB_ENC_DLF_ERROR3                   = 0x0602,
    EB_ENC_DLF_ERROR4                   = 0x0603,
    EB_ENC_DLF_ERROR5                   = 0x0604,
    EB_ENC_DLF_ERROR6                   = 0x0605,
    EB_ENC_DLF_ERROR7                   = 0x0606,
    EB_ENC_DLF_ERROR8                   = 0x0607,
    EB_ENC_DLF_ERROR9                   = 0x0608,
    EB_ENC_DLF_ERROR10                   = 0x0609,

    //EB_ENC_EC_ERRORS                  = 0x0700,
    EB_ENC_EC_ERROR1                    = 0x0700,
    EB_ENC_EC_ERROR2                    = 0x0701,
    EB_ENC_EC_ERROR3                    = 0x0702,
    EB_ENC_EC_ERROR4                    = 0x0703,
    EB_ENC_EC_ERROR5                    = 0x0704,
    EB_ENC_EC_ERROR6                    = 0x0705,
    EB_ENC_EC_ERROR7                    = 0x0706,
    EB_ENC_EC_ERROR8                    = 0x0707,
    EB_ENC_EC_ERROR9                    = 0x0708,
    EB_ENC_EC_ERROR10                   = 0x0709,
    EB_ENC_EC_ERROR11                   = 0x070a,
    EB_ENC_EC_ERROR12                   = 0x070b,
    EB_ENC_EC_ERROR13                   = 0x070c,
    EB_ENC_EC_ERROR14                   = 0x070d,
    EB_ENC_EC_ERROR15                   = 0x070e,
    EB_ENC_EC_ERROR16                   = 0x070f,
    EB_ENC_EC_ERROR17                   = 0x0710,
    EB_ENC_EC_ERROR18                   = 0x0711,
    EB_ENC_EC_ERROR19                   = 0x0712,
    EB_ENC_EC_ERROR20                   = 0x0713,
    EB_ENC_EC_ERROR21                   = 0x0714,
    EB_ENC_EC_ERROR22                   = 0x0715,
    EB_ENC_EC_ERROR23                   = 0x0716,
    EB_ENC_EC_ERROR24                   = 0x0717,
    EB_ENC_EC_ERROR25                   = 0x0718,
	EB_ENC_EC_ERROR26                   = 0x0719,
	EB_ENC_EC_ERROR27                   = 0x0720,
	EB_ENC_EC_ERROR28                   = 0x0721,
	EB_ENC_EC_ERROR29                   = 0x0722,

    //EB_ENC_INTER_PRED_ERRORS          = 0x0800,
    EB_ENC_INTER_PRED_ERROR0            = 0x0800,
    EB_ENC_INTER_PRED_ERROR1            = 0x0801,
    EB_ENC_INTER_PRED_ERROR2            = 0x0802,
    EB_ENC_INTER_PRED_ERROR3            = 0x0803,
    EB_ENC_INTER_PRED_ERROR4            = 0x0804,
    EB_ENC_INTER_INVLD_MCP_ERROR        = 0x0805,

    //EB_ENC_RD_COST_ERRORS             = 0x0900,
    EB_ENC_RD_COST_ERROR1               = 0x0900,
    EB_ENC_RD_COST_ERROR2               = 0x0901,
    EB_ENC_RD_COST_ERROR3               = 0x0902,

    //EB_ENC_SAO_ERRORS                 = 0x0a00,
    EB_ENC_SAO_ERROR1                   = 0x0a00,
    EB_ENC_SAO_ERROR2                   = 0x0a01,

    EB_ENC_TRANSFORM_ERRORS             = 0x0b00,
    EB_ENC_TFILTER_ERRORS               = 0x0c00,
    EB_ENC_THREAD_ERRORS                = 0x0d00,
    EB_ENC_ALF_ERRORS                   = 0x0e00,
    
    //EB_ENC_HANDLE_ERRORS              = 0x0f00,
    EB_ENC_HANDLE_ERROR1                = 0x0f00,
    EB_ENC_HANDLE_ERROR2                = 0x0f01,
    EB_ENC_HANDLE_ERROR3                = 0x0f02,
    EB_ENC_HANDLE_ERROR4                = 0x0f03,
    EB_ENC_HANDLE_ERROR5                = 0x0f04,
    EB_ENC_HANDLE_ERROR6                = 0x0f05,
    EB_ENC_HANDLE_ERROR7                = 0x0f06,
    EB_ENC_HANDLE_ERROR8                = 0x0f07,
    EB_ENC_HANDLE_ERROR9                = 0x0f08,
    EB_ENC_HANDLE_ERROR10               = 0x0f09,
    EB_ENC_HANDLE_ERROR11               = 0x0f0a,
    EB_ENC_HANDLE_ERROR12               = 0x0f0b,
    EB_ENC_HANDLE_ERROR13               = 0x0f0c,
    EB_ENC_HANDLE_ERROR14               = 0x0f0d,
    EB_ENC_HANDLE_ERROR15               = 0x0f0e,
    EB_ENC_HANDLE_ERROR16               = 0x0f0f,
    EB_ENC_HANDLE_ERROR17               = 0x0f10,
    EB_ENC_HANDLE_ERROR18               = 0x0f11,

    //EB_ENC_MD_ERRORS                  = 0x1000,
    EB_ENC_MD_ERROR1                    = 0x1000,
    EB_ENC_MD_ERROR2                    = 0x1001,
    EB_ENC_MD_ERROR3                    = 0x1002,
    EB_ENC_MD_ERROR4                    = 0x1003,
    EB_ENC_MD_ERROR5                    = 0x1004,
    EB_ENC_MD_ERROR6                    = 0x1005,
    EB_ENC_MD_ERROR7                    = 0x1006,
    EB_ENC_MD_ERROR8                    = 0x1007,
    EB_ENC_MD_ERROR9                    = 0x1008,
    EB_ENC_MD_ERROR10                    = 0x1009,

    //EB_ENC_ME_ERRORS                  = 0x1100,
    EB_ENC_ME_ERROR1                    = 0x1100,
    EB_ENC_ME_ERROR2                    = 0x1101,

    //EB_ENC_PACKETIZATION_ERRORS       = 0x1200,
    EB_ENC_PACKETIZATION_ERROR1         = 0x1200,
    EB_ENC_PACKETIZATION_ERROR2         = 0x1201,
    EB_ENC_PACKETIZATION_ERROR3         = 0x1202,
    EB_ENC_PACKETIZATION_ERROR4         = 0x1203,
    EB_ENC_PACKETIZATION_ERROR5         = 0x1204,

    //EB_ENC_PM_ERRORS                  = 0x1300,
    EB_ENC_PM_ERROR0                    = 0x1300,
    EB_ENC_PM_ERROR1                    = 0x1301,
    EB_ENC_PM_ERROR2                    = 0x1302,
    EB_ENC_PM_ERROR3                    = 0x1303,
    EB_ENC_PM_ERROR4                    = 0x1304,
    EB_ENC_PM_ERROR5                    = 0x1305,
    EB_ENC_PM_ERROR6                    = 0x1306,
    EB_ENC_PM_ERROR7                    = 0x1307,
    EB_ENC_PM_ERROR8                    = 0x1308,
    EB_ENC_PM_ERROR9                    = 0x1309,
    EB_ENC_PM_ERROR10                   = 0x130a,
    EB_ENC_PM_ERROR11                   = 0x130b,
    EB_ENC_PM_ERROR12                   = 0x130c,
    EB_ENC_PM_ERROR13                   = 0x130e,
    EB_ENC_PM_ERROR14                   = 0x130f,
    EB_ENC_PM_ERROR15                   = 0x1310,

    //EB_ENC_RC_ERRORS                  = 0x1400 
    EB_ENC_RC_ERROR1                    = 0x1400, 
    EB_ENC_RC_ERROR2                    = 0x1401, 
    EB_ENC_RC_ERROR3                    = 0x1402, 
    EB_ENC_RC_ERROR4                    = 0x1403, 
    EB_ENC_RC_ERROR5                    = 0x1404, 
    EB_ENC_RC_ERROR6                    = 0x1405,
    EB_ENC_RC_ERROR7                    = 0x1406,

    //EB_ENC_PU_ERRORS                  = 0x1500,
    EB_ENC_PU_ERROR1                    = 0x1500,
    EB_ENC_PU_ERROR2                    = 0x1501,
    EB_ENC_INVLD_PART_SIZE_ERROR        = 0x1502,

    //EB_ENC_ERRORS                 = 0x1600,
    EB_ENC_ROB_OF_ERROR             = 0x1600,

    //EB_ENC_INTRA_PRED_ERRORS          = 0x1700,
    EB_ENC_INTRA_PRED_ERROR1            = 0x1700,
    EB_ENC_INTRA_PRED_ERROR2            = 0x1701,
    EB_ENC_INTRA_PRED_ERROR3            = 0x1702,

    //EB_ENC_FL_ERRORS                  = 0x1800,
    EB_ENC_FL_ERROR1                    = 0x1800,
    EB_ENC_FL_ERROR2                    = 0x1801,
    EB_ENC_FL_ERROR3                    = 0x1802,
    EB_ENC_FL_ERROR4                    = 0x1803,

    //EB_ENC_PRED_STRC_ERRORS           = 0x1900,
    EB_ENC_PRED_STRC_ERROR1             = 0x1900,
    EB_ENC_PRED_STRC_ERROR2             = 0x1901,

    //EB_ENC_SCS_ERRORS                 = 0x2000,
    EB_ENC_SCS_ERROR1                   = 0x2000,

    //EB_ENC_RESS_COOR_ERRORS           = 0x2100,
    EB_ENC_RESS_COOR_ERRORS1            = 0x2100,
    EB_ENC_RES_COORD_NoInputPicture             = 0x2101,
    EB_ENC_RES_COORD_InputPictureWidthTooLarge  = 0x2102,
    EB_ENC_RES_COORD_InputPictureHeightTooLarge = 0x2103,
    EB_ENC_RES_COORD_SubPictureFlagNotActive    = 0x2104,
    EB_ENC_RES_COORD_InputPictureNotEnoughRightPadding = 0x2105,
    EB_ENC_RES_COORD_InputPictureNotEnoughBottomPadding = 0x2106,

    //EB_ENC_PD_ERRORS                  = 0x2100,
    EB_ENC_PD_ERROR1                    = 0x2100,
    EB_ENC_PD_ERROR2                    = 0x2101,
    EB_ENC_PD_ERROR3                    = 0x2102,
    EB_ENC_PD_ERROR4                    = 0x2103,
    EB_ENC_PD_ERROR5                    = 0x2104,
    EB_ENC_PD_ERROR6                    = 0x2105,
    EB_ENC_PD_ERROR7                    = 0x2106,
    EB_ENC_PD_ERROR8                    = 0x2107,

} ENCODER_ERROR_CODES;

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // EbErrorCodes_h
