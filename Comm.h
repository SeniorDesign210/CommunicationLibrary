/*
  Test.h - Test library for Wiring - description
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// ensure this library description is only included once
#ifndef Comm_h
#define Comm_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#include "pins_arduino.h"
#endif

#include "SoftwareSerial.h"

// library interface description
class Comm
{
  // user-accessible "public" interface
public:
  Comm(int, int);
  void sendIMU(float, float, float,
               float, float, float,
               float, float, float);
  void sendRR(float);
  void sendHR(float);
  void sendERR(int);

  // library-accessible "private" interface
private:
  SoftwareSerial XBee;
  void doSomethingSecret(void);
};

#endif
