# Hardware Components Documentation

## Required Components

### 1. Arduino Board
- Any Arduino board compatible with Arduino IDE
- Recommended: Arduino Uno or Arduino Nano
- Operating Voltage: 5V
- Digital I/O Pins: 14 (of which 6 provide PWM output)

### 2. HC-05 Bluetooth Module
- Operating Voltage: 3.3V
- Communication: Serial (UART)
- Default Baud Rate: 9600
- Range: Up to 10 meters
- Default Password: Usually "1234" or "0000"

### 3. L298N Motor Driver
- Operating Voltage: 5V to 35V
- Motor Voltage: 5V to 35V
- Max Current: 2A per channel
- Control Pins: IN1, IN2, IN3, IN4
- Enable Pins: ENA, ENB (optional)

### 4. DC Motors
- Recommended: 2x DC Geared Motors
- Operating Voltage: 6V to 12V
- Current Rating: 300mA to 1A per motor
- RPM: 100-300 (depending on your needs)

### 5. Power Supply
- Recommended: 7.4V to 12V LiPo or Li-ion battery pack
- Capacity: 2000mAh or higher recommended
- Current Rating: 2A or higher

### 6. Chassis and Wheels
- Any suitable robot chassis
- 2x Drive wheels
- 1x Caster wheel (for balance)
- Wheel diameter: 65mm to 80mm recommended

### 7. Additional Components
- Jumper wires
- LED (optional, for status indication)
- 220Ω resistor (for LED)
- Breadboard (optional, for prototyping)
- Battery holder/connector
- On/Off switch

## Component Specifications

### Power Requirements
- Arduino: 5V (regulated)
- HC-05: 3.3V (regulated)
- L298N: 5V to 35V
- Motors: 6V to 12V

### Current Requirements
- Arduino: ~50mA
- HC-05: ~30mA
- L298N: Depends on motors
- Motors: 300mA to 1A each

## Safety Considerations

1. Always use a voltage regulator for the HC-05 module
2. Ensure proper heat sinking for the L298N if running motors at high current
3. Use appropriate wire gauge for motor connections
4. Include a power switch for easy control
5. Consider adding a fuse for overcurrent protection
6. Keep the battery pack secure and protected from short circuits

## Assembly Tips

1. Mount the Arduino and HC-05 module securely
2. Keep motor wires away from signal wires to reduce interference
3. Use heat shrink tubing or electrical tape for wire connections
4. Ensure the caster wheel is properly balanced
5. Test each component individually before final assembly
6. Secure the battery pack to prevent movement during operation 