#include <Arduino.h>
#include <Wire.h>
#include "FooLib.h"

FooClass FooObject;

int ledPin = 13;

void setup() {

	Serial.begin(115200);
	delay(1000);
    pinMode(ledPin, OUTPUT);
}

void loop() {

	Serial.println("Hello world");
	FooObject.firstFooMethod();
    digitalWrite(ledPin, HIGH);
	delay(1000);
	FooObject.secondFooMethod();
    digitalWrite(ledPin, LOW);
	delay(1000);

}

