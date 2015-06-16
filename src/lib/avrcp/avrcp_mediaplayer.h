/****************************************************************************
Copyright (C) Cambridge Silicon Radio Limited 2009-2014
Part of ADK 3.5

FILE NAME
    avrcp_mediaplayer.h
    
DESCRIPTION
    
*/

#ifndef  AVRCP_MEDIAPLAYER_H_
#define  AVRCP_MEDIAPLAYER_H_

#include "avrcp_common.h"

/* Preprocessor definitions */
#define AVRCP_PLAYER_ID_SIZE    2

#define avrcpSendAddressedPlayerCfm(avrcp,status) avrcpSendCommonStatusCfm \
                            (avrcp,status,AVRCP_SET_ADDRESSED_PLAYER_CFM)

#endif /*  AVRCP_MEDIAPLAYER_H_*/

