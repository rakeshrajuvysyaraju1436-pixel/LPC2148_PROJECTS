# Experiment 01: LED Toggle using LPC2148

## Objective
To turn an LED ON and OFF continuously using the LPC2148 ARM7 microcontroller.

## Components Required
- LPC2148 development board
- LED
- Connecting wires

## Software Used
- Keil µVision4

## Pin Configuration

| LPC2148 Pin | Connection |
|---|---|
| P0.8 | LED |

## Working Principle
The LED is connected to GPIO pin P0.8.

- IOCLR0 is used to turn ON the active-low LED.
- IOSET0 is used to turn OFF the LED.
- A 1-second delay is provided between ON and OFF operations.

## Program Description
The program configures P0.8 as an output pin and continuously toggles the LED using a while loop.

## Result
The LED successfully turns ON and OFF continuously with a 1-second delay.

## Tools
Keil µVision4 | LPC2148 ARM7

## Author
Rakesh Raju
