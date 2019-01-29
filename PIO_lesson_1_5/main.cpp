#include "Arduino.h"

/* Simple serial comm example for ESP8266
 * Will just read input from serial & read out 1st
 * Char 
 */
char Tchar;
String testStr;

uint8_t LedState;

// Read String input handling: thanks Rick
// "String" is now returned as a ptr to char assay
char* readCharAInput(void)
{
	char Ch = 'a';
	char buffer[50];
	int i = 0;
	while ((Ch != '\n') && (i < 50))
	{
		while ((Serial.available() > 0))
		{
			Ch = Serial.read();
			if ((Ch != '\n') && (Ch != '\r')) //need to trap both <CR> & <LF> !
			{
				buffer[i] = Ch;
				i++;
			}
			Serial.print(Ch);
		}
	}
	char* somearray = new char[i + 1];
	for (int j = 0; j < i; j++)
		somearray[j] = buffer[j];
	somearray[i] = '\0'; // null termination
	return somearray;
}

// Std Ardunio "setup"
void setup()
{
	Serial.begin(115200);
	Serial.println("");
	Serial.println("serial open");
}

// Main loop
void loop()
{
	Serial.println("enter a string");
	testStr = readCharAInput();
	Tchar = testStr.charAt(0);
	Serial.print("first char is: ");
	Serial.println(Tchar);
	Tchar = testStr.charAt((testStr.length()-1));
	Serial.print("last char is: ");
	Serial.println(Tchar);
}