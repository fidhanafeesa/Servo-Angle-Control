# Servo Angle Control

##  Project Overview

The **Servo Angle Control** project is an embedded control system developed using an **ESP32, potentiometer, and servo motor**. The system allows the user to manually control the angular position of the servo motor by rotating the potentiometer.

The potentiometer acts as an analog input device. As the knob is rotated, its output voltage changes. The ESP32 reads this analog voltage using its built-in **ADC (Analog-to-Digital Converter)** and maps the sensor value to a predefined servo angle, typically between **0° and 180°**.

This project demonstrates the fundamental concept of **analog input processing, PWM-based motor control, and microcontroller-based position control**.

## ⚙️ Working Principle

The system operates through the following sequence:

```text
Potentiometer
      ↓
Analog Voltage
      ↓
ESP32 ADC
      ↓
Analog Value Processing
      ↓
Angle Mapping
      ↓
PWM Signal
      ↓
Servo Motor
      ↓
Desired Angular Position
```

When the potentiometer is rotated:

* The potentiometer produces a variable analog voltage.
* The ESP32 reads this voltage through an ADC pin.
* The ADC converts the analog voltage into a digital value.
* The ESP32 maps this value to a servo angle.
* A PWM control signal is generated for the servo.
* The servo moves to the corresponding angular position.

For example:

| Potentiometer Position | Servo Position |
| ---------------------- | -------------: |
| Minimum                |             0° |
| Middle                 |           ~90° |
| Maximum                |           180° |

##  Hardware Components

* ESP32 development board
* Potentiometer
* Servo motor
* Jumper wires
* Breadboard
* Suitable power supply

##  Basic Connections

### Potentiometer

| Potentiometer Pin | ESP32    |
| ----------------- | -------- |
| VCC               | 3.3V     |
| GND               | GND      |
| Wiper             | ADC GPIO |

### Servo Motor

| Servo Pin | Connection                  |
| --------- | --------------------------- |
| VCC       | Suitable external 5V supply |
| GND       | Common GND                  |
| Signal    | ESP32 GPIO                  |

> **Note:** For larger servo motors, use a separate suitable power supply and connect its ground to the ESP32 ground.

##  Software

The project can be programmed using the **Arduino IDE** with ESP32 board support.

The main software operations are:

1. Configure the potentiometer pin as an analog input.
2. Read the ADC value from the potentiometer.
3. Map the ADC range to the required servo angle.
4. Generate the appropriate PWM signal.
5. Continuously update the servo position according to the potentiometer.

##  Key Concepts Demonstrated

* ESP32 GPIO programming
* Analog-to-Digital Conversion (ADC)
* PWM-based servo control
* Analog signal processing
* Motor position control
* Embedded system programming
* Real-time input/output control

##  Applications

The same control concept can be used in:

* Robotic arms
* Pan-and-tilt mechanisms
* Camera positioning systems
* Robotic platforms
* Servo-based control panels
* Model automation systems
* Educational robotics projects

##  Future Improvements

The project can be expanded by adding:

* OLED/LCD display for angle indication
* Multiple servo motors
* Wireless control using Wi-Fi or Bluetooth
* Web-based servo control
* Joystick-based control
* Preset angle selection
* Feedback-based closed-loop positioning

##  Project Objective

The main objective of this project is to understand how an **ESP32 processes analog input and converts it into controlled mechanical movement**. It provides a practical introduction to ADC, PWM, servo motors, and real-time embedded control systems.
