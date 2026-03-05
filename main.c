#include <reg51.h>

sbit LED = P1^0;   // LED at Port 1.0

void main(void)
{
    TMOD = 0x01;   // Timer0, Mode 1 (16-bit)

    while(1)
    {
        // Load initial value (controls speed)
        TH0 = 0x3C;
        TL0 = 0xB0;

        TR0 = 1;            // Start Timer0
        while(TF0 == 0);    // Wait for overflow (polling)

        TR0 = 0;            // Stop Timer0
        TF0 = 0;            // Clear overflow flag

        LED = ~LED;         // Toggle LED
    }
}
