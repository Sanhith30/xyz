// Exp 25: Read switch and display on LEDs using LPC2148
#include <lpc214x.h>

int main() {
    IO0DIR = 0x000000FF;   // LEDs output
    IO1DIR = 0x00000000;   // Switch input
    
    while(1) {
        if(IO1PIN & (1<<16))   // Read switch P1.16
            IO0SET = 0x000000FF;
        else
            IO0CLR = 0x000000FF;
    }
}