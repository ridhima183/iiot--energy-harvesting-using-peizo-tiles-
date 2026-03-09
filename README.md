
# IIoT Voltage Monitoring System (ESP32 + Blynk + I2C LCD)

This Industrial IoT (IIoT) project monitors two voltage sources using an ESP32 and sends real‑time data to the Blynk cloud platform. The measured voltages are also displayed locally on a 16x2 I2C LCD. The system enables remote voltage monitoring for industrial equipment and electrical systems.

## Features
- Real‑time voltage monitoring
- Cloud visualization using Blynk IoT
- Local display using I2C LCD
- ESP32 based wireless monitoring
- Dual voltage sensor input

## Hardware Required
- ESP32
- Voltage Sensor Module ×2
- 16x2 I2C LCD Display
- Jumper Wires
- Power Supply

## Pin Configuration
| Component | ESP32 Pin |
|----------|-----------|
| Voltage Sensor 1 | GPIO 34 |
| Voltage Sensor 2 | GPIO 35 |
| I2C SDA | GPIO 21 |
| I2C SCL | GPIO 22 |

## How It Works
1. ESP32 reads analog voltage from two sensors.
2. The voltage is converted using ADC scaling.
3. Values are displayed on the LCD.
4. Data is sent to the Blynk cloud dashboard.

## Blynk Virtual Pins
- V1 → Voltage Sensor 1
- V2 → Voltage Sensor 2

## Applications
- Industrial power monitoring
- Battery monitoring systems
- Smart grid monitoring
- Remote electrical diagnostics

## Author
IIoT Student Project
