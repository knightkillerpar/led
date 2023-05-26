#include "led.h"

#define LED_PIN 6

Led led(LED_PIN);

void setup()
{
    led.init();
}

void loop()
{
    led.blink(800);
    led.Dance_time(600);
}