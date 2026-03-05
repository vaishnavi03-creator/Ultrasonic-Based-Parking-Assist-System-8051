# Ultrasonic Based Parking Assist System using 8051

## Project Description
This project is an embedded system designed to assist deaf drivers by detecting nearby obstacles using ultrasonic sensors. The system indicates the direction and distance of the obstacle using LEDs, buzzer and LCD display.

## Components Used
AT89C51 Microcontroller  
Ultrasonic Sensors (HC-SR04)  
16x2 LCD Display  
LED Indicators  
Buzzer  
Crystal Oscillator  
Potentiometer  
Resistors  

## Working Principle
The ultrasonic sensors continuously measure the distance between the vehicle and surrounding obstacles.

Based on the measured distance the system classifies the situation into three levels:

SAFE – Object is far away  
CAUTION – Object is moderately close  
DANGER – Object is very near  

The LCD displays:
• Direction of obstacle  
• Distance in cm  
• Safety level  

LEDs and buzzer provide visual and audio alerts.

## Files Included
main.c – Embedded C program  
project1.hex – Compiled microcontroller file  
Ultrasonic_Parking_Assist_Report.pdf – Project report  
circuit.png – Proteus circuit diagram  
output images – Simulation output screenshots

2)State a possible loophole in your system.
ans:One possible limitation of the system is that ultrasonic sensors may give inaccurate readings in heavy rain, fog, or when detecting soft surfaces that absorb sound waves.
3)How are embedded systems helping persons having disabilities to blend in society?
Embedded systems help persons with disabilities by providing assistive technologies such as hearing aids, smart wheelchairs, voice-controlled devices, and navigation assistance systems. These technologies improve independence, safety, and quality of life, allowing disabled individuals to participate more effectively in society.
