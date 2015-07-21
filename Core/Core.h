/*
  Core.h - Main include file for the AxisComm SDK
  Copyright (c) 2013-2015 AxisComm Team.  All right reserved.
*/

#ifndef CORE_h
#define CORE_h

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#include <avr/pgmspace.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#include "HardwareSerial.h"

// Primary Oscillator frequency
// Change value if use another Oscillator's Frequency
#define F_CPU 16000000L	  

//********************************** Macros ****************************************//


//********************************* Enumerated Types *******************************//
enum enumBoolean{bFalse,bTrue};
enum enumPinMode{mInput,mOutput};
enum enumPinOut{low,high};

//********************************* Type Definitions *******************************//
typedef char * string;
typedef char ** stringArray;
typedef bool boolean;



#endif
