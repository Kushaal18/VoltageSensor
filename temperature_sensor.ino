#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 15
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

DeviceAddress sensor1 = {};
DeviceAddress sensor2 = {};
DeviceAddress sensor3 = {};
DeviceAddress sensor4 = {};

void setup(void){
  Serial.begin(115200);
  sensors.begin();
}

void loop(void){ 
  sensors.requestTemperatures(); 
  
  Serial.print("Sensor 1(*C): ");
  Serial.print(sensors.getTempC(sensor1)); 
 
  Serial.print("Sensor 2(*C): ");
  Serial.print(sensors.getTempC(sensor2)); 
  
  Serial.print("Sensor 3(*C): ");
  Serial.print(sensors.getTempC(sensor3)); 

  Serial.print("Sensor 4(*C): ");
  Serial.print(sensors.getTempC(sensor4));
 
  
  delay(1000);
}
