#include <PCM.h>
//laser noise data
const unsigned char sample[] PROGMEM = {
228, 228, 0, 228, 228, 0, 228, 228, 0, 228, 228, 0, 228, 228, 0, 228, 228, 0, 228, 228, 0, 219, 219, 0, 0, 219, 219, 0, 0, 219, 219, 0, 0, 219, 219, 0, 0, 219, 219, 0, 0, 219, 219, 0, 0, 219, 219, 0, 0, 210, 210, 0, 210, 210, 0, 210, 210, 0, 210, 210, 0, 210, 210, 0, 210, 210, 0, 201, 201, 201, 0, 0, 0, 201, 201, 201, 0, 0, 0, 201, 201, 201, 0, 0, 0, 201, 201, 201, 0, 0, 0, 201, 201, 201, 0, 0, 0, 201, 201, 201, 0, 0, 0, 192, 192, 192, 192, 0, 0, 0, 192, 192, 192, 192, 0, 0, 0, 192, 192, 192, 192, 0, 0, 0, 192, 192, 192, 192, 0, 0, 0, 192, 192, 192, 192, 0, 0, 0, 192, 192, 192, 192, 0, 0, 0, 183, 183, 183, 183, 0, 0, 0, 0, 183, 183, 183, 183, 0, 0, 0, 0, 183, 183, 183, 183, 0, 0, 0, 0, 183, 183, 183, 183, 0, 0, 0, 0, 183, 183, 183, 183, 0, 0, 0, 0, 183, 183, 183, 183, 0, 0, 0, 0, 174, 174, 174, 174, 0, 0, 0, 174, 174, 174, 174, 0, 0, 0, 174, 174, 174, 174, 0, 0, 0, 174, 174, 174, 174, 0, 0, 0, 174, 174, 174, 174, 0, 0, 0, 174, 174, 174, 174, 0, 0, 0, 165, 165, 165, 165, 165, 0, 0, 0, 0, 0, 165, 165, 165, 165, 165, 0, 0, 0, 0, 0, 165, 165, 165, 165, 165, 0, 0, 0, 0, 0, 165, 165, 165, 165, 165, 0, 0, 0, 0, 0, 165, 165, 165, 165, 165, 0, 0, 0, 0, 0, 165, 165, 165, 165, 165, 0, 0, 0, 0, 0, 156, 156, 156, 156, 156, 156, 0, 0, 0, 0, 0, 156, 156, 156, 156, 156, 156, 0, 0, 0, 0, 0, 156, 156, 156, 156, 156, 156, 0, 0, 0, 0, 0, 156, 156, 156, 156, 156, 156, 0, 0, 0, 0, 0, 156, 156, 156, 156, 156, 156, 0, 0, 0, 0, 0, 156, 156, 156, 156, 156, 156, 0, 0, 0, 0, 0, 147, 147, 147, 147, 147, 147, 0, 0, 0, 0, 0, 0, 147, 147, 147, 147, 147, 147, 0, 0, 0, 0, 0, 0, 147, 147, 147, 147, 147, 147, 0, 0, 0, 0, 0, 0, 147, 147, 147, 147, 147, 147, 0, 0, 0, 0, 0, 0, 147, 147, 147, 147, 147, 147, 0, 0, 0, 0, 0, 0, 138, 138, 138, 138, 138, 138, 0, 0, 0, 0, 0, 138, 138, 138, 138, 138, 138, 0, 0, 0, 0, 0, 138, 138, 138, 138, 138, 138, 0, 0, 0, 0, 0, 138, 138, 138, 138, 138, 138, 0, 0, 0, 0, 0, 138, 138, 138, 138, 138, 138, 0, 0, 0, 0, 0, 129, 129, 129, 129, 129, 129, 129, 0, 0, 0, 0, 0, 0, 0, 129, 129, 129, 129, 129, 129, 129, 0, 0, 0, 0, 0, 0, 0, 129, 129, 129, 129, 129, 129, 129, 0, 0, 0, 0, 0, 0, 0, 129, 129, 129, 129, 129, 129, 129, 0, 0, 0, 0, 0, 0, 0, 129, 129, 129, 129, 129, 129, 129, 0, 0, 0, 0, 0, 0, 0, 129, 129, 129, 129, 129, 129, 129, 0, 0, 0, 0, 0, 0, 0, 120, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 120, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 120, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 120, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 120, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 120, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 111, 111, 111, 111, 111, 111, 111, 111, 0, 0, 0, 0, 0, 0, 0, 0, 111, 111, 111, 111, 111, 111, 111, 111, 0, 0, 0, 0, 0, 0, 0, 0, 111, 111, 111, 111, 111, 111, 111, 111, 0, 0, 0, 0, 0, 0, 0, 0, 111, 111, 111, 111, 111, 111, 111, 111, 0, 0, 0, 0, 0, 0, 0, 0, 111, 111, 111, 111, 111, 111, 111, 111, 0, 0, 0, 0, 0, 0, 0, 0, 111, 111, 111, 111, 111, 111, 111, 111, 0, 0, 0, 0, 0, 0, 0, 0, 102, 102, 102, 102, 102, 102, 102, 102, 0, 0, 0, 0, 0, 0, 0, 102, 102, 102, 102, 102, 102, 102, 102, 0, 0, 0, 0, 0, 0, 0, 102, 102, 102, 102, 102, 102, 102, 102, 0, 0, 0, 0, 0, 0, 0, 102, 102, 102, 102, 102, 102, 102, 102, 0, 0, 0, 0, 0, 0, 0, 102, 102, 102, 102, 102, 102, 102, 102, 0, 0, 0, 0, 0, 0, 0, 102, 102, 102, 102, 102, 102, 102, 102, 0, 0, 0, 0, 0, 0, 0, 93, 93, 93, 93, 93, 93, 93, 93, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 93, 93, 93, 93, 93, 93, 93, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 93, 93, 93, 93, 93, 93, 93, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 93, 93, 93, 93, 93, 93, 93, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 93, 93, 93, 93, 93, 93, 93, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 93, 93, 93, 93, 93, 93, 93, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
const int sampleSize = sizeof(sample);

const byte laserPin = 9;
const byte vibratorPin = 7;
const byte speakerPin = 11;

const byte triggerPin = 5;
const byte leftButtonPin = 4;    
const byte rightButtonPin = 3;    

const byte ledPin1 = A1;          
const byte ledPin2 = A2;
const byte ledPin3 = A3;

byte roundNumber;                 //round
byte modeNumber;                  //mode
bool switchingModes = false;      
bool reloadingOn = true;        

void setup() {
  pinMode(laserPin, OUTPUT);
  pinMode(vibratorPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(speakerPin, OUTPUT);
  
  pinMode(triggerPin, INPUT_PULLUP);
  pinMode(leftButtonPin, INPUT_PULLUP);
  pinMode(rightButtonPin, INPUT_PULLUP);

  digitalWrite(ledPin1, HIGH);
  tone(speakerPin, 400, 50);
  delay(50);
  tone(speakerPin, 550, 50);
  delay(50);
  
  digitalWrite(ledPin2, HIGH);
  tone(speakerPin, 750, 50);
  delay(50);
  tone(speakerPin, 1150, 50);
  delay(50);

  digitalWrite(ledPin3, HIGH);
  tone(speakerPin, 1950, 50);
  delay(60);
}

// void setup() {
//   pinMode(laserPin, OUTPUT);
//   pinMode(vibratorPin, OUTPUT);
//   pinMode(ledPin1, OUTPUT);
//   pinMode(ledPin2, OUTPUT);
//   pinMode(ledPin3, OUTPUT);
//   pinMode(speakerPin, OUTPUT);

void loop() {
  pistol();
  AR();
  burst();
  SMG();
  pistolNightMode();
}

//fire the laser one time with sound
void shootLaser() {
  digitalWrite(laserPin, HIGH);
  startPlayback(sample, sampleSize);
  digitalWrite(vibratorPin, HIGH);
  digitalWrite(A5, HIGH);
  delay(8);
  digitalWrite(laserPin, LOW);
  delay(52);
  digitalWrite(vibratorPin, LOW);
  digitalWrite(A5, LOW);
}

void reload() {
  tone(speakerPin, 400, 50);
  delay(50);
  tone(speakerPin, 550, 50);
  delay(50);
  tone(speakerPin, 750, 50);
  delay(50);
  tone(speakerPin, 1150, 50);
  delay(50);
  tone(speakerPin, 1950, 50);
  delay(50);
  roundNumber = 1;
}

void checkLeftButton() {
  if (digitalRead(leftButtonPin) == LOW) {
    stopPlayback();
    long int pressTime = millis();
    bool toggled = false;
    while (digitalRead(leftButtonPin) == LOW) {
      if ((millis() - pressTime) >= 1000) {
        toggled = true;
        if (reloadingOn) {
          reloadingOn = false;
          tone(speakerPin, 600, 300);
          delay(300);
          tone(speakerPin, 400, 300);
          delay(300);
          while (true) {
            if (digitalRead(leftButtonPin) == HIGH) {
              delay(100);
              break;
            }
          }
          break;
        }
        else {
          reloadingOn = true;
          tone(speakerPin, 400, 300);
          delay(300);
          tone(speakerPin, 600, 300);
          delay(300);
          while (true) {
            if (digitalRead(leftButtonPin) == HIGH) {
              delay(100);
              break;
            }
          }
          break;
        }
      }
    }
    if (toggled == false) {
      tone(speakerPin, 400, 50);
      delay(100);
      switchingModes = true;
    }
  }
}

void checkRightButton() {
  if (digitalRead(rightButtonPin) == LOW) {
    long int pressTime = millis();
    while (digitalRead(rightButtonPin) == LOW) {
      if (((millis() - pressTime) >= 1000) && modeNumber != 5) {
        reload();
        while (true) {
          if (digitalRead(rightButtonPin) == HIGH) {
            delay(50); 
            break;
          }
        }
        break;
      }
    }
  }
}

void checkButtons(int maxRound) {
  checkLeftButton();
  if (reloadingOn) {
    checkRightButton();
    triggerReloadCheck(maxRound);
  }
}

void reloadOverride() {
  if (!reloadingOn) {
    roundNumber = 1;
  }
}

void triggerReloadCheck(int maxRound) {
  if ((digitalRead(triggerPin) == LOW) && (roundNumber > maxRound) && reloadingOn) {
    long int pressTime = millis();
    while (digitalRead(triggerPin) == LOW) {
      if (((millis() - pressTime) >= 1000)) {
        reload();
        while (true) {
          if (digitalRead(triggerPin) == HIGH) {
            delay(100); // debouncing
            break;
          }
        }
        break;
      }
    }
  }
}

void pistol() {
  modeNumber = 1;
  roundNumber = 1;
  while (!switchingModes) {
    if ((digitalRead(triggerPin) == LOW) && (roundNumber <= 16)) {
      shootLaser();
      roundNumber++;
      while (true) {
        if (digitalRead(triggerPin) == HIGH) {
          delay(40);
          if (digitalRead(triggerPin) == HIGH) {
            break;
          }
        }
      }  
    }
    reloadOverride();
    checkButtons(16);
  }
  switchingModes = false; 
}

void AR() {
  modeNumber = 2;
  roundNumber = 1;
  while (!switchingModes) {
    if ((digitalRead(triggerPin) == LOW) && (roundNumber <= 30)) {
      shootLaser();
      roundNumber++;
      delay(120);
    }
    reloadOverride();
    checkButtons(30);
  }
  switchingModes = false; 
}


void burst() {
  modeNumber = 3;
  roundNumber = 1;
  while (!switchingModes) {
    if ((digitalRead(triggerPin) == LOW) && (roundNumber <= 30)) {
      shootLaser();
      delay(40); 
      shootLaser();
      delay(40);
      shootLaser();
      roundNumber += 3;
      delay(340); 
    }
    reloadOverride();
    checkButtons(30);
  }
  switchingModes = false;
}

void SMG() {
  modeNumber = 4;
  roundNumber = 1;
  while (!switchingModes) {
    if ((digitalRead(triggerPin) == LOW) && (roundNumber <= 30)) {
      shootLaser();
      roundNumber++;
      delay(20); 
    }
    reloadOverride();
    checkButtons(30);
  }
  switchingModes = false;
}

void pistolNightMode() {
  modeNumber = 5;
  roundNumber = 2;
  while (!switchingModes) {
    if (digitalRead(triggerPin) == LOW) {
      digitalWrite(laserPin, HIGH);
      digitalWrite(vibratorPin, HIGH);
      delay(8);  
      digitalWrite(laserPin, LOW);
      delay(52);  
      digitalWrite(vibratorPin, LOW);
      while (true) {
        if (digitalRead(triggerPin) == HIGH) {
          delay(50); 
          if (digitalRead(triggerPin) == HIGH) {
            break;
          }
        }
      }
    }
    checkButtons(30);
  }
  switchingModes = false; 
}
