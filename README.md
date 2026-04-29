# ☀️ Automated Solar Panel System

## 📌 Introduction

### 🔍 What is it?
A smart prototype that automatically rotates a solar panel to follow a concentrated light source (like a torch).

### 🎯 Goal
To demonstrate how solar tracking technology keeps a panel aligned with a light source to capture maximum energy, unlike fixed panels.

### 🔦 Why a torch?
Natural sunlight is too diffused for a small-scale prototype. A focused light beam clearly shows how the system reacts and adjusts in real-time.

---

## ⚙️ Project Description

### 🧠 The Setup
- **Arduino UNO** as the controller (brain)
- **Two LDRs (Light Dependent Resistors)** to detect light intensity
- **Servo Motor** to rotate the solar panel
- Dual-axis tracking (horizontal + vertical)

### 🔄 How it Works
The Arduino continuously reads data from both LDRs:
- If one sensor detects more light than the other,
- The Arduino sends signals to the servo motor,
- The motor rotates the panel until both sensors receive equal light (balanced position).

### ⚠️ Challenges Faced
- Reducing sensor noise to prevent servo jittering
- Maintaining proper balance in the panel frame so the motor works efficiently

---

## 🧩 Components

- Arduino Board (UNO)
- LDR (Light Dependent Resistors)
- Servo Motor
- Breadboard
- Jumper Wires
- Resistors

---

## 🚀 Conclusion

This project represents the future of solar energy efficiency.
Real use: As load shedding increasing in Bangladesh,it can be used on home rooftops or in big solar farms to get the most power out of every hour of light, making clean energy cheaper and more effective for everyone.

---

## 📷
<img width="958" height="640" alt="WhatsApp Image 2026-04-29 at 11 45 56 AM (1)" src="https://github.com/user-attachments/assets/d3699adb-de57-4a24-b7be-fa8beec43b5d" />

<img width="1098" height="1200" alt="WhatsApp Image 2026-04-29 at 11 45 56 AM" src="https://github.com/user-attachments/assets/76958098-5d0f-4ede-88c2-f02648738e2c" />


---



---

## 🧑‍💻 Authors
Akhtaruzzaman Jamil
Sabbir Ahmmed
