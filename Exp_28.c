// Exp 28: Access internal ADC and display output in LEDs LPC2148
#include <lpc214x.h>

void ADC_Init() {
    PINSEL1 |= (1<<24);   // Select AD0.1 (P0.28)
    AD0CR = (1<<1) | (4<<8) | (1<<21);  // Select channel 1, CLKDIV, enable ADC
}

int main() {
    unsigned int adc_value;
    IO0DIR = 0x000000FF;  // LEDs output
    ADC_Init();
    
    while(1) {
        AD0CR |= (1<<24);           // Start conversion
        while(!(AD0GDR & (1<<31))); // Wait till done
        adc_value = (AD0GDR >> 6) & 0x3FF;
        IO0CLR = 0xFF;
        IO0SET = adc_value & 0xFF;  // Display lower 8 bits
    }
}