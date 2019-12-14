# Blocks That Turn 'Round - IDD Final Project

# Team:

Jesse Wayne 

Benjamin Yellin

Sandra Ebirim


# Idea: 

We mounted two servos on a box cardboard box (Box 1) and glued a small box with a face onto each servo. Another less wide cardboard box (Box 2) sits above the box with servos and is attached to a string wound around a stepper motor that is screwed onto a third cardboard box (Box 3) that contains the two smaller boxes. The string should start out unwound so that the boxes with faces are covered.   

The camera is connected to the Raspberry Pi and is running an adapted version Motion, which signals the stepper motor, which is powered by an Arduino, to turn when motion is detected. The stepper motor is attached to a string tied to a box, making the box lift up. This reveals two smaller boxes with faces. Once the two smaller boxes are revealed, if motion is detected again, the faces will turn.  

![Final Version](https://github.com/sandraebirim/FinalProject/blob/master/FinalPrototype.png)  

# Parts: 

1 Raspberry Pi 

2 Arduinos 

1 Servo Driver

1 Stepper Motor

1 Stepper Motor Driver

1 Camera

Wires 

2 microUSB Power Cords 

# Programming: 

Upload [this code](https://github.com/sandraebirim/FinalProject/blob/master/FinalCode.py) for webstreaming, motion tracking, and motion detection to Raspberry pi. This code will also run the servo motors and communicate with the Arduino. 

Upload the [Arduino code](https://github.com/sandraebirim/FinalProject/blob/master/steppermotor.ino)to one of the Arduinos and plug that Arduino directly into the raspberry pi. This code will run the Stepper motor as well as interact with the Raspberry pi code through the Serial Monitor. The secondary arduino is used soley as a power source for the stepper motor. 

Connect the USB camera into the USB port on the raspberry pi. The stepper motor driver will be plugged into pins 8,9,10, and 11 of the Arduino that is connected directly to the raspberry pi. The stepper motor driver will get power from the secondary Arduino.

The servo driver will be connected entirely to the Raspberry pi with standard connections, which can be found [here](https://learn.adafruit.com/assets/69564) with the addition of connecting V+ to one of the raspberry pi 3V or 5V pins. 

A picture of the connected system can be found [here](https://github.com/sandraebirim/FinalProject/blob/master/Connected%20Parts.JPG).


# Assembly: 
Box 1: Laser cut a box that is 3 inches tall, 5 inches deep, and 6.5 inches wide. One one 5 in x 6.5 in side, laser cut two rectangles the size of servo motors out of the box and one rectangle that is 1.5 cm x 5 cm so that the long side of the cut out rectangle is parallel to the long side of the box. This will be a space for wires to feed through. Assemble all sides of the box (joining with hot glue) excluding the bottom (opposite the side with the servos) and the back. Put servos into holes cut out for them. Attach servos to servo driver, which is powered by the Raspberry Pi. 

Box 2: Laser cut a box that is 4 inches tall, 4 inches deep, and 6.5 inches wide. Punch a hole in one of the largest sides for a string to be stuck into and tied so that it does not fall out. The other end of this string will be attached to the stepper motor (instructions to follow). Similarly to Box 1, do not assemble the bottom or back of the box (two of the largest sides that are perpendicular to each other), but connect the other sides with hot glue.

Box 3: Laser cut a box that is 12 inches tall, 5 inches deep, and 9.5 inches wide. Laser cut a rectangle out of the bottom of one of the largest sides such that it 1 cm tall and extends 1 cm until the edge of the box. This will be where wires feed through. Do not assemble the front or bottom of the box. Laser cut a rectangle that is 1 cm x 1 out of the smallest side. 

Attach a stepper motor to the top of Box 3 and place the string connected to Box 2 through the hole cut out in Box 3 and wrap it around the stepper motor, tying a knot once it is fully wrapped. 

# Connecting everything: 

Connect the Servo Driver and camera to the Raspberry Pi. Connect both Servos to the Servo Driver. Power one Arduino with a power cord connected to an outlet and the other Arduino with the Raspberry Pi. Connect the Arduino powered by the Raspberry Pi to the Stepper Motor Driver and connect the Stepper Motor Driver to the Stepper Motor. 

![How it's all connected](https://github.com/sandraebirim/FinalProject/blob/master/Connected%20Parts.JPG)

# Sources: 

[Streaming Video from Raspberry Pi](https://www.pyimagesearch.com/2019/09/02/opencv-stream-video-to-web-browser-html-page/)

[Object Tracking with Camera](https://www.pyimagesearch.com/2018/07/23/simple-object-tracking-with-opencv/)

[Motion Detection with Camera](https://www.pyimagesearch.com/2015/05/25/basic-motion-detection-and-tracking-with-python-and-opencv/)

[Structure Inspiration](https://github.com/Ivan1931/Arduino-Elevator) 








