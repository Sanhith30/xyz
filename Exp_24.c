// Exp 24: Blinking LEDs using software delay in LPC2148
#include <lpc214x.h>

void delay() {
    unsigned int i;
    for(i=0;i<1000000;i++);
}

int main() {
    IO0DIR = 0x000000FF;  // P0.0 to P0.7 as output
    while(1) {
        IO0SET = 0x000000FF;  // LEDs ON
        delay();
        IO0CLR = 0x000000FF;  // LEDs OFF
        delay();
    }
}