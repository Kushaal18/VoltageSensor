#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 5
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(){
  Serial.begin(9600);
  sensors.begin();
}
 void loop(){
  sensors.requestTemperatures();
  Serial.print("Temperature in celsius:");
  Serial.println(sensors.getTempCByIndex(0));
  delay(1000);
 }
