// Exp 7: LED Toggle using AT89C51
#include <reg51.h>
void main(){
    while(1){
        P0 ^= 0xFF;
    }
}