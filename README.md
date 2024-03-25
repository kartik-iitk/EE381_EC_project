# EE381_EC_project

This repository contains the source code and documentation for EE381 - Electronic Circuits (EC) Lab Project conducted at IITK in 2023-24-II under Prof. Baquer Mazhari.

## Project Plan

The project aims to create a study companion for students featuring a microcontroller and sensors. The device monitors a wide range of parameters including ambient noise levels, room lighting, and the user's posture. It then provides real-time feedback through a connected app, LCD Display, piezobuzzers and LEDs, suggesting optimal study conditions, reminding to take breaks, and encouraging healthy study habits. The goal is to enhance the overall learning environment for students without the need for mechanical components and eventually improving the quality of output produced.

### Features, Application and Usage

1. Posture Correction using multiple methods - flex sensor
2. Room Lighting Correction
3. Screen Distance Correction
4. Excess Sedentary Detection
5. Timer and Break Reminder (Pomodoro Technique, etc.)
6. Ambient Noise Level Detection

## Current Status

### Pending modules

1. Application Development
2. Wifi/Bluetooth Module
3. LDR
4. Load Cell
5. Sensor Calibration
6. Code which supports all above features together.
7. Integration of LEDs and Push Buttons
8. Final Report with the Circuit Diagram

### Working Modules

1. Microphone
2. Ultrasonic Sensor
3. Gyro-Accelerometers
4. Flex Sensor

## Contributors

Project Name - Study Buddy

Project Team -

1. Kartik Anant Kulkarni - 210493
2. Nikhil Meena - 210667
3. Krishnansh Agarwal - 210532

## Arduino Resources

Arduino UNO is used.

### Bluetooth Module ??

### Wifi Module ??

```
NOTE: Be very careful when referring photos online. The pin diagrams of the ESP01 and ESP8266 are different and any incorrect connection might lead to problems.
```

1. <https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=2ahUKEwjxlsHemoCFAxW_R2wGHUIMCfQQwqsBegQICxAG&url=https%3A%2F%2Fm.youtube.com%2Fwatch%3Fv%3DuA1Ah-0lyMc&usg=AOvVaw09515q2ArAmQZok3GQGQ7Z&opi=89978449>
2. <https://www.instructables.com/Getting-Started-With-the-ESP8266-ESP-01/>
3. <https://www.instructables.com/Learn-How-to-Setup-the-Wifi-Module-ESP8266-by-Usin/>
4. <https://vlahavas.com/posts/20190703-program-esp8266-with-arduino-nano/>
5. Explore Arduino IoT Cloud (free version gives 2 Things with 5 cloud variables each which appears sufficient for the project).

### Microphone ??

1. <https://electronics.stackexchange.com/questions/537230/using-a-computer-mic-with-lm386>
2. <https://circuitdigest.com/electronic-circuits/lm386-audio-amplifier-circuit>

### LDR

1. Use a simple resistor divider with 10K resistor. Measure at the analog pin.
2. Connect the output to LED via 220 Ohm to a digital pin to give the output.
3. <https://www.youtube.com/watch?v=qKku-mmwNIA>

### Ultrasonic Sensor

<https://ozeki.hu/p_3070-how-to-setup-a-ultrasonic-sensor-on-arduino-nano.html>

### LCD Display

<https://docs.arduino.cc/learn/electronics/lcd-displays/>

### Buzzer

1. Simply connect it via a 100 Ohm resistor.

### Gyro-Accelerometer ??

1. <https://electronicshacks.com/arduino-accelerometer-projects/>
2. MPU6050 - <https://www.youtube.com/watch?v=wTfSfhjhAU0>

### Weight Measurement - Load Cell ??

1. <https://www.instructables.com/Arduino-Nano-and-Visuino-Measure-Weight-With-HX711/>
2. <https://www.youtube.com/watch?v=GjNk2_j021g>

### Flex Sensor ??

1. Use a simple resistor divider with `enter value here` resistor. Measure at the analog pin.
