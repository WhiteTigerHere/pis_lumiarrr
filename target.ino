// Pin definitions for LDR sensors and their corresponding LEDs
const int ldrPins[3] = {A0, A1, A2};     // LDR1, LDR2, LDR3
const int ldrLEDs[3] = {4, 5, 6};        // LED1, LED2, LED3

// Ultrasonic sensor pins
const int trigPin = 9;
const int echoPin = 10;

// LED for object detection within 2 meters
const int distanceLED = 7;

// Threshold value to detect laser hit on LDRs (adjust based on test)
const int laserThreshold = 800;

void setup() {
  Serial.begin(9600);

  // Set LDR LED pins as OUTPUT
  for (int i = 0; i < 3; i++) {
    pinMode(ldrLEDs[i], OUTPUT);
  }

  // Set ultrasonic sensor and distance LED pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(distanceLED, OUTPUT);
}

void loop() {
  // Check each LDR and turn on respective LED if laser is detected
  for (int i = 0; i < 3; i++) {
    int ldrValue = analogRead(ldrPins[i]);
    Serial.print("LDR "); Serial.print(i + 1); Serial.print(": "); Serial.println(ldrValue);

    if (ldrValue < laserThreshold) {
      digitalWrite(ldrLEDs[i], LOW);  // Laser hit → LED ON
    } else {
      digitalWrite(ldrLEDs[i], HIGH);   // No hit → LED OFF
    }
  }

  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo and calculate distance
  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance: "); Serial.print(distance); Serial.println(" cm");

  // If object is within 200 cm, turn on distance LED
  digitalWrite(distanceLED, distance <= 200 ? HIGH : LOW);

  delay(100); // Short delay for stability
}
