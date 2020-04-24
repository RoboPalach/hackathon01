#include "SmartLedHelper.h"
#include <stdint.h>

SmartLedHelper::SmartLedHelper(uint8_t pixelCount, uint8_t dataPin, uint8_t brightness)
{
	this->pixelCount = pixelCount;
	this->pixels = Adafruit_NeoPixel(pixelCount, dataPin, NEO_RGB + NEO_KHZ800);

	this->pixels.begin();
	this->pixels.setBrightness(brightness);
	this->off();
	this->setColor(0, 0x110000);
	this->update();
}

Adafruit_NeoPixel SmartLedHelper::getRef()
{
	return this->pixels;
}

uint32_t SmartLedHelper::getColor(uint16_t n)
{
	return this->pixels.getPixelColor(n);
}

void SmartLedHelper::setColor(uint16_t n, int colorCode)
{
	uint8_t r = (colorCode >> 16) & 0x0000FF;
	uint8_t g = (colorCode >> 8) & 0x0000FF;
	uint8_t b = colorCode & 0x0000FF;
	this->setColor(n, r, g, b);
}

void SmartLedHelper::setColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b)
{
	this->pixels.setPixelColor(n, g, r, b);
}

void SmartLedHelper::update()
{
	this->pixels.show();
}
void SmartLedHelper::off()
{

	this->pixels.clear();
	this->setColor(0, 0x110000);
}