// Exp 5: Stepper Motor using AT89C51
#include <reg51.h>
void delay(){
    unsigned int i,j;
    for(i=0;i<200;i++)
        for(j=0;j<1275;j++);
}
void main(){
    while(1){
        P0=0x09; delay();
        P0=0x0C; delay();
        P0=0x06; delay();
        P0=0x03; delay();
    }
}