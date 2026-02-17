// Exp 19: Embedded C program to find factorial of a number
#include <reg51.h>
void main() {
    unsigned int num = 5, fact = 1, i;
    for(i = 1; i <= num; i++)
        fact *= i;
    P0 = fact & 0xFF;
    P1 = (fact >> 8) & 0xFF;
    while(1);
}