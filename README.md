# Bluetooth-Controlled Car with HC-05 Module

A DIY Bluetooth-controlled car project using Arduino and HC-05 Bluetooth module. This project allows you to control a car wirelessly using Bluetooth commands from a smartphone or computer.

## 🚗 Features

- Wireless control via Bluetooth
- Simple command interface
- Multiple movement controls:
  - Forward (F)
  - Backward (B)
  - Left (L)
  - Right (R)
  - Clockwise rotation (C)
  - Anti-clockwise rotation (A)
- Built-in LED control (O for On, S for Stop)
- Emergency stop functionality

## 📋 Prerequisites

- Arduino board (compatible with Arduino IDE)
- HC-05 Bluetooth module
- L298N Motor Driver
- 2 DC Motors
- LED (optional)
- Jumper wires
- Power supply (battery pack recommended)
- Chassis and wheels

## 🔧 Hardware Setup

### Pin Connections

| Arduino Pin | Connected To |
|-------------|--------------|
| 13          | LED          |
| 12          | IN1 (L298N)  |
| 11          | IN2 (L298N)  |
| 10          | IN3 (L298N)  |
| 9           | IN4 (L298N)  |
| 5V          | HC-05 VCC    |
| GND         | HC-05 GND    |
| TX          | HC-05 RX     |
| RX          | HC-05 TX     |

## 💻 Software Setup

1. Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software)
2. Clone this repository
3. Open `src/code.ino` in Arduino IDE
4. Upload the code to your Arduino board

## 📱 Control Commands

The car can be controlled using the following commands:

| Command | Action           |
|---------|------------------|
| F       | Move Forward     |
| B       | Move Backward    |
| L       | Turn Left        |
| R       | Turn Right       |
| C       | Rotate Clockwise |
| A       | Rotate Anti-clockwise |
| O       | Turn LED On      |
| S       | Stop All Motors & LED |

## 🔄 Usage

1. Power on the car
2. Connect to the HC-05 Bluetooth module from your device
   - Default password is usually "1234" or "0000"
3. Open a serial terminal or Bluetooth control app
4. Send commands to control the car

## 📝 Notes

- Make sure to use a stable power supply for the motors
- The HC-05 module operates at 3.3V, so ensure proper voltage regulation
- Keep the car within Bluetooth range (typically 10 meters)
- Use the 'S' command to stop the car in case of emergency

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com/yourusername/Bluetooth-Controlled-Car/issues).

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- Arduino community for their excellent documentation
- HC-05 module documentation
- L298N motor driver documentation 