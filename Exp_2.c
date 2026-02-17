// Exp 2: Flashing LED using AT89C51
#include <reg51.h>
void delay() {
    unsigned int i,j;
    for(i=0;i<200;i++)
        for(j=0;j<1275;j++);
}
void main() {
    while(1) {
        P0 = 0xFF;
        delay();
        P0 = 0x00;
        delay();
    }
}