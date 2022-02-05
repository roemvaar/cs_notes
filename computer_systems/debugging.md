# Debugging

When developing software in an embedded environment, the most likely scenario when testing a new hardware interface is...
nothing happens. Unless things work perfectly, it is difficult to know where to begin looking for problems. With a logic
analyzer, one can capture and visualize any data that is being transmitted.

For example, when working on software to drive a serial port, it is possible to determine whether anything is being transmitted,
and if so, what. This becomes especially important where the embedded processor is communicating with an external device - where
every command requires a transmitting and receiving a specific binary sequence. A logic analyzer provides the key to observing the
actual communication events (if any!).

One of the most useful techniques for debugging software is to print messages to a terminal.

Serial communication through USART (Universal Synchronous Asynchronous Receiver Transmitter), in order to access
a terminal on the board.

Asynchronous serial - debugging

## Debugging Tools

### Software

- Terminal - print statements, logs
- GDB
- Kernel - KGDB

### Hardware

- Oscilloscope
- Logic Analyzer
