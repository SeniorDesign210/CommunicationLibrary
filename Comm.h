/*
  Test.h - Test library for Wiring - description
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// ensure this library description is only included once
#ifndef Comm_h
#define Comm_h

// include types & constants of Wiring core API
#include "WConstants.h"
#include "SoftwareSerial.h"

// library interface description
class Comm
{
  // user-accessible "public" interface
  public:
    Comm(void);
    void sendIMU(float, float, float,
                 float, float, float,
                 float, float, float);

  // library-accessible "private" interface
  private:
    SoftwareSerial XBee;
    void doSomethingSecret(void);
};

#endif

