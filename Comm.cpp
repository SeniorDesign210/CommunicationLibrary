/*
  Comms.h - Communications library for XBee - implementation
  Copyright (c) 2017 Riley Shaw.  All right reserved.
*/

// include core wiring library
#include "WProgram.h"

// include this library's description file
#include "Comm.h"

//include other libraries here
#include "SoftwareSerial.h"
// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

Comm::Comm(void)
{
  // initialize this instance's variables

  SoftwareSerial XBee(2,3);
  XBee.begin(115200);
}

// Public Methods //////////////////////////////////////////////////////////////
// Functions available in sketches, this library, and other libraries

void Comm::sendIMU(float gx, float gy, float gz,
                   float ax, float ay, float az,
                   float mx, float my, float mz)
{
  //format and send a packet with the IMU data in it,
  //use 0x0 as the first byte.


  // it can also call private functions of this library
  doSomethingSecret();
}

// Private Methods /////////////////////////////////////////////////////////////
// Functions only available to other functions in this library

void Comm::doSomethingSecret(void)
{
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}

