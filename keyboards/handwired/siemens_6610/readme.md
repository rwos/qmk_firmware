# Handwired/Rebuilt Siemens 6.610 Keyboard

![handwired/siemens_6610](imgur.com image replace me!)

This is very custom and only uses the shell and keycaps of the Siemens
Keyboard - and neither the original switches nor any of the original PCBs.

If you're trying to restore a Siemens 6610 (-Keyboard), this will be of no use
to you, but do have a look at
https://technikum29.de/de/geraete/Siemens_6610/siemens_6610_Details.php.

I have also re-ordered the keys somewhat, to be a bit closer to a PC keyboard
layout.

The matrix is 12 columns by 10 rows, with the rows being split in the
middle (because otherwise there's not enough I/O pins).

* Keyboard Maintainer: [Richard Wossal](https://github.com/rwos)
* Hardware Supported: Raspberry Pi Pico (RP2040)

Make example for this keyboard (after setting up your build environment):

    make handwired/siemens_6610:default

Flashing example for this keyboard:

    make handwired/siemens_6610:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
