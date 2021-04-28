/**
  ******************************************************************************
  * @file    font72.c
  * @author  Sofiane AOUCI
  * @version V1.0.0
  * @date    27-July-2020
  * @brief   This file provides text font48.
  ******************************************************************************
  **/

/* Includes ------------------------------------------------------------------*/
#include "fonts.h"



const uint8_t Font72_Table [] =
{
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	15,	254,	0,	0,	0,
		0,	0,	127,	255,	192,	0,	0,
		0,	1,	255,	255,	240,	0,	0,
		0,	7,	255,	255,	252,	0,	0,
		0,	15,	255,	255,	254,	0,	0,
		0,	31,	255,	255,	255,	0,	0,
		0,	63,	255,	255,	255,	128,	0,
		0,	127,	255,	255,	255,	192,	0,
		0,	127,	252,	7,	255,	192,	0,
		0,	255,	240,	1,	255,	224,	0,
		1,	255,	192,	0,	127,	224,	0,
		1,	255,	128,	0,	63,	240,	0,
		1,	255,	0,	0,	31,	240,	0,
		3,	255,	0,	0,	31,	248,	0,
		3,	254,	0,	0,	15,	248,	0,
		7,	254,	0,	0,	15,	248,	0,
		7,	252,	0,	0,	7,	252,	0,
		7,	252,	0,	0,	7,	252,	0,
		7,	252,	0,	0,	7,	252,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		31,	240,	0,	0,	1,	255,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		15,	248,	0,	0,	3,	254,	0,
		7,	252,	0,	0,	7,	252,	0,
		7,	252,	0,	0,	7,	252,	0,
		7,	252,	0,	0,	7,	252,	0,
		7,	254,	0,	0,	15,	252,	0,
		3,	254,	0,	0,	15,	248,	0,
		3,	255,	0,	0,	31,	248,	0,
		1,	255,	0,	0,	31,	240,	0,
		1,	255,	128,	0,	63,	240,	0,
		1,	255,	192,	0,	127,	240,	0,
		0,	255,	240,	1,	255,	224,	0,
		0,	127,	252,	7,	255,	192,	0,
		0,	127,	255,	255,	255,	192,	0,
		0,	63,	255,	255,	255,	128,	0,
		0,	31,	255,	255,	255,	0,	0,
		0,	15,	255,	255,	254,	0,	0,
		0,	7,	255,	255,	252,	0,	0,
		0,	1,	255,	255,	240,	0,	0,
		0,	0,	127,	255,	192,	0,	0,
		0,	0,	15,	254,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	7,	240,	0,	0,
		0,	0,	0,	15,	240,	0,	0,
		0,	0,	0,	15,	240,	0,	0,
		0,	0,	0,	31,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	127,	240,	0,	0,
		0,	0,	0,	127,	240,	0,	0,
		0,	0,	0,	255,	240,	0,	0,
		0,	0,	1,	255,	240,	0,	0,
		0,	0,	7,	255,	240,	0,	0,
		0,	0,	15,	255,	240,	0,	0,
		0,	0,	31,	255,	240,	0,	0,
		0,	0,	63,	255,	240,	0,	0,
		0,	0,	255,	255,	240,	0,	0,
		0,	3,	255,	255,	240,	0,	0,
		0,	7,	255,	255,	240,	0,	0,
		0,	31,	255,	255,	240,	0,	0,
		0,	63,	255,	191,	240,	0,	0,
		0,	63,	255,	63,	240,	0,	0,
		0,	63,	254,	63,	240,	0,	0,
		0,	63,	248,	63,	240,	0,	0,
		0,	63,	224,	63,	240,	0,	0,
		0,	63,	192,	63,	240,	0,	0,
		0,	63,	0,	63,	240,	0,	0,
		0,	60,	0,	63,	240,	0,	0,
		0,	32,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	63,	240,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	31,	255,	192,	0,	0,
		0,	0,	255,	255,	248,	0,	0,
		0,	7,	255,	255,	254,	0,	0,
		0,	15,	255,	255,	255,	128,	0,
		0,	31,	255,	255,	255,	192,	0,
		0,	127,	255,	255,	255,	224,	0,
		0,	127,	255,	255,	255,	240,	0,
		0,	255,	255,	255,	255,	248,	0,
		1,	255,	255,	15,	255,	248,	0,
		3,	255,	240,	0,	255,	252,	0,
		3,	255,	224,	0,	63,	254,	0,
		7,	255,	128,	0,	31,	254,	0,
		7,	255,	0,	0,	15,	255,	0,
		7,	254,	0,	0,	7,	255,	0,
		15,	254,	0,	0,	7,	255,	0,
		15,	252,	0,	0,	3,	255,	0,
		15,	252,	0,	0,	3,	255,	0,
		15,	252,	0,	0,	3,	255,	128,
		15,	252,	0,	0,	1,	255,	128,
		7,	252,	0,	0,	1,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	0,
		0,	0,	0,	0,	3,	255,	0,
		0,	0,	0,	0,	3,	255,	0,
		0,	0,	0,	0,	7,	255,	0,
		0,	0,	0,	0,	7,	255,	0,
		0,	0,	0,	0,	15,	254,	0,
		0,	0,	0,	0,	15,	254,	0,
		0,	0,	0,	0,	31,	252,	0,
		0,	0,	0,	0,	63,	252,	0,
		0,	0,	0,	0,	127,	248,	0,
		0,	0,	0,	0,	255,	240,	0,
		0,	0,	0,	0,	255,	240,	0,
		0,	0,	0,	3,	255,	224,	0,
		0,	0,	0,	7,	255,	192,	0,
		0,	0,	0,	15,	255,	128,	0,
		0,	0,	0,	31,	255,	0,	0,
		0,	0,	0,	63,	254,	0,	0,
		0,	0,	0,	127,	252,	0,	0,
		0,	0,	0,	255,	248,	0,	0,
		0,	0,	1,	255,	240,	0,	0,
		0,	0,	7,	255,	224,	0,	0,
		0,	0,	15,	255,	192,	0,	0,
		0,	0,	31,	255,	128,	0,	0,
		0,	0,	63,	255,	0,	0,	0,
		0,	0,	255,	254,	0,	0,	0,
		0,	1,	255,	248,	0,	0,	0,
		0,	3,	255,	240,	0,	0,	0,
		0,	7,	255,	224,	0,	0,	0,
		0,	15,	255,	192,	0,	0,	0,
		0,	31,	255,	128,	0,	0,	0,
		0,	63,	254,	0,	0,	0,	0,
		0,	127,	252,	0,	0,	0,	0,
		0,	255,	248,	0,	0,	0,	0,
		0,	255,	240,	0,	0,	0,	0,
		1,	255,	224,	0,	0,	0,	0,
		3,	255,	192,	0,	0,	0,	0,
		3,	255,	128,	0,	0,	0,	0,
		7,	255,	0,	0,	0,	0,	0,
		7,	254,	0,	0,	0,	0,	0,
		15,	255,	255,	255,	255,	255,	128,
		15,	255,	255,	255,	255,	255,	128,
		31,	255,	255,	255,	255,	255,	128,
		31,	255,	255,	255,	255,	255,	128,
		31,	255,	255,	255,	255,	255,	128,
		63,	255,	255,	255,	255,	255,	128,
		63,	255,	255,	255,	255,	255,	128,
		63,	255,	255,	255,	255,	255,	128,
		63,	255,	255,	255,	255,	255,	128,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	31,	255,	0,	0,	0,
		0,	0,	255,	255,	224,	0,	0,
		0,	3,	255,	255,	248,	0,	0,
		0,	15,	255,	255,	254,	0,	0,
		0,	31,	255,	255,	255,	0,	0,
		0,	63,	255,	255,	255,	128,	0,
		0,	127,	255,	255,	255,	192,	0,
		0,	255,	255,	255,	255,	224,	0,
		0,	255,	255,	31,	255,	224,	0,
		1,	255,	248,	1,	255,	240,	0,
		1,	255,	224,	0,	255,	248,	0,
		3,	255,	192,	0,	63,	248,	0,
		3,	255,	128,	0,	63,	248,	0,
		7,	255,	0,	0,	31,	252,	0,
		7,	255,	0,	0,	31,	252,	0,
		7,	254,	0,	0,	15,	252,	0,
		15,	254,	0,	0,	15,	252,	0,
		15,	252,	0,	0,	15,	252,	0,
		3,	252,	0,	0,	15,	252,	0,
		0,	0,	0,	0,	15,	252,	0,
		0,	0,	0,	0,	15,	252,	0,
		0,	0,	0,	0,	31,	248,	0,
		0,	0,	0,	0,	31,	248,	0,
		0,	0,	0,	0,	63,	248,	0,
		0,	0,	0,	0,	127,	240,	0,
		0,	0,	0,	1,	255,	240,	0,
		0,	0,	0,	7,	255,	224,	0,
		0,	0,	0,	63,	255,	192,	0,
		0,	0,	7,	255,	255,	128,	0,
		0,	0,	7,	255,	255,	0,	0,
		0,	0,	7,	255,	252,	0,	0,
		0,	0,	15,	255,	254,	0,	0,
		0,	0,	15,	255,	255,	128,	0,
		0,	0,	15,	255,	255,	224,	0,
		0,	0,	15,	255,	255,	240,	0,
		0,	0,	15,	207,	255,	248,	0,
		0,	0,	0,	0,	255,	252,	0,
		0,	0,	0,	0,	63,	254,	0,
		0,	0,	0,	0,	31,	254,	0,
		0,	0,	0,	0,	15,	255,	0,
		0,	0,	0,	0,	7,	255,	0,
		0,	0,	0,	0,	7,	255,	0,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	1,	255,	128,
		0,	0,	0,	0,	1,	255,	128,
		0,	0,	0,	0,	1,	255,	128,
		0,	0,	0,	0,	1,	255,	128,
		0,	0,	0,	0,	1,	255,	128,
		0,	0,	0,	0,	1,	255,	128,
		7,	248,	0,	0,	1,	255,	128,
		31,	252,	0,	0,	1,	255,	128,
		31,	252,	0,	0,	3,	255,	128,
		15,	252,	0,	0,	3,	255,	128,
		15,	254,	0,	0,	3,	255,	128,
		15,	254,	0,	0,	7,	255,	0,
		15,	255,	0,	0,	15,	255,	0,
		7,	255,	128,	0,	31,	254,	0,
		7,	255,	192,	0,	63,	254,	0,
		3,	255,	224,	0,	127,	252,	0,
		3,	255,	248,	1,	255,	252,	0,
		1,	255,	255,	15,	255,	248,	0,
		0,	255,	255,	255,	255,	240,	0,
		0,	127,	255,	255,	255,	224,	0,
		0,	63,	255,	255,	255,	192,	0,
		0,	31,	255,	255,	255,	128,	0,
		0,	15,	255,	255,	255,	0,	0,
		0,	3,	255,	255,	252,	0,	0,
		0,	0,	255,	255,	240,	0,	0,
		0,	0,	31,	255,	128,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	127,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	1,	255,	192,	0,
		0,	0,	0,	3,	255,	192,	0,
		0,	0,	0,	3,	255,	192,	0,
		0,	0,	0,	7,	255,	192,	0,
		0,	0,	0,	15,	255,	192,	0,
		0,	0,	0,	31,	255,	192,	0,
		0,	0,	0,	31,	255,	192,	0,
		0,	0,	0,	63,	255,	192,	0,
		0,	0,	0,	127,	255,	192,	0,
		0,	0,	0,	255,	255,	192,	0,
		0,	0,	0,	255,	255,	192,	0,
		0,	0,	1,	255,	255,	192,	0,
		0,	0,	3,	255,	255,	192,	0,
		0,	0,	3,	254,	255,	192,	0,
		0,	0,	7,	252,	255,	192,	0,
		0,	0,	15,	252,	255,	192,	0,
		0,	0,	31,	248,	255,	192,	0,
		0,	0,	31,	240,	255,	192,	0,
		0,	0,	63,	240,	255,	192,	0,
		0,	0,	127,	224,	255,	192,	0,
		0,	0,	127,	192,	255,	192,	0,
		0,	0,	255,	128,	255,	192,	0,
		0,	1,	255,	128,	255,	192,	0,
		0,	3,	255,	0,	255,	192,	0,
		0,	3,	254,	0,	255,	192,	0,
		0,	7,	254,	0,	255,	192,	0,
		0,	15,	252,	0,	255,	192,	0,
		0,	31,	248,	0,	255,	192,	0,
		0,	31,	240,	0,	255,	192,	0,
		0,	63,	240,	0,	255,	192,	0,
		0,	127,	224,	0,	255,	192,	0,
		0,	127,	192,	0,	255,	192,	0,
		0,	255,	192,	0,	255,	192,	0,
		1,	255,	128,	0,	255,	192,	0,
		3,	255,	0,	0,	255,	192,	0,
		3,	254,	0,	0,	255,	192,	0,
		7,	254,	0,	0,	255,	192,	0,
		15,	252,	0,	0,	255,	192,	0,
		31,	248,	0,	0,	255,	192,	0,
		31,	248,	0,	0,	255,	192,	0,
		63,	255,	255,	255,	255,	255,	224,
		63,	255,	255,	255,	255,	255,	224,
		63,	255,	255,	255,	255,	255,	224,
		63,	255,	255,	255,	255,	255,	224,
		63,	255,	255,	255,	255,	255,	224,
		63,	255,	255,	255,	255,	255,	224,
		63,	255,	255,	255,	255,	255,	224,
		63,	255,	255,	255,	255,	255,	224,
		63,	255,	255,	255,	255,	255,	224,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	255,	192,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	63,	255,	255,	255,	252,	0,
		0,	63,	255,	255,	255,	252,	0,
		0,	63,	255,	255,	255,	252,	0,
		0,	63,	255,	255,	255,	252,	0,
		0,	127,	255,	255,	255,	252,	0,
		0,	127,	255,	255,	255,	252,	0,
		0,	127,	255,	255,	255,	252,	0,
		0,	127,	255,	255,	255,	252,	0,
		0,	127,	255,	255,	255,	252,	0,
		0,	127,	192,	0,	0,	0,	0,
		0,	255,	192,	0,	0,	0,	0,
		0,	255,	192,	0,	0,	0,	0,
		0,	255,	192,	0,	0,	0,	0,
		0,	255,	128,	0,	0,	0,	0,
		0,	255,	128,	0,	0,	0,	0,
		1,	255,	128,	0,	0,	0,	0,
		1,	255,	128,	0,	0,	0,	0,
		1,	255,	128,	0,	0,	0,	0,
		1,	255,	0,	0,	0,	0,	0,
		1,	255,	0,	0,	0,	0,	0,
		3,	255,	0,	0,	0,	0,	0,
		3,	255,	0,	0,	0,	0,	0,
		3,	255,	7,	255,	128,	0,	0,
		3,	254,	63,	255,	240,	0,	0,
		3,	254,	255,	255,	252,	0,	0,
		7,	255,	255,	255,	255,	0,	0,
		7,	255,	255,	255,	255,	128,	0,
		7,	255,	255,	255,	255,	192,	0,
		7,	255,	255,	255,	255,	224,	0,
		7,	255,	255,	255,	255,	240,	0,
		7,	255,	254,	31,	255,	248,	0,
		15,	255,	224,	1,	255,	248,	0,
		15,	255,	128,	0,	255,	252,	0,
		15,	255,	0,	0,	63,	254,	0,
		15,	252,	0,	0,	31,	254,	0,
		7,	248,	0,	0,	15,	254,	0,
		0,	0,	0,	0,	15,	255,	0,
		0,	0,	0,	0,	7,	255,	0,
		0,	0,	0,	0,	7,	255,	0,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		0,	0,	0,	0,	3,	255,	128,
		15,	248,	0,	0,	3,	255,	0,
		63,	248,	0,	0,	3,	255,	0,
		63,	248,	0,	0,	7,	255,	0,
		31,	248,	0,	0,	7,	255,	0,
		31,	252,	0,	0,	7,	254,	0,
		31,	252,	0,	0,	15,	254,	0,
		31,	254,	0,	0,	31,	254,	0,
		15,	255,	0,	0,	63,	252,	0,
		15,	255,	128,	0,	127,	252,	0,
		7,	255,	192,	0,	255,	248,	0,
		7,	255,	240,	3,	255,	240,	0,
		3,	255,	254,	31,	255,	240,	0,
		1,	255,	255,	255,	255,	224,	0,
		0,	255,	255,	255,	255,	192,	0,
		0,	255,	255,	255,	255,	128,	0,
		0,	63,	255,	255,	255,	0,	0,
		0,	31,	255,	255,	254,	0,	0,
		0,	15,	255,	255,	248,	0,	0,
		0,	1,	255,	255,	224,	0,	0,
		0,	0,	63,	255,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	7,	255,	224,	0,	0,
		0,	0,	63,	255,	248,	0,	0,
		0,	0,	255,	255,	254,	0,	0,
		0,	1,	255,	255,	255,	128,	0,
		0,	7,	255,	255,	255,	192,	0,
		0,	15,	255,	255,	255,	224,	0,
		0,	31,	255,	255,	255,	240,	0,
		0,	63,	255,	255,	255,	248,	0,
		0,	63,	255,	199,	255,	248,	0,
		0,	127,	254,	0,	255,	252,	0,
		0,	255,	248,	0,	63,	252,	0,
		0,	255,	240,	0,	31,	254,	0,
		1,	255,	224,	0,	15,	254,	0,
		1,	255,	192,	0,	15,	254,	0,
		3,	255,	128,	0,	7,	255,	0,
		3,	255,	0,	0,	7,	255,	0,
		3,	255,	0,	0,	3,	255,	0,
		7,	254,	0,	0,	3,	255,	0,
		7,	254,	0,	0,	3,	254,	0,
		7,	254,	0,	0,	0,	0,	0,
		15,	252,	0,	0,	0,	0,	0,
		15,	252,	0,	0,	0,	0,	0,
		15,	252,	0,	0,	0,	0,	0,
		15,	252,	0,	0,	0,	0,	0,
		15,	248,	1,	255,	224,	0,	0,
		15,	248,	15,	255,	248,	0,	0,
		31,	248,	63,	255,	254,	0,	0,
		31,	248,	255,	255,	255,	128,	0,
		31,	249,	255,	255,	255,	192,	0,
		31,	251,	255,	255,	255,	224,	0,
		31,	255,	255,	255,	255,	240,	0,
		31,	255,	255,	255,	255,	248,	0,
		31,	255,	255,	135,	255,	248,	0,
		31,	255,	252,	0,	255,	252,	0,
		31,	255,	240,	0,	63,	254,	0,
		31,	255,	224,	0,	31,	254,	0,
		31,	255,	128,	0,	15,	255,	0,
		31,	255,	128,	0,	7,	255,	0,
		31,	255,	0,	0,	7,	255,	0,
		31,	254,	0,	0,	3,	255,	128,
		31,	254,	0,	0,	3,	255,	128,
		31,	254,	0,	0,	1,	255,	128,
		31,	252,	0,	0,	1,	255,	128,
		31,	252,	0,	0,	1,	255,	128,
		31,	252,	0,	0,	1,	255,	128,
		31,	252,	0,	0,	1,	255,	128,
		31,	252,	0,	0,	1,	255,	128,
		15,	252,	0,	0,	1,	255,	128,
		15,	252,	0,	0,	1,	255,	128,
		15,	252,	0,	0,	1,	255,	128,
		15,	254,	0,	0,	1,	255,	128,
		15,	254,	0,	0,	1,	255,	128,
		7,	254,	0,	0,	1,	255,	128,
		7,	255,	0,	0,	3,	255,	128,
		7,	255,	0,	0,	3,	255,	0,
		3,	255,	128,	0,	7,	255,	0,
		3,	255,	128,	0,	7,	255,	0,
		3,	255,	192,	0,	15,	254,	0,
		1,	255,	224,	0,	31,	254,	0,
		1,	255,	240,	0,	63,	252,	0,
		0,	255,	252,	0,	255,	252,	0,
		0,	127,	255,	199,	255,	248,	0,
		0,	63,	255,	255,	255,	240,	0,
		0,	31,	255,	255,	255,	224,	0,
		0,	15,	255,	255,	255,	192,	0,
		0,	7,	255,	255,	255,	128,	0,
		0,	3,	255,	255,	255,	0,	0,
		0,	1,	255,	255,	254,	0,	0,
		0,	0,	63,	255,	248,	0,	0,
		0,	0,	15,	255,	192,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		31,	255,	255,	255,	255,	255,	0,
		31,	255,	255,	255,	255,	255,	0,
		31,	255,	255,	255,	255,	255,	0,
		31,	255,	255,	255,	255,	255,	0,
		31,	255,	255,	255,	255,	255,	0,
		31,	255,	255,	255,	255,	255,	0,
		31,	255,	255,	255,	255,	255,	0,
		31,	255,	255,	255,	255,	255,	0,
		31,	255,	255,	255,	255,	254,	0,
		0,	0,	0,	0,	15,	252,	0,
		0,	0,	0,	0,	31,	252,	0,
		0,	0,	0,	0,	63,	248,	0,
		0,	0,	0,	0,	127,	240,	0,
		0,	0,	0,	0,	255,	224,	0,
		0,	0,	0,	0,	255,	224,	0,
		0,	0,	0,	1,	255,	192,	0,
		0,	0,	0,	3,	255,	128,	0,
		0,	0,	0,	3,	255,	128,	0,
		0,	0,	0,	7,	255,	0,	0,
		0,	0,	0,	15,	254,	0,	0,
		0,	0,	0,	15,	254,	0,	0,
		0,	0,	0,	31,	252,	0,	0,
		0,	0,	0,	31,	248,	0,	0,
		0,	0,	0,	63,	248,	0,	0,
		0,	0,	0,	127,	240,	0,	0,
		0,	0,	0,	127,	240,	0,	0,
		0,	0,	0,	255,	224,	0,	0,
		0,	0,	0,	255,	224,	0,	0,
		0,	0,	1,	255,	192,	0,	0,
		0,	0,	1,	255,	192,	0,	0,
		0,	0,	3,	255,	128,	0,	0,
		0,	0,	3,	255,	128,	0,	0,
		0,	0,	7,	255,	0,	0,	0,
		0,	0,	7,	255,	0,	0,	0,
		0,	0,	15,	254,	0,	0,	0,
		0,	0,	15,	254,	0,	0,	0,
		0,	0,	15,	252,	0,	0,	0,
		0,	0,	31,	252,	0,	0,	0,
		0,	0,	31,	248,	0,	0,	0,
		0,	0,	63,	248,	0,	0,	0,
		0,	0,	63,	248,	0,	0,	0,
		0,	0,	63,	240,	0,	0,	0,
		0,	0,	127,	240,	0,	0,	0,
		0,	0,	127,	224,	0,	0,	0,
		0,	0,	127,	224,	0,	0,	0,
		0,	0,	255,	224,	0,	0,	0,
		0,	0,	255,	192,	0,	0,	0,
		0,	0,	255,	192,	0,	0,	0,
		0,	1,	255,	192,	0,	0,	0,
		0,	1,	255,	192,	0,	0,	0,
		0,	1,	255,	128,	0,	0,	0,
		0,	1,	255,	128,	0,	0,	0,
		0,	3,	255,	128,	0,	0,	0,
		0,	3,	255,	0,	0,	0,	0,
		0,	3,	255,	0,	0,	0,	0,
		0,	3,	255,	0,	0,	0,	0,
		0,	3,	255,	0,	0,	0,	0,
		0,	7,	255,	0,	0,	0,	0,
		0,	7,	254,	0,	0,	0,	0,
		0,	7,	254,	0,	0,	0,	0,
		0,	7,	254,	0,	0,	0,	0,
		0,	7,	254,	0,	0,	0,	0,
		0,	7,	254,	0,	0,	0,	0,
		0,	7,	254,	0,	0,	0,	0,
		0,	15,	254,	0,	0,	0,	0,
		0,	15,	254,	0,	0,	0,	0,
		0,	15,	252,	0,	0,	0,	0,
		0,	15,	252,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	63,	255,	0,	0,	0,
		0,	1,	255,	255,	224,	0,	0,
		0,	7,	255,	255,	248,	0,	0,
		0,	15,	255,	255,	254,	0,	0,
		0,	31,	255,	255,	255,	0,	0,
		0,	63,	255,	255,	255,	128,	0,
		0,	127,	255,	255,	255,	192,	0,
		0,	255,	255,	255,	255,	224,	0,
		1,	255,	255,	31,	255,	224,	0,
		1,	255,	240,	3,	255,	240,	0,
		3,	255,	224,	0,	255,	240,	0,
		3,	255,	128,	0,	127,	248,	0,
		7,	255,	0,	0,	63,	248,	0,
		7,	255,	0,	0,	31,	248,	0,
		7,	254,	0,	0,	31,	252,	0,
		7,	254,	0,	0,	31,	252,	0,
		7,	254,	0,	0,	15,	252,	0,
		7,	254,	0,	0,	15,	252,	0,
		7,	254,	0,	0,	15,	252,	0,
		7,	254,	0,	0,	15,	252,	0,
		7,	254,	0,	0,	31,	248,	0,
		7,	255,	0,	0,	31,	248,	0,
		3,	255,	0,	0,	63,	248,	0,
		3,	255,	128,	0,	127,	240,	0,
		1,	255,	192,	0,	255,	240,	0,
		1,	255,	240,	1,	255,	224,	0,
		0,	255,	255,	31,	255,	192,	0,
		0,	127,	255,	255,	255,	192,	0,
		0,	63,	255,	255,	255,	0,	0,
		0,	15,	255,	255,	254,	0,	0,
		0,	3,	255,	255,	248,	0,	0,
		0,	15,	255,	255,	252,	0,	0,
		0,	63,	255,	255,	255,	0,	0,
		0,	127,	255,	255,	255,	128,	0,
		0,	255,	255,	255,	255,	224,	0,
		1,	255,	254,	31,	255,	240,	0,
		3,	255,	240,	1,	255,	240,	0,
		7,	255,	192,	0,	127,	248,	0,
		15,	255,	0,	0,	63,	252,	0,
		15,	254,	0,	0,	31,	252,	0,
		15,	254,	0,	0,	15,	254,	0,
		31,	252,	0,	0,	7,	254,	0,
		31,	248,	0,	0,	7,	255,	0,
		31,	248,	0,	0,	3,	255,	0,
		63,	248,	0,	0,	3,	255,	0,
		63,	240,	0,	0,	3,	255,	0,
		63,	240,	0,	0,	3,	255,	0,
		63,	240,	0,	0,	3,	255,	128,
		63,	240,	0,	0,	3,	255,	128,
		63,	240,	0,	0,	3,	255,	128,
		63,	240,	0,	0,	3,	255,	0,
		63,	240,	0,	0,	3,	255,	0,
		63,	248,	0,	0,	3,	255,	0,
		31,	248,	0,	0,	3,	255,	0,
		31,	252,	0,	0,	7,	255,	0,
		31,	252,	0,	0,	7,	255,	0,
		31,	254,	0,	0,	15,	254,	0,
		15,	254,	0,	0,	31,	254,	0,
		15,	255,	128,	0,	63,	252,	0,
		7,	255,	192,	0,	127,	252,	0,
		7,	255,	240,	1,	255,	248,	0,
		3,	255,	255,	31,	255,	240,	0,
		1,	255,	255,	255,	255,	240,	0,
		0,	255,	255,	255,	255,	224,	0,
		0,	127,	255,	255,	255,	192,	0,
		0,	63,	255,	255,	255,	128,	0,
		0,	31,	255,	255,	254,	0,	0,
		0,	7,	255,	255,	252,	0,	0,
		0,	1,	255,	255,	240,	0,	0,
		0,	0,	63,	255,	128,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
		0,	0,	31,	255,	0,	0,	0,
		0,	0,	255,	255,	224,	0,	0,
		0,	3,	255,	255,	248,	0,	0,
		0,	15,	255,	255,	252,	0,	0,
		0,	31,	255,	255,	255,	0,	0,
		0,	63,	255,	255,	255,	128,	0,
		0,	127,	255,	255,	255,	192,	0,
		0,	255,	255,	255,	255,	224,	0,
		0,	255,	255,	143,	255,	224,	0,
		1,	255,	248,	1,	255,	240,	0,
		3,	255,	240,	0,	127,	248,	0,
		3,	255,	192,	0,	63,	248,	0,
		7,	255,	128,	0,	31,	252,	0,
		7,	255,	0,	0,	15,	252,	0,
		15,	255,	0,	0,	7,	254,	0,
		15,	254,	0,	0,	7,	254,	0,
		15,	254,	0,	0,	7,	255,	0,
		15,	252,	0,	0,	3,	255,	0,
		15,	252,	0,	0,	3,	255,	0,
		31,	252,	0,	0,	3,	255,	0,
		31,	252,	0,	0,	3,	255,	0,
		31,	248,	0,	0,	3,	255,	128,
		31,	248,	0,	0,	1,	255,	128,
		31,	248,	0,	0,	1,	255,	128,
		31,	248,	0,	0,	1,	255,	128,
		31,	248,	0,	0,	3,	255,	128,
		31,	248,	0,	0,	3,	255,	128,
		31,	252,	0,	0,	3,	255,	128,
		15,	252,	0,	0,	3,	255,	128,
		15,	252,	0,	0,	3,	255,	128,
		15,	254,	0,	0,	7,	255,	128,
		15,	254,	0,	0,	7,	255,	128,
		7,	255,	0,	0,	15,	255,	128,
		7,	255,	128,	0,	31,	255,	128,
		7,	255,	192,	0,	63,	255,	128,
		3,	255,	224,	0,	127,	255,	128,
		1,	255,	248,	1,	255,	255,	128,
		1,	255,	255,	15,	255,	255,	128,
		0,	255,	255,	255,	255,	255,	128,
		0,	127,	255,	255,	255,	255,	128,
		0,	63,	255,	255,	253,	255,	128,
		0,	31,	255,	255,	249,	255,	128,
		0,	15,	255,	255,	241,	255,	128,
		0,	7,	255,	255,	193,	255,	128,
		0,	1,	255,	255,	129,	255,	128,
		0,	0,	63,	252,	1,	255,	128,
		0,	0,	0,	0,	1,	255,	0,
		0,	0,	0,	0,	3,	255,	0,
		0,	0,	0,	0,	3,	255,	0,
		0,	0,	0,	0,	3,	255,	0,
		0,	0,	0,	0,	3,	255,	0,
		3,	252,	0,	0,	7,	254,	0,
		15,	252,	0,	0,	7,	254,	0,
		7,	254,	0,	0,	15,	254,	0,
		7,	254,	0,	0,	15,	252,	0,
		7,	254,	0,	0,	31,	252,	0,
		7,	255,	0,	0,	31,	252,	0,
		3,	255,	0,	0,	63,	248,	0,
		3,	255,	128,	0,	127,	248,	0,
		3,	255,	192,	1,	255,	240,	0,
		1,	255,	240,	3,	255,	224,	0,
		1,	255,	254,	63,	255,	224,	0,
		0,	255,	255,	255,	255,	192,	0,
		0,	127,	255,	255,	255,	128,	0,
		0,	63,	255,	255,	255,	0,	0,
		0,	31,	255,	255,	254,	0,	0,
		0,	15,	255,	255,	252,	0,	0,
		0,	7,	255,	255,	240,	0,	0,
		0,	1,	255,	255,	192,	0,	0,
		0,	0,	63,	254,	0,	0,	0,
		0,	0,	0,	0,	0,	0,	0,
};

sFONT Font72 = {
  Font72_Table,
  53, /* Width */
  72, /* Height */
};

/************************ (C) COPYRIGHT TIM UPS INSA *****END OF FILE****/