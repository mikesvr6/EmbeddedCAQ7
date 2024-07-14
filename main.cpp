// Embedded Systems CA. Question 7
// toggle the LEDs with the intervals specified below. LED1 - every 2 seconds ,LED2 - every 5 seconds 
//I tried to incorporate code that we have used previously and experimented with some new to me pieces resulting in the finished program below. Using BusOut to produce two states and Blink these alternatively
#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Blinking rate in milliseconds
#define BLINKING_RATE_A     5000ms
#define BLINKING_RATE_B     2000ms

BusOut leds(LED2,LED1);
//// 1 2 hex
// 0 0 - 0x0 
// 0 1 - 0x1
// 1 0 - 0x2
// 1 1 - 0x3

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        leds =0x1; // as per the BusOut this will give us a LED 1 off and LED 2 on 
        ThisThread::sleep_for(BLINKING_RATE_A); //Associates the time from Blinking rate A to this
        leds = 0x2; // as per the BusOut this will give us a LED 2 off and LED 1 on 
        ThisThread::sleep_for(BLINKING_RATE_B); //Associates the time from Blinking rate B to this
    }
}

