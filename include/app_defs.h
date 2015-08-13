
#ifndef APP_TYPES_H
#define APP_TYPES_H

/******************************************************************************

 Copyright (c) 2015, Focusrite Audio Engineering Ltd.
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.

 * Neither the name of Focusrite Audio Engineering Ltd., nor the names of its
 contributors may be used to endorse or promote products derived from
 this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 *****************************************************************************/

#include "colors.h"

// ____________________________________________________________________________
//
// Don't modify this file!  This declares the binary interface to the library,
// so modifying it will probably break things.
// ____________________________________________________________________________
//
// Types
// ____________________________________________________________________________

typedef signed long  s32;
typedef signed short s16;
typedef signed char  s8;

typedef unsigned long  u32;
typedef unsigned short u16;
typedef unsigned char  u8;


#define bool  _Bool
#define false 0
#define true  1
// ____________________________________________________________________________
//
// App structure
// ____________________________________________________________________________

#define	TYPEPAD				0
#define	TYPESETUP			1

#define	MAXLED				63

// ____________________________________________________________________________
//
// Useful MIDI constants
// ____________________________________________________________________________

#define	NOTEON				0x90
#define	NOTEOFF				0x80
#define	POLYAFTERTOUCH		0xA0
#define	CC					0xB0
#define	CHANNELAFTERTOUCH   0xD0
#define	SONGPOSITIONPOINTER 0xF2
#define	MIDITIMINGCLOCK     0xF8
#define	MIDISTART           0xFA
#define	MIDICONTINUE        0xFB
#define	MIDISTOP            0xFC

// ____________________________________________________________________________
//
// MIDI ports
// ____________________________________________________________________________

// USB MIDI: "Standalone" port
#define	USBSTANDALONE		0

// USB MIDI: "MIDI" port
#define	USBMIDI				1

// MIDI DIN port
#define	DINMIDI				2

// ____________________________________________________________________________
//
// MIDI Jack Socket Switch IDs
// ____________________________________________________________________________

#define	MIDI_IN_CABLE		0
#define	MIDI_OUT_CABLE		1

// ____________________________________________________________________________

#define MODE_SESSION 0
#define MODE_PERFORM 1
#define MODE_SEQ     2
#define MODE_DEVICE  3
#define MODE_USER    4

#define NUM_MODES    5
#define NUM_BUTTONS  100

#define SCALE_MAJOR  0
#define SCALE_MINOR  1

#define BUTTON_UP        91
#define BUTTON_DOWN      92
#define BUTTON_LEFT      93
#define BUTTON_RIGHT     94
#define BUTTON_SESSION   95
#define BUTTON_NOTE      96
#define BUTOTN_DEVICE    97
#define BUTTON_USER      98

#define BUTTON_SHIFT     80
#define BUTTON_CLICK     70
#define BUTTON_UNDO      60
#define BUTTON_DELETE    50
#define BUTTON_QUANTIZE  40
#define BUTTON_DUPLICATE 30
#define BUTTON_DOUBLE    20
#define BUTOTN_RECORD    10

#endif
