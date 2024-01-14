// Include the required libraries
#include <AFMotor.h>

// Define the motor pins
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

// Define the sensor pins
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  // Set the motor speed
  motor1.setSpeed(170);
  motor2.setSpeed(170);
  
  // Initialize the serial communication
  Serial.begin(9600);
  
  // Initialize the sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Read the distance from the ultrasonic sensor
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  
  // Print the distance
  Serial.println(distance);
  
  // If an obstacle is detected, turn left
  if (distance < 30) {
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
    delay(1000);
  }
  // Otherwise, move forward
  else {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
  }
}
