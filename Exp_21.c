// Exp 21: Display Hello World (Port simulation)
#include <reg51.h>
void main() {
    char msg[] = "HELLO";
    unsigned char i;
    for(i=0;i<5;i++)
        P0 = msg[i];
    while(1);
}