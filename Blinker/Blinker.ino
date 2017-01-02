/*
 Name:		Blinker.ino
 Created:	1/2/2017 4:18:26 AM
 Author:	David
*/

int stateLED;
const int msOn = 2000;
const int msOff = 1000;
int nBlinks;
unsigned long int msOnStart;
unsigned long int msOffStart;
unsigned long int msOnTime;
unsigned long int msOffTime;


void setup() {
	pinMode(13, OUTPUT);
	digitalWrite(13, 0);
	msOffStart = millis();
	stateLED = 0;
	nBlinks = 0;


	Serial.begin(115200);
	while (!Serial);
	Serial.print("On time[ms] = "); Serial.println(msOn);
	Serial.print("Off time[ms] = "); Serial.println(msOff);
}

void loop() {
	if (stateLED == 0) {
		msOffTime = millis() - msOffStart;
		digitalWrite(13, 1);
		msOnStart = millis();
		stateLED = 1;
		delay(msOn);
	}
	else {
		msOnTime = millis() - msOnStart;
		digitalWrite(13, 0);
		msOffStart = millis();
		stateLED = 0;
		delay(msOff);
	}
}
