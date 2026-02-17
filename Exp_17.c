// Exp 17: Embedded C program to multiply two 16-bit binary numbers
#include <reg51.h>
void main() {
    unsigned int a = 3000, b = 4;
    unsigned long result;
    result = (unsigned long)a * b;
    P0 = result & 0xFF;
    P1 = (result >> 8) & 0xFF;
    while(1);
}