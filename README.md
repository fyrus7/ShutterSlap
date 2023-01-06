# ShutterSlap
[Initial release v1.0](https://github.com/fyrus7/ShutterSlap/releases/tag/v1.0)

![](https://github.com/fyrus7/ShutterSlap/blob/main/image/ShutterSlap1.jpg)

![](https://github.com/fyrus7/ShutterSlap/blob/main/image/ShutterSlap2.jpg)

# Overview
* I'm a Photographer who seek an option to make my editing fast by clicking everything in keyboard shortcuts.
* There is so many Lightroom shortcut you can use on the normal keyboard and sometimes (most of the time) you pressed the wrong key for the wrong funtions such as "X" will rejected a photo if not in crop tool option.
* Therefor, I made myself this macropad to ease my job :)

# Feature
* 9 Custom key in 3 layers.
* 1 Key can have 3 functions by tapping once / twice / 3 times.
* 1 Rotary encoder for up/down value.
* 2 Rotary encoder for left/right/up/down (works as custom funtion in layer 2 & 3).
* (Optional) Oled display for viewing layers / midi cc number / funtions.

# Layout
<img src="https://github.com/fyrus7/ShutterSlap/blob/main/image/Layout.jpg" width="50%" height="50%">
* 2 Row / 5 Column

# Parts
* Arduino Pro Micro ATmega32U4 5V/16MHz
* 10x Cherry Switch
* 10x 1N4148 Diode
* 1-3 Rotary encoder (you can skip 2)
* Oled display 128x64 (optional)

# Pinout & Matrix
<img src="https://github.com/fyrus7/ShutterSlap/blob/main/image/pro_micro_pinout.jpg" width="50%" height="50%">

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

# How to use
* The function of this pad is to send a Midi CC to [MIDI2LR](https://rsjaffe.github.io/MIDI2LR/) plugin like you would with a midi controller. So make sure you install the plugin for Lightroom first.
* Start Midi2LR plugin, press any ShutterSlap key you want to set a function, then rotate the first encoder.
* Click on 'Unassigned' and choose whatever funtions you like.
* After all key has been assign, right click on your command row, and select 'Binary offset' in the pop up window, and click 'apply to all'.

# Firmware
The firmware is fully QMK, see build environment setup then the make instructions for more information.
* Precompile firmware on Release.

# Firmware flashing :
Open QMK Toolbox and locate The .hex file you compiled before or use ready flash default keymap

# Enter the bootloader :
Use tweezer and connect disconnect Reset pin with Ground pin twice.
After flashing done, next time you want to reflash just tap and hold the first top left key while plug in the usb.
