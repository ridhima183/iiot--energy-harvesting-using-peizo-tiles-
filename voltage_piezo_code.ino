#define BLYNK_TEMPLATE_ID "TMPL3q_9oN3uv"
#define BLYNK_TEMPLATE_NAME "Voltagemonitor"
#define BLYNK_AUTH_TOKEN "vee5xtz-06pMvuoWLrT8xVD1UfDskC_p"

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <BlynkSimpleEsp32.h>

// Voltage sensor pins
#define VOLT_SENSOR1_PIN 34
#define VOLT_SENSOR2_PIN 35

// Wi-Fi credentials
char ssid[] = "CMF";
char pass[] = "1234567890";

// Initialize I2C LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  lcd.begin();
  lcd.backlight();
  
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();

  float voltage1 = analogRead(VOLT_SENSOR1_PIN) * (3.3 / 4095.0) * 2;
  float voltage2 = analogRead(VOLT_SENSOR2_PIN) * (3.3 / 4095.0) * 2;

  lcd.setCursor(0, 0);
  lcd.print("V1: ");
  lcd.print(voltage1, 2);
  lcd.print(" V");

  lcd.setCursor(0, 1);
  lcd.print("V2: ");
  lcd.print(voltage2, 2);
  lcd.print(" V");

  Blynk.virtualWrite(V1, voltage1);
  Blynk.virtualWrite(V2, voltage2);

  delay(500);
}
