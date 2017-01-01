#ifndef _MotorController_H_
#define _MotorController_H_

#if ARDUINO < 100
	#include "WProgram.h"
#else
	#include "Arduino.h"
#endif

struct Wheel
{
  byte pin1;
  byte pin2;
  byte speedPin; // must be PWN pin

  byte pin1Value;
  byte pin2Value;
  byte speedValue;
};

/* one wheel functionality */
void registerWheel(Wheel *a);
void executeWheel(Wheel *a);
void wheelGoUp(Wheel *w);
void wheelGoDown(Wheel *w);
void stopWheel(Wheel *w);
void reverseWheel(Wheel *a);
void setSpeedByPercent(Wheel *w, byte speed);
void setSpeedByPWN(Wheel *w, byte speed);

#endif
