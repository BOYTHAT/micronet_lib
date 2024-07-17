# 1. Description of Micro:Net
The MicroNet PCB Board featuring the ESP32-S3 is a powerful and efficient platform designed for educational and practical applications in IoT, AI, and embedded systems. Its advanced features and compact design make it an ideal choice for developers, hobbyists, and educators looking to explore and innovate in the fields of electronics. This all-in-one educational package encourages assembly, fosters STEM skills, and offers a comprehensive introduction to robotics, electronics, and potential programming for all of generations to gain more knowledges.
![Reference Image](PIC/MATCHTEAM.png)
# 2. Micro:Net library for Arduino IDE
    - BlinkLED
    - Button
    - Buzzer
    - RGB
    - TelegramControl
# 3. BlinkLED
You can go to example of MiorcoNet libray then click on BlinkLED
![Reference Image](PIC/image.png)

In this example we set the LED1 to pin 5 and LED2 to pin 6 according to the MicroNet board. You also can change to another pins as possible.

# 4. Button

On the Micro:Net board, it has 2 user buttons that use GPIO01 and GPIO02.

![Reference Image](PIC/image1.png)

In this example, we use Button1 to light up the LED1 (GPIO05) and Button2 to light up LED2 (GPIO06). Button1 was pressed the LED1 will light up until we press it again then the LED state is  low and the concept of Button2 is the same.
