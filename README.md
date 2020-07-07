<!-- Please do not change this html logo with link -->
<a href="https://www.microchip.com" rel="nofollow"><img src="images/microchip.png" alt="MCHP" width="300"/></a>

# Getting Started with the tinyAVR® 1-series

This repository contains training examples on the Microchip tinyAVR® 1-series. Follow the training manual [Training Manual - Getting Started with the tinyAVR® 1-series](www.microchip.com/DS40001949) from Microchip for full step-by-step description. The training is carried out on a ATtiny817 Xplained Pro board.

This training includes three assignments covering topics such as: 
- Driver Configuration in [Atmel START](https://start.atmel.com/#)
- PINMUX driver configuration and check LED toggle on button press
- Generate a PWM by using timer counter A (TCA) and implement Variable-Pulse-Width by using the RTC interrupt
- Duty cycle and frequency measurement using input capture mode of TCB
- USART configuration
- CCL (Configurable Custom Logic): A programmable logic peripheral, which can be connected to the
device pins, events, or peripherals, which allows the user to eliminate external logic gates for simple glue logic functions. 

The code in this repository is configured for the last assignment. Refer to the training manual for additional information on how to configure from scratch. 

*This training manual is based on using Atmel Start with Atmel Studio. It can, with some adjustments, be used with MPLAB X IDE. When the traning manual re-configures the project using Atmel Studio: go back to the Atmel Start website where the project was created and exported to MPLAB X IDE. Re-configure the original project before exporting it to MPLAB X IDE again. You can now copy and move all the new files, except main.c, over in your old project folder. In this way changes you have made in *main.c* are kept, but the system is re-configured.* 

## Related Documentation

- [Training Manual - Getting Started with the tinyAVR® 1-series](www.microchip.com/DS40001949)
- [ATtiny817 Xplained Pro User Guide](www.microchip.com/DS50002684)
- [ATtiny817 Data Sheet](www.microchip.com/DS40001901)
- [ATtiny3217 Product Family](https://www.microchip.com/design-centers/8-bit/avr-mcus/device-selection/attiny3217y)

## Software Used

- [MPLAB® X IDE](http://www.microchip.com/mplab/mplab-x-ide) v5.30 or newer
- [MPLAB® XC8](http://www.microchip.com/mplab/compilers) 2.10 or a newer

## Hardware Used

- [ATtiny817 Xplained Pro](https://www.microchip.com/DevelopmentTools/ProductDetails/attiny817-xpro)
- Micro-USB cable (Type-A/Micro-B)
- One female-to-female wire
- Internet connection

## Assignments
- Assignment 1 - *LED TOGGLE*: An application will be developed that controls the LED using the push-button on the board. The LED will be OFF on pressing the button, default state is LED ON. On the ATtiny817 Xplained Pro board, LED0 is connected to pin PB4, and the push-button (SW0) is
connected to pin PB5.

- Assignment 2 - *Generate PWM, Measure Duty Cycle and Frequency*: The ATtiny817 has two 16-bit Timer/Counter instances, TCA and TCB, and one 12-bit Timer/Counter, TCD. In this assignment an application will be developed to generate the PWM using the TCA. The RTC interrupt will be
used to vary the duty cycle of the PWM.
<br/> The TCA waveform output will be used as input to the TCB through the Event System, and the input capture mode of the TCB will be used to measure the duty cycle and the frequency of the waveform. The measured data will be sent to the terminal through the USART.
<br> Single-Slope PWM Generation mode will be used for TCA. Here, the period is controlled by the PER
register, while the values of the CMPn compare register controls the duty cycle of the waveform
generated (WG) output, the WOn. The counter value is compared to the CMPx registers and the PER
register to set the waveform period or pulse width.

- Assignment 3 - *Basis of a Binary Frequency-Shift Keying Scheme*: In this assignment, a small CCL-based application will be developed. It will blink an LED at two different frequencies depending on whether a button is depressed or not. Two pulse trains of different frequencies will be generated and routed to the CCL. The CCL will be configured to select which of the pulse trains to pass on to the output based on the state of a third input signal. The application can be the basis of a binary frequency-shift keying scheme that encodes binary data as discrete shifts between two frequencies.
<br/>The RTC peripheral offers two timing functions; the Real-Time Counter (RTC) and a Periodic Interrupt Timer (PIT). The PIT functionality can be enabled independent of the RTC functionality.
By using the same clock source as the RTC function, the PIT can request an interrupt or trigger an output event on every nth clock period. Here the Event System will be configured to output events from the PIT.

## Setup

1. Connect the ATtiny817 Xplained Pro board to the PC using the USB cable.

2. Download the zip file or clone the example to get the source code.

## Operation

1. Open the project in MPLAB X IDE.

2. Refer to the training manual for step-by-step description on how to program each of the Assignments.

3. Build the solution and program the ATtiny817. 

## Summary
 This training exercise demonstrated the different perripherals of tinyAVR 1-series, how to use the Event System to generate Event anf how to use CCL to generate output.
