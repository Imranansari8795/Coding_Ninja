// #include<iostream>
// using namespace std;
// void swap_alternate(int *arr,int n)
// {
    
//     for(int  i = 0; i < n ;i += 2)
//     {
//         if(i + 1 < n)
//         {
//         //    swap(arr[i],arr[i + 1]);

//         int temp = arr[1];
//         arr[1] = arr[0];
//         arr[0] = temp;
//         }
//     }
//     for(int j = 0 ; j < n ; j++)
//     {
//         cout<<arr[j]<<" ";
//     }
// }
// int main()
// {
//     int arr[6] = {1,2,7,8,0,1};
//         swap_alternate(arr,6);
// }

// Include the required libraries
// #include <AFMotor.h>

// // Define the motor pins
// AF_DCMotor motor1(1);
// AF_DCMotor motor2(2);

// // Define the sensor pins
// const int leftSensor = A0;
// const int midSensor = A1;
// const int rightSensor = A2;

// void setup() {
//   // Set the motor speed
//   motor1.setSpeed(170);
//   motor2.setSpeed(170);
  
//   // Initialize the serial communication
//   Serial.begin(9600);
// }

// void loop() {
//   // Read the sensor values
//   int leftValue = analogRead(leftSensor);
//   int midValue = analogRead(midSensor);
//   int rightValue = analogRead(rightSensor);
  
//   // Print the sensor values
//   Serial.print(leftValue);
//   Serial.print("  ");
//   Serial.print(midValue);
//   Serial.print("  ");
//   Serial.println(rightValue);
  
//   // If the middle sensor detects the line, move forward
//   if (midValue > 600) {
//     motor1.run(FORWARD);
//     motor2.run(FORWARD);
//   }
//   // If the left sensor detects the line, turn left
//   else if (leftValue > 600) {
//     motor1.run(BACKWARD);
//     motor2.run(FORWARD);
//   }
//   // If the right sensor detects the line, turn right
//   else if (rightValue > 600) {
//     motor1.run(FORWARD);
//     motor2.run(BACKWARD);
//   }
// }











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



