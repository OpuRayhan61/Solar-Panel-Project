#include <Servo.h>

Servo horizontal;
Servo vertical;

int servohori = 90;
int servovert = 45;

int ldrlt = A0; // Top Left
int ldrrt = A3; // Top Right
int ldrld = A1; // Bottom Left
int ldrrd = A2; // Bottom Right

int tol = 20;

void setup() {
  Serial.begin(9600);

  horizontal.attach(9);
  vertical.attach(10);

  horizontal.write(servohori);
  vertical.write(servovert);

  delay(1000);
}

void loop() {
  int lt = analogRead(ldrlt);
  int rt = analogRead(ldrrt);
  int ld = analogRead(ldrld);
  int rd = analogRead(ldrrd);

  int avt = (lt + rt) / 2;
  int avd = (ld + rd) / 2;
  int avl = (lt + ld) / 2;
  int avr = (rt + rd) / 2;

  int dvert = avt - avd;
  int dhoriz = avl - avr;

  Serial.print("TL:");
  Serial.print(lt);
  Serial.print(" TR:");
  Serial.print(rt);
  Serial.print(" BL:");
  Serial.print(ld);
  Serial.print(" BR:");
  Serial.print(rd);
  Serial.print(" | dV:");
  Serial.print(dvert);
  Serial.print(" dH:");
  Serial.print(dhoriz);
  Serial.print(" | V:");
  Serial.print(servovert);
  Serial.print(" H:");
  Serial.println(servohori);

  if (dvert > tol) {
    servovert++;
  } else if (dvert < -tol) {
    servovert--;
  }

  if (dhoriz > tol) {
    servohori--;
  } else if (dhoriz < -tol) {
    servohori++;
  }

  servovert = constrain(servovert, 1, 100);
  servohori = constrain(servohori, 5, 175);

  vertical.write(servovert);
  horizontal.write(servohori);

  delay(100);
}
