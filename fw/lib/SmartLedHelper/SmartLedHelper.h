#ifndef SmartLedHelper_h
#define SmartLedHelper_h
#include <stdint.h>

#include <Adafruit_NeoPixel.h>

class SmartLedHelper
{
private:
	uint8_t pixelCount;
	Adafruit_NeoPixel pixels;

public:
	SmartLedHelper(uint8_t pixelNumber, uint8_t dataPin, uint8_t brightness = 100);
	uint32_t getColor(uint16_t n);
	Adafruit_NeoPixel getRef();
	void setColor(uint16_t n, int colorCode);
	void setColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b);
	void update();
	void off();
};
#endif