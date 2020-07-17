
======================
USART driver
======================
The Universal Synchronous and Asynchronous serial Receiver and Transmitter (USART) peripheral is a
fast and flexible serial communication module. The USART supports full-duplex communication,
asynchronous and synchronous operation and one-wire configurations. The USART can be set in SPI
master mode and used for SPI communication.An IRCOM module can be enabled for one USART to support 
IrDA 1.4 physical compliant pulse modulation and demodulation for baud rates up to 115.2kbps.

NOTE 
----
XMEGA devices contain an infrared communication module (IRCOM) that is IrDA compatible for baud rates up to
115.2kbps. It can be connected to any USART to enable infrared pulse encoding/decoding for that USART. 
The IRCOM is automatically enabled when a USART is set in IRCOM mode.

Features
--------
* Initialization

Applications
------------
* Terminal application
* Low-speed communication between devices.

Dependencies
------------
* CLKCTRL/CLK for clock
* PORT for I/O lines and connections
* CPUINT/PMIC for Interrupt
* EVSYS for events
* UPDI/PDI/JTAG for debug

Note
----
* ISR will be generated only when Global Interrupt checkbox and driver_isr Harness checkbox are enabled

Concurrency
-----------
N/A

Limitations
-----------
N/A

Knows issues and workarounds
----------------------------
N/A

