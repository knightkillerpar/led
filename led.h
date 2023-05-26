#ifndef LED_PAR_H
#define LED_PAR_H

#include <Arduino.h>

class Led
{
    private:
        int m_led_pin;
    public:
        Led(int led_pin);
        void init();
        void state(String led_state);
        void blink(unsigned int delay_time);
        void Dance_time(unsigned int delay_puse);
};

#endif