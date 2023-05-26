#include "led.h"

Led::Led(int led_pin)
{
    m_led_pin = led_pin;
}

void Led::init()
{
    pinMode(m_led_pin, OUTPUT);
}

void Led::state(String led_state)
{
    if(led_state == "on")
    {
        digitalWrite(m_led_pin, HIGH);
    }
    else if(led_state == "off")
    {
        digitalWrite(m_led_pin, LOW);
    }
}

void Led::blink(unsigned int delay_time)
{
    state("on");
    delay(delay_time);
    state("off");
    delay(delay_time);
}

void Led::Dance_time(unsigned int delay_puse)
{
    state("on");
    delay(delay_puse*2);
    state("on");
    delay(delay_puse*3);
    state("off");
    delay(delay_puse*2);
    state("on");
    delay(delay_puse);
}