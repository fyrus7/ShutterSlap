# ShutterSlap

[Latest release v4.0.1](https://github.com/fyrus7/ShutterSlap/releases/tag/v4.0.1) | [Demo Video](https://youtu.be/QHllZwDsCeE)
<br/>
<br/>
![](https://github.com/fyrus7/ShutterSlap/blob/main/image/ShutterSlap%20Acrylic.jpg)

![](https://github.com/fyrus7/ShutterSlap/blob/main/image/SS_VIAL_v2.0.3.jpg)

v2.0.3 configurable in Vial gui under "User" tab.

# Overview
I'm a Photographer who seek an option to make my editing fast by clicking everything in keyboard shortcuts.
<br/>
There is so many Lightroom shortcut you can use on the normal keyboard and sometimes (most of the time) you pressed the wrong key for the wrong funtions such as "X" will rejected a photo if not in crop tool option.
<br/>
Therefor, I made myself this macropad to ease my job :)
<br/>
<br/>

Macropad Maintainer: <a href="https://github.com/fyrus7"><b>fyrus7</b></a>
<br/>
<br/>

# Feature
* 60 Custom key in 2 layers (configure in vial)
* change LR value with a twist of an encoder.
* (Optional) Oled display for viewing layers & functions.


# Parts
* Arduino Pro Micro ATmega32U4 5V/16MHz
* 10x Cherry Switch
* 11x 1N4148 Diode
* 1-3 Rotary encoder (you can use only 1 and up to 3)
* Oled display 128x64 (optional)

# Pinout & Matrix
<img src="https://github.com/fyrus7/ShutterSlap/blob/main/image/pro_micro_pinout.jpg" width="50%" height="50%">

* Row pins: F5, F4, B6
* Column pins: B2, B3, B1, F7, F6
* 
* Rotary Encoder pins,
* Pad A: B5, E6, C6
* Pad B: B4, D7, D4
* 
* Oled (optional)
* SDA = D1
* SCL = D0
* VCC = VCC
* GND = GND

# How to use

[MIDI2LR](https://rsjaffe.github.io/MIDI2LR/) control Lightroom via MIDI commands - only accepts control change (CC), PITCH BEND, or NOTE messages.
<br/>
<br/>
The function of ShutterSlap is to send Midi functions to MIDI2LR plugin like you would with a midi controller. Make sure you install the plugin before use.
<br/>
1. Start Midi2LR plugin, press any ShutterSlap key you want to set a function, then rotate the first encoder.
2. Click on 'Unassigned' and choose whatever funtions you like.
3. After all key has been assign, right click on your command row, and select 'Binary offset' in the pop up window, and click 'apply to all'.
<br/>
Dont forget to save your MIDI2LR settings.
<br/>
<br/>

<img src="https://github.com/fyrus7/ShutterSlap/blob/main/image/midi2lr.jpg" width="50%" height="50%">

# Firmware
The firmware is fully QMK, [see build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) then the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.
<br/>
<br/>
Make example for this keyboard:
<br/>
<br/>
  <i>qmk compile -kb shutterslap -km default</i>

# Firmware flashing :
Open QMK Toolbox and locate The .hex file you compiled before or use ready flash default keymap.
* Precompile firmware in [Release](https://github.com/fyrus7/ShutterSlap/releases).

# Enter the bootloader :
Use tweezer and connect disconnect Reset pin with Ground pin twice.
After flashing done, next time you want to reflash just tap and hold the first top left key while plug in the usb (Caterina board).
