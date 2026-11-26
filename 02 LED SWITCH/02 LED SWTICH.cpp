/*
Write an Embedded C Program (ECP) for LPC214x to read the status 
of switch pin P0.4 and control led pin P0.8 accordingly, 
such that P0.8 is turned ON when P0.4 is HIGH and turned OFF 
when P0.4 is LOW using IOPIN, IOSET, and IOCLR registers.
*/
#include <LPC214x.h>

// Declare input and output pin numbers
#define SW   4    // P0.4
#define LED  8    // P0.8

int main()
{
    // Configure P0.4 as GPIO input
    IODIR0 &= ~(1 << SW); //by default input port pin

    // Configure P0.8 as GPIO output
    IODIR0 |= (1 << LED);

    while(1)
    {
        // Read the status of P0.4
				if(((IOPIN0>>SW)&1) == 1)
        {
            // If P0.4 is HIGH, turn ON P0.8
            IOSET0 = (1 << LED);
        }
        else
        {
            // If P0.4 is LOW, turn OFF P0.8
            IOCLR0 = (1 << LED);
        }
    }
}
