// Note: servos need a PWM (pulse-width modulation) capable pin

#include <Arduino.h>
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(3);
}

void loop() {
  for (int a = 0; a <= 180; a += 1) {
  myServo.write(constrain(a, 0, 180));
  delay(50);
  }
}
