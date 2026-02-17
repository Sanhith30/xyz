// Exp 4: Smooth LED Brightness (Software PWM)
#include <reg51.h>
void delay(unsigned int t){
    unsigned int i,j;
    for(i=0;i<t;i++)
        for(j=0;j<1275;j++);
}
void main(){
    while(1){
        P0 = 0xFF;
        delay(10);
        P0 = 0x00;
        delay(100);
    }
}