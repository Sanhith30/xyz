// Exp 22: Convert 0xCF to decimal and display digits
#include <reg51.h>
void main() {
    unsigned char hex = 0xCF;
    unsigned int dec = hex;
    unsigned char hundreds, tens, units;
    hundreds = dec / 100;
    tens = (dec % 100) / 10;
    units = dec % 10;
    P0 = hundreds;
    P1 = tens;
    P2 = units;
    while(1);
}