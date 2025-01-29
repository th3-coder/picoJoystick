README
Raspberry Pico Joystick For Gaming/Computer Tasks

- This project utilizes the serial monitor from Arduino to take analog input from a joystick
  and outputs this data to the serial. From there a python script is then ran to take the incoming 
  serial data and convert this to HID inputs in real time. To ensure python script runs, close 
  Arduino before starting script.


To download python library 
  pip install pydirectinput-rgx

*** Currently working on a native HID version *** 

To use Raspberyy Pico in Arduino downloader 

    1. Download python bootloader onto Pico board
    2. Open Arduino 
    3. Open board manager and download Arduino Mbed OS RP2040 Boards
        * you should now see your Pico board connected, if not repeat steps 1-3

***CHANGE COM port in code***

