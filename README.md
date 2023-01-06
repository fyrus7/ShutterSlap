# ShutterSlap
v1.0

# Overview
* I'm a Photographer who seek an option to make my editing fast :)
* There is so many Lightroom shortcut you can use on the normal keyboard and sometimes (most of the time) you pressed the wrong key for the wrong funtions such as "X" will rejected a photo while not in crop tool option.
* Surely I can just buy a midi controller but I don't like to see a waste of button on the deck (meh). I decide to learn more about the C language use in QMK firmware and make myself a Macropad, and that's it! ShutterSlap is born :)
* Why ShutterSlap? Shutter = Photographer, Slap? key funtion by tapping it 1 to 3 times like a slap haha!

![image](https://github.com/fyrus7/ShutterSlap/blob/main/image/ShutterSlap1.jpg)

![image](https://github.com/fyrus7/ShutterSlap/blob/main/image/ShutterSlap2.jpg)

# Feature
* 9 Custom key in 3 layers.
* 1 Key can have 3 functions by tapping once / twice / 3 times.
* 1 Rotary encoder for up/down value.
* 2 Rotary encoder for left/right/up/down (works as custom funtion in layer 2 & 3).
* (Optional) Oled display for viewing layers / midi cc number / funtions.

# Layout
![image](https://github.com/fyrus7/ShutterSlap/blob/main/image/Layout.jpg)
* 2 Row / 5 Column

# Parts
* Arduino Pro Micro ATmega32U4 5V/16MHz
* 10x Cherry Switch
* 10x 1N4148 Diode
* 1-3 Rotary encoder (you can skip 2)
* Oled display 128x64 (optional)

# Pinout & Matrix
![image](https://github.com/fyrus7/ShutterSlap/blob/main/image/pro_micro_pinout.jpg)

* Row pins: 16, 10
* Column pins: 5, 6, 7, 8, 9
*
* Rotary Encoder pins,
* Pad A: 15, A1, A3
* Pad B: 14, A0, A2
*
* Oled (optional)
* SDA = pin 2
* SCL = pin 3
* VCC = vcc
* GND = gnd

# Firmware
The firmware is fully QMK, see build environment setup then the make instructions for more information.
* Precompile firmware on Release.

# Firmware flashing :
Open QMK Toolbox and locate The .hex file you compiled before or use ready flash default keymap

# Enter the bootloader :
Use tweezer and connect disconnect Reset pin with Ground pin twice.
After flashing done, next time you want to reflash just tap and hold the first top left key while plug in the usb.
