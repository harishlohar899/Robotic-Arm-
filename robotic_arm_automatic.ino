#include <Servo.h>

// Create Servo objects for each motor
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Define default positions for each servo
int pos1 = 90; // Servo 1 initial position
int pos2 = 90; // Servo 2 initial position
int pos3 = 90; // Servo 3 initial position
int pos4 = 90; // Servo 4 initial position

void setup() {
  // Attach servos to corresponding pins
  servo1.attach(3); // Pin for Servo 1
  servo2.attach(5); // Pin for Servo 2
  servo3.attach(6); // Pin for Servo 3
  servo4.attach(9); // Pin for Servo 4

  // Move servos to default positions at startup
  servo1.write(pos1);
  servo2.write(pos2);
  servo3.write(pos3);
  servo4.write(pos4);

  delay(1000); // Delay to stabilize the servos
}

void loop() {
  // Example sequence of movements

  // Step 1: Move Servo 1 from position 90° to 0° and back
  for (int angle = 90; angle >= 0; angle -= 5) {
    servo1.write(angle);
    delay(50);
  }
  
  for (int angle = 0; angle <= 90; angle += 5) {
    servo1.write(angle);
    delay(50);
  }
  {
    delay(1000);
  }
  // Step 2: Rotate Servo 2 from position 90° to 180° and back
  for (int angle = 90; angle <= 180; angle += 5) {
    servo2.write(angle);
    delay(50);
  }
  
  for (int angle = 180; angle >= 90; angle -= 5) {
    servo2.write(angle);
    delay(50);
  }
    {
    delay(1000);
  }

  // Step 3: Move Servo 3 up and down
  for (int angle = pos3; angle <= pos3 + 45; angle += 5) {
    servo3.write(angle);
    delay(50);
  }
  
  for (int angle = pos3 + 45; angle >= pos3; angle -= 5) {
    servo3.write(angle);
    delay(50);
  }
  {
    delay(1000);
  }
  // Step 4: Open and close gripper controlled by Servo 4
  for (int angle = pos4; angle <= pos4 + 30; angle += 5) {
    servo4.write(angle);
    delay(50);
  }
  
   for (int angle = pos4 + 30; angle >= pos4; angle -=5) {
     servo4.write(angle);
     delay(50);
   }
  {
    delay(1000);
  }
   delay(10); // Pause before restarting the sequence
}
