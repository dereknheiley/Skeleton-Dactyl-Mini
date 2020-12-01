#pragma once
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#define LAYOUT( \
	k00, k01, k02, k03, k04,			k44, k43, k42, k41, k40, \
	k10, k11, k12, k13, k14,			k54, k53, k52, k51, k50, \
	k20, k21, k22, k23, k24,			k64, k63, k62, k61, k60, \
	          k32, k33, k34,			k74, k73, k72 \
)\
{\
	{   k00,   k01, k02, k03, k04 }, \
	{   k10,   k11, k12, k13, k14 }, \
	{   k20,   k21, k22, k23, k24 }, \
	{ KC_NO, KC_NO, k32, k33, k34 }, \
	{   k40,   k41, k42, k43, k44 }, \
	{   k50,   k51, k52, k53, k54}, \
	{   k60,   k61, k62, k63, k64}, \
	{ KC_NO, KC_NO, k72, k73, k74}, \
}
