/*
 Name:		Blinker.ino
 Created:	1/2/2017 4:18:26 AM
 Author:	David
*/

int stateLED;
const int msOn = 1000;
const int msOff = 500;

void setup() {
	pinMode(13, OUTPUT);
	digitalWrite(13, 0);
	stateLED = 0;
}

void loop() {
	if (stateLED == 0) {
		digitalWrite(13, 1);
		stateLED = 1;
		delay(msOn);
	}
	else {
		digitalWrite(13, 0);
		stateLED = 0;
		delay(msOff);
	}
}
