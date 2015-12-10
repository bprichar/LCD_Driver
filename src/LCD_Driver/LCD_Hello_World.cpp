#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "I2CIO.h"
#include "LCD.h"

LiquidCrystal_I2C lcd(0x20, 4, 5, 6, 0, 1, 2, 3, 7, POSITIVE);
int counter=0;

void setup ()
{
    lcd.begin(16,2);
    lcd.backlight();
    for (int i=1; i <= 3; i++)
    {
        lcd.noBacklight();
        delay(500);
        lcd.backlight();
        delay(500);
    }
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Hello World!");
}

void loop()
{
    counter++;
    lcd.setCursor(0, 1);
    lcd.print(counter);
}
