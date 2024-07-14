#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Blinking rate in milliseconds
#define BLINKING_RATE_A     5000ms
#define BLINKING_RATE_B     2000ms

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        led1 = !led1;
        ThisThread::sleep_for(BLINKING_RATE_A);
        led2 = !led2;
        ThisThread::sleep_for(BLINKING_RATE_B);
    }
}

