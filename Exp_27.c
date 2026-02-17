// Exp 27: UART Serial Transmission & Reception LPC2148
#include <lpc214x.h>

void UART0_Init() {
    PINSEL0 = 0x00000005;   // Enable TxD0 and RxD0
    U0LCR = 0x83;           // 8-bit, 1 stop bit, DLAB=1
    U0DLL = 97;             // 9600 baud (for 15MHz PCLK)
    U0DLM = 0;
    U0LCR = 0x03;           // DLAB=0
}

void UART0_TxChar(char ch) {
    while(!(U0LSR & 0x20));
    U0THR = ch;
}

int main() {
    UART0_Init();
    while(1) {
        UART0_TxChar('A');
    }
}