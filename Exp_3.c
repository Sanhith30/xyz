// Exp 3: Square Wave Generation using AT89C51
#include <reg51.h>
void delay() {
    unsigned int i,j;
    for(i=0;i<100;i++)
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