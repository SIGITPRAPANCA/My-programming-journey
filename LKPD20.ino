//SIGIT PRAPANCA XI TAV3 
const int trigPin = 15;
const int echoPin = 2;
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup(){
  Serial.begin(115200);
  lcd.begin();
  lcd.backlight();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);}
void loop(){
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  if(distance == 0) {
    Serial.println("tidak ada objek terdeteksi.");
    lcd.setCursor(0, 0);
    lcd.print("tidak ada objek terdeteksi");
} else {
  Serial.print("jarak:");
  Serial.print(distance);
  Serial.println (" cm ");
  lcd.setCursor(0, 0);
  lcd.print("jarak :");
  lcd.print(distance);
  lcd.print(" cm");}
  delay(500);
  lcd.clear();}
