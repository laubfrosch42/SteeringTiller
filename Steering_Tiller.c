#include <Joystick.h> //get the library here: https://github.com/MHeironimus/ArduinoJoystickLibrary

#define button_input 7
#define LeftLED 5
#define RightLED 6
#define steering_input A2

int button_before = 0;
int button_now = 0;
int steering_before = 0;
int steering_now = 0;

Joystick_ Joystick(0x03, JOYSTICK_TYPE_JOYSTICK, 1, 0, false, false, false, false, false, false, false, false, false, false, true);

void setup()
{
	pinMode(button_input, INPUT_PULLUP);
	pinMode(LeftLED, OUTPUT);
	pinMode(RightLED, OUTPUT);
	Joystick.begin();
}

void loop()
{
	button_now = !digitalRead(button_input);
	if (button_now != button_before)
	{
		Joystick.setButton(0, button_now);
		button_before = button_now;
	}

	steering_now = analogRead(steering_input);
	if (steering_now != steering_before)
	{
		Joystick.setSteering(steering_now);
		steering_before = steering_now;
	}

	if (steering_now < 506) digitalWrite(LeftLED, HIGH);
	else digitalWrite(LeftLED, LOW);

	if (steering_now > 518) digitalWrite(RightLED, HIGH);
	else digitalWrite(RightLED, LOW);

	delay(20); //for debouncing
}