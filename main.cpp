#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


// main() runs in its own thread in the OS
int main()
{
    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}

