// Exp 8: 7 Segment Display using AT89C51
#include <reg51.h>
unsigned char seg[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
void main(){
    unsigned char i;
    while(1){
        for(i=0;i<10;i++){
            P0 = seg[i];
        }
    }
}