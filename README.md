
# LPC2148 LED Toggle

## Experiment 01: LED ON/OFF

### Objective
To turn an LED ON and OFF using the LPC2148 ARM7 microcontroller.

### Hardware Used
- LPC2148 Microcontroller
- LED
- Connecting wires

### Software Used
- Keil µVision4

### Description
The LED is connected to P0.8 of the LPC2148.

- IOCLR0 is used to turn ON the active-low LED.
- IOSET0 is used to turn OFF the LED.
- A delay of 1 second is used between operations.

### Programming Language
C++ (Keil source file)

### Result
The LED successfully toggles ON and OFF continuously.
