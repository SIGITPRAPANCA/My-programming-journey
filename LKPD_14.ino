//SIGIT PRAPANCA 
//XI TAV 3
#include<Wire.h>
#include<SPI.h>
#include<Adafruit_BMP280.h>
Adafruit_BMP280 bmp;
void setup(){
  Serial.begin(9600);
  Serial.println(F("BMP280 test"));
  if(!bmp.begin(0x76)){
  Serial.println(F("Could not find a valid BMP280 sensor, check wiring!"));
  while (1); }
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,
                  Adafruit_BMP280::SAMPLING_X2,
                  Adafruit_BMP280::SAMPLING_X16,
                  Adafruit_BMP280::FILTER_X16,
                  Adafruit_BMP280::STANDBY_MS_500);}
void loop(){
  float Suhu = bmp.readTemperature();
  float Tekanan = bmp.readTemperature();
  Serial.print(F("Suhu = "));
  Serial.print(Suhu);
  Serial.println(" °C");
  Serial.print(F("Tekanan = "));
  Serial.print(Tekanan);
  Serial.println(" Pa");
  Serial.println();
  delay(1000);}