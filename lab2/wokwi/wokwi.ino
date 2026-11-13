#include <Servo.h>

Servo myServo;

void setup()
{
	// put your setup code here, to run once:
	myServo.attach(3);
}

void loop()
{
	// put your main code here, to run repeatedly:
	for (int a = 0; a <= 180; a += 1)
	{
		// myServo.write(constrain(a, 0, 180));
		myServo.write(a);
		delay(50);
	}
}