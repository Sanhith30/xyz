// Exp 9: LED Chaser using AT89C51
#include <reg51.h>
void delay(){
    unsigned int i,j;
    for(i=0;i<200;i++)
        for(j=0;j<1275;j++);
}
void main(){
    while(1){
        P0=0x01; delay();
        P0=0x02; delay();
        P0=0x04; delay();
        P0=0x08; delay();
        P0=0x10; delay();
        P0=0x20; delay();
        P0=0x40; delay();
        P0=0x80; delay();
    }
}