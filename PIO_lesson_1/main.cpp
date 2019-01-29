/*	This is the a modification the Ardunio "Blink" code
	We're using this a a hello world and to test our IDE setup and nodeMCU board
	This blinks the LED on GPIO 6 defined as "LED_BUILTIN"
*/

#include "Arduino.h"

unsigned long pMills = 0;
unsigned long cMills = 0;
unsigned long cTime = 50;
uint8_t LEDstate = 1;

// Toggle state of onboard led
uint8_t TogLED(uint8_t state)
{
	uint8_t rState;
	if (state > 0)
	{
		digitalWrite(LED_BUILTIN, HIGH); 
		rState = 0;
	}
	else
	{
		digitalWrite(LED_BUILTIN, LOW);// Turn the LED on (Note that LOW is the voltage level
										 // but actually the LED is on; this is because 
										 // it is active low on the ESP-01)
		rState = 1;
	}
	return rState;
}

void setup() 
{
	pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() 
{
	cMills = millis();
	if(cMills - pMills > cTime)
	{
		pMills = cMills;
		LEDstate = TogLED(LEDstate);
	}
}