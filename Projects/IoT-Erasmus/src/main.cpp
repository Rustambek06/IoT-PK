#include <Arduino.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp;
// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  if (!bmp.begin(0x76)) {
    Serial.println("Could not find BMP");
    while(1);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Temperature = ");
  Serial.print(bmp.readTemperature());
  Serial.println(" *C");

  Serial.print("Pressure = ");
  Serial.print(bmp.readPressure());
  Serial.println(" Pa");

  Serial.println("");

  delay(2000);
}
