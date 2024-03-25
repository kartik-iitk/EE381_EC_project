#include <LiquidCrystal.h>
#include <Ultrasonic.h>

const int flexPin = A5;
const int micPin = A0;
const int buzzerPin = 10;             // Buzzer connected to D10
const float knownResistor = 22000.0;  // To be connected in flexPin and ground

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

Ultrasonic ultrasonic(9, 8);  // Ultrasonic sensor pins (TRIG, ECHO)

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    lcd.begin(16, 2);          // set up the LCD's number of columns and rows
    lcd.print("Study Buddy");  // Print to the first line of the LCD.
    pinMode(flexPin, INPUT);
    pinMode(micPin, INPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    int flexSensorReading = analogRead(flexPin);
    float flexSensorVoltage = flexSensorReading * (5.0 / 1023.0);
    float unknownResistor =
        (5.0 - flexSensorVoltage) * knownResistor / flexSensorVoltage;
    long range = ultrasonic.read(CM);  // Get distance from ultrasonic sensor

    int micValue = analogRead(micPin);
    float micvoltage = micValue * (5.0 / 1023.0);
    float decibels =
        20 *
        log10(micvoltage / 0.00631);  // 0.00631 volts = 1 Pa (ref. intensity)

    // Serial Monitor Print
    Serial.print("Distance: ");
    Serial.print(range);
    Serial.println(" cm");

    Serial.print("Noise: ");
    Serial.print(decibels);
    Serial.println(" dB");

    Serial.print("Resistance: ");
    Serial.print(unknownResistor);
    Serial.println(" Ohms");

    // LCD Print
    lcd.setCursor(0, 0);  // Set the cursor to column 0, line 0
    lcd.print("Distance = ");
    lcd.print(range);
    lcd.print(" cm");

    lcd.setCursor(0, 1);  // Set the cursor to column 0, line 1
    lcd.print("Noise = ");
    lcd.print(decibels);
    lcd.print(" db");

    // lcd.print("R = ");
    // lcd.print(unknownResistor);
    // lcd.print(" Ohms");

    // If distance is less than 15 cm, play the buzzer
    if (range < 15) {
        tone(buzzerPin, 1000);  // Play tone on buzzer
    } else {
        noTone(buzzerPin);  // Stop playing tone
    }
    delay(1000);  // Delay for 1 second for the buzzer
}