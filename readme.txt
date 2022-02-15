Athena is a TKL keyboard inspired by https://github.com/coseyfannitutti/ mysterium. It uses some of cftkb's kicad libraries
as well as its USBaspLoader build. 

Known issues:

- Diode 84 is not directly connected to the MCU, it will be fixed for the next revision.

- Some traces near the FN key could not be completed in the manufacturing process, more clearence is needed.

- The silkscreen for the BOOT and RESET buttons are not visible, new and clearer silkscreens will be added.

- The MOSI and MISO pins on the MCU are swapped, does not affect the behaviour of the keyboard it needs to be taken into account when uploading the firmware. It will be fixed for the next revision.

- The 2u backspace key is not in the correct position, it will be fixed for the next revision.
