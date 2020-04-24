#include <Arduino.h>
#include <pinout.h>
#include <SmartLedHelper.h>

SmartLedHelper smartLed(SMARTLED_NUMBER, SMARTLED_PIN);

void setup()
{
    Serial.begin(115200);
}

void loop()
{
}
