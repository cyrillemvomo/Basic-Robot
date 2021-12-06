#include <Servo.h>

// Create a new servo object:
Servo myservo;
Servo myservo2;

int period = 7950;

// Define the servo pin:
#define servoPin 5
#define servoPin2 6

// Create a variable to store the servo position:
int angle = 0;

void setup() {
  // Attach the Servo variable to a pin:
  myservo.attach(servoPin);
  myservo2.attach(servoPin2);
 
}

void loop() {
  // Tell the servo to go to a particular angle:
  while (millis()< period){
    myservo.write(0);
    myservo2.write(180); 
  }
  myservo.detach();
  myservo2.detach();
}
