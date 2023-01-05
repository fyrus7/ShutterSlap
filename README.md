# ShutterSlap

![image](https://github.com/fyrus7/ShutterSlap/blob/main/image/SS1.jpg)

<img src="https://github.com/fyrus7/ShutterSlap/blob/main/image/SS2.jpg" width="50%" height="50%" alight="center">

# Overview
I am a Photographer who seek an option to make my editing fast, there is to many Lightroom shortcut you can use on the normal keyboard and sometimes (most of the time) you pressed the wrong key for the wrong funtions such as "X" will rejected a photo while not in crop tool option. Surely I can just buy a midi controller but I don't like to see a waste of button on the deck (meh). I decide to make myself a macropad that use midi CC as a key, and that's it! ShutterSlap is born :)

# Feature
* 9 Custom key in 3 layers.
* 1 Key can have 3 functions by tapping once / twice / 3 times.
* 1 Rotary encoder for up/down value.
* 2 Rotary encoder for left/right/up/down (works as custom funtion in layer 2 & 3).
* (Optional) Oled display for viewing layers / midi cc number / funtions.

# Firmware
The firmware is fully QMK, see build environment setup then the make instructions for more information.

# Firmware flashing :
Open QMK Toolbox and locate The .hex file you compiled before or use ready flash default keymap

# Enter the bootloader :
Use tweezer and connect disconnect Reset pin with Ground pin twice.
After flashing done, next time you want to reflash just tap and hold the first top left key while plugin the usb.
