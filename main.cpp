#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Blinking rate in milliseconds
#define BLINKING_RATE_A     5000ms
#define BLINKING_RATE_B     2000ms

BusOut leds(LED2,LED1);


// main() runs in its own thread in the OS
int main()
{
    while (true) {
        leds =0x1;
        ThisThread::sleep_for(BLINKING_RATE_A);
        leds = 0x2;
        ThisThread::sleep_for(BLINKING_RATE_B);
    }
}

