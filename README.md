# pis_lumiarrr

# **LUMINARRR: Pirate-Themed Laser Target Shooter**

**Luminarrr** is an interactive laser shooting game that combines physical construction, electronic components, and pirate-themed gameplay to engage and develop skills in pre-teens.

---

## 🏴‍☠️ Project Features

* Pirate-themed interactive laser shooting experience
* 405nm violet laser used to mark phosphorescent targets
* Ultrasonic and LDR sensor-based hit and proximity detection
* Real-time feedback with LEDs, sounds, and vibrations
* Supports multiple shooting modes for varied gameplay
* Dual-Arduino system (Gun + Target) for modular functionality

---

## 🔧 Hardware Overview

### 🧱 1. Gun Module (Arduino #1)

* Laser Emitter (405nm violet laser)
* Ultrasonic Sensor (Proximity + Direction check, 2m range)
* Sound Module / Buzzer (for feedback on fire)
* Vibration Motor (for haptic feedback)
* Mode Selector Switch/Button (to toggle between firing modes)
* Blue LED (lights up when valid shooting conditions are met)

### 🎯 2. Target Module (Arduino #2)

* Phosphorescent Target Board
* 3 LDRs (Light Dependent Resistors) for hit detection
* 3 LEDs (associated with each LDR/target)
* Optional Sound/Vibration for reactive feedback

---

## 📁 Code Structure

* `gun.ino` → Upload this to the Gun Arduino
* `target.ino` → Upload this to the Target Arduino

Make sure to wire all components correctly and modify pin numbers in the code if needed.

---

## 🚀 Setup Instructions

### 🛠 Requirements

* 2x Arduino Uno or compatible boards
* 1x Ultrasonic sensor (HC-SR04)
* 3x LDRs
* 3x LEDs (with resistors)
* 1x Laser module (405nm)
* 1x Buzzer/sound module
* 1x Vibration motor
* Jumper wires, breadboards, and power supply
* Phosphorescent target material

### ⚙️ Upload the Code

1. Open the Arduino IDE.
2. Connect the Gun Arduino, open `gun_code.ino`, and upload it.
3. Connect the Target Arduino, open `target_code.ino`, and upload it.

---

## 🎮 Gameplay Modes

Modes are controlled using a button/switch on the gun:

* Single Shot Mode
* Rapid Fire Mode
* Burst Fire Mode

---

## 🧪 Target Demo Logic

* **Ultrasonic Check:** Target board detects if player is within 2 meters and facing a valid direction. If not valid, blue LED turns on.
* **Hit Detection:** Laser hits LDRs on the target. Each LDR is mapped to an LED — when hit, the LED lights up.
* **Feedback:** Sound and vibration provide confirmation of actions.

---

## 🧼 Notes

* Use protective eyewear during testing and gameplay due to laser use.
* Ensure wiring is secure to prevent false triggers or short circuits.
* Calibrate LDR sensitivity and ultrasonic range in the code for best performance.

---
