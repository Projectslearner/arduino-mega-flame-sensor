/*
    Project name : Flame Sensor
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-flame-sensor
*/

const int flameSensorPin = 2; // Digital pin connected to the flame sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(flameSensorPin, INPUT); // Set flame sensor pin as input
}

void loop() {
  int flameDetected = digitalRead(flameSensorPin); // Read flame sensor state

  if (flameDetected == HIGH) {
    Serial.println("Flame detected!");
  } else {
    Serial.println("No flame detected");
  }

  delay(1000); // Add a small delay before the next reading
}
