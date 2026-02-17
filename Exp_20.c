// Exp 20: Add array of 16-bit numbers and store 32-bit result
#include <reg51.h>
void main() {
    unsigned int arr[3] = {1000, 2000, 3000};
    unsigned long sum = 0;
    unsigned char i;
    for(i=0;i<3;i++)
        sum += arr[i];
    P0 = sum & 0xFF;
    P1 = (sum >> 8) & 0xFF;
    P2 = (sum >> 16) & 0xFF;
    while(1);
}