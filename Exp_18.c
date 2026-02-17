// Exp 18: Embedded C program to find sum of first 10 integers
#include <reg51.h>
void main() {
    unsigned char sum = 0, i;
    for(i = 1; i <= 10; i++)
        sum += i;
    P0 = sum;
    while(1);
}