#include <Arduino.h>
#include <Adafruit_SPIDevice.h>
#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>

// GPIO pins 21 and 22 are default. 21 goes to SDA 22 goes to SCL
// Board 1
Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver(0x40);
//Board 2
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);
// you can also call it with a different address you want
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);
// you can also call it with a different address and I2C interface
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40, Wire);

// Depending on your servo make, the pulse width min and max may vary, you 
// want these to be as small/large as possible without hitting the hard stop
// for max range. You'll have to tweak them as necessary to match the servos you
// have!
#define SERVOMIN  115 // This is the 'minimum' pulse length count (out of 4096). 
#define SERVOMAX  575 // This is the 'maximum' pulse length count (out of 4096)
#define SERVO_FREQ 60 // Analog servos run at ~50 Hz updates

#define L1_J1 1 
#define L1_J2 2
#define L1_J3 3

#define L2_J1 5
#define L2_J2 6
#define L2_J3 7

#define L3_J1 15
#define L3_J2 14
#define L3_J3 13

#define J1L 63
#define J2L 60

#define J3L 60




/*
The map function converts a given angle and converts it into a pulselength. 
setPWWM doesn't take in an angle, instead it takes in an input based on pulse length.
As such, the function below performs this conversion to make things easiser for us.
*/
int angleToPulse(int ang)
  {
    int pulse = map(ang, 0, 180, SERVOMIN, SERVOMAX);
    return pulse;
  }


/*
Don't know where to put this. But only move the servos between 0 Degrees and 180.
*/

void setup() {
  Serial.begin(9600);
  Serial.println("8 channel Servo test!");

  pwm1.begin();

  pwm1.setOscillatorFrequency(27000000);
  pwm1.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates
  
  pwm1.setPWM(L1_J1, 0, angleToPulse(190));
  pwm1.setPWM(L1_J2, 0, angleToPulse(160));
  pwm1.setPWM(L1_J3, 0, angleToPulse(90));

  pwm1.setPWM(L2_J1, 0, angleToPulse(190));
  pwm1.setPWM(L2_J2, 0, angleToPulse(160));
  pwm1.setPWM(L2_J3, 0, angleToPulse(90));

  pwm1.setPWM(L3_J1, 0, angleToPulse(190));
  pwm1.setPWM(L3_J2, 0, angleToPulse(160));
  pwm1.setPWM(L3_J3, 0, angleToPulse(90));


  pwm2.begin();

  pwm2.setOscillatorFrequency(27000000);
  pwm2.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates

  pwm2.setPWM(L1_J1, 0, angleToPulse(190));
  pwm2.setPWM(L1_J2, 0, angleToPulse(160));
  pwm2.setPWM(L1_J3, 0, angleToPulse(90));
//this one
  pwm2.setPWM(L2_J1, 0, angleToPulse(191));
  pwm2.setPWM(L2_J2, 0, angleToPulse(53));
  pwm2.setPWM(L2_J3, 0, angleToPulse(90));

  pwm2.setPWM(L3_J1, 0, angleToPulse(190));
  pwm2.setPWM(L3_J2, 0, angleToPulse(160));
  pwm2.setPWM(L3_J3, 0, angleToPulse(0));



}

void loop()
{

      delay(1000);

}

