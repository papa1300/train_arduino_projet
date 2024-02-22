
/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-servo-motor-controlled-by-potentiometer
 */

#include <Servo.h>

Servo myServo;  // create servo object to control a servo

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  // reads the value of the potentiometer (value between 0 and 1023)
  int analogValue = analogRead(A0);

  // scales it to use it with the servo (value between 0 and 180)
  int angle = map(analogValue, 0, 1023, 0, 180);

  // sets the servo position according to the scaled value
  myServo.write(93); 

  // print out the value
  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(", Angle: ");
  Serial.println(angle);
  delay(100);
}
