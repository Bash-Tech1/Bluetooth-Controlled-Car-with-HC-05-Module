
// Motor control pins
#define LED1 13
#define IN1 12
#define IN2 11
#define IN3 10
#define IN4 9

void setup() {
  Serial.begin(9600);  // Initialize Bluetooth communication
  
  // Initialize motor control pins
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(LED1, OUTPUT);
  
  // Ensure motors are stopped initially
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    char inputValue = Serial.read();
    
    switch(toupper(inputValue)) {  // Convert to uppercase for case-insensitive comparison
      case 'F': // Forward
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        break;
        
      case 'B': // Backward
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        break;
        
      case 'R': // Right
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        break;
        
      case 'L': // Left
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        break;
        
      case 'C': // Clockwise rotation
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        break;
        
      case 'A': // Anti-clockwise rotation
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        break;
        
      case 'O': // LED On
        digitalWrite(LED1, HIGH);
        break;
        
      case 'S': // Stop (both motors and LED)
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(LED1, LOW);
        break;
        
      default:  
        break;
    }
  }
}