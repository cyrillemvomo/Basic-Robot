//#include <Servo.h>
//char buffer[11];
//Servo servo1; // Create a servo object
//Servo servo2; // Create a second servo object
//void setup()
//{
//servo1.attach(5); // Attaches the servo on pin 5 to the
//
//servo2.attach(6); // Attaches the servo on pin 6 to the
//
//Serial.begin(9600);
//while(Serial.available())
//Serial.read();
//servo1.write(90); // Put servo1 at home position
//servo2.write(90); // Put servo2 at home postion
//Serial.println("STARTING...");
//}
//void loop()
//{
//if (Serial.available() > 0) { // Check if data has been entered
//int index=0;
//delay(100); // Let the buffer fill up
//int numChar = Serial.available(); // Find the string length
//if (numChar>10) {
//numChar=10;
//}
//while (numChar--) {
//// Fill the buffer with the string
//buffer[index++] = Serial.read();
//}
//buffer[index]='\0';
//splitString(buffer); // Run splitString function
//}
//}
//void splitString(char* data) {
//Serial.print("Data entered: ");
//Serial.println(data);
//char* parameter;
//parameter = strtok (data, " ,"); //String to token
//while (parameter != NULL) { // If we haven't reached the end of the string...
//setServo(parameter); // ...run the setServo function
//parameter = strtok (NULL, " ,");
//}
//while(Serial.available())
//Serial.read();
//}
//void setServo(char* data) {
//if ((data[0] == 'L') || (data[0] == 'l')) {
//int firstVal = strtol(data+1, NULL, 10); // String to long integer 
//firstVal = constrain(firstVal,0,180); // Constrain values
//servo1.write(firstVal);
//Serial.print("Servo1 is set to: ");
//Serial.println(firstVal);
//}
//if ((data[0] == 'R') || (data[0] == 'r')) {
//int secondVal = strtol(data+1, NULL, 10); // String to long integer
//secondVal = constrain(secondVal,0,255); //Constrain the values
//servo2.write(secondVal);
//Serial.print("Servo2 is set to: ");
//Serial.println(secondVal);
//}
//}
//
////#include <Servo.h>
////Servo servo1;
////Servo servo2;
////int i = 0;
////void setup() {
////  servo1.attach(3);
////  servo2.attach(5); 
////}
////
////void loop() {
////  for (i = 0; i < 180; i++) { 
////    servo1.write(i);              
////    servo2.write(-i);             
////    delay(10);                      
////  }
////  for (i = 180; i > 0; i--) { 
////    servo1.write(i);                
////    servo2.write(i);              
////    delay(10);                      
////  }
////
////}
//
//
//

/* Servo motor with Arduino example code. Position and sweep. More info: https://www.makerguides.com/ */

// Include the servo library:
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
  
//  myservo.write(180);
//  myservo2.write(180);
//  delay(1000);
//  myservo.write(0);
//  myservo2.write(0);
//  delay(1000);
 
//  // Sweep from 0 to 180 degrees:
//  for (angle = 0; angle <= 180; angle += 1) {
//    myservo.write(angle);
//    myservo2.write(angle);
//    delay(15);
//  }
//  // And back from 180 to 0 degrees:
//  for (angle = 180; angle >= 0; angle -= 1) {
//    myservo.write(angle);
//    myservo2.write(angle);
//    delay(30);
//  }
//  delay(1000);
}
