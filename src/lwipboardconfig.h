/********************************** (C) COPYRIGHT *******************************
* File Name          : lwipconfig.h
* Author             : WCH
* Version            : V1.0.0
* Date               : 2021/06/06
* Description        : This file contains the lwip configuration
*******************************************************************************/
#pragma once

/* MII/MDI interface select */
#define PHY_ADDRESS 0x01

#define USE10BASE_T
#ifndef USE10BASE_T
//#define USE_GIGA_MAC
#ifndef USE_GIGA_MAC
#define USE_FAST_MAC
//#define USE_RMII
#endif
#endif

