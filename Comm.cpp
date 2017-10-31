/*
  Comms.h - Communications library for XBee - implementation
  Copyright (c) 2017 Riley Shaw.  All right reserved.
*/

// include core wiring library
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include "pins_arduino.h"
#endif

// include this library's description file
#include "Comm.h"

//include other libraries here
// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

Comm::Comm(int rec, int trans) : XBee(2,3)
{
  // initialize this instance's variables
  pinMode(13, OUTPUT);

  XBee.begin(115200);
}

// Public Methods //////////////////////////////////////////////////////////////
// Functions available in sketches, this library, and other libraries

void Comm::sendIMU(float gx, float gy, float gz,
                   float ax, float ay, float az,
                   float mx, float my, float mz)
{
  //format and send a packet with the IMU data in it,
  //use 'I' as the first byte. (0x49 or 73)
  byte payload[37];
  payload[0] = byte('I');
  payload[1] = gx;
  payload[5] = gy;
  payload[9] = gz;

  payload[13]= ax;
  payload[17]= ay;
  payload[21]= az;

  payload[25]= mx;
  payload[29]= my;
  payload[33]= mz;

  XBee.write(payload,37);
  // it can also call private functions of this library
}
void Comm::sendRR(float r)
{
  //format and send a packet with the RR data in it,
  //use 'R' as the first byte. (0x52 or 82)

  // it can also call private functions of this library
  doSomethingSecret();
}
void Comm::sendHR(float r)
{
  //format and send a packet with the HR data in it,
  //use 'H' as the first byte. (0x48 or 72)
  



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

