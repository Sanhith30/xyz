// Exp 26: Display number on 7-Segment using LPC2148
#include <lpc214x.h>

unsigned char seg[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void delay() {
    unsigned int i;
    for(i=0;i<500000;i++);
}

int main() {
    IO0DIR = 0x000000FF;
    while(1) {
        int i;
        for(i=0;i<10;i++) {
            IO0SET = seg[i];
            delay();
            IO0CLR = 0xFF;
        }
    }
}