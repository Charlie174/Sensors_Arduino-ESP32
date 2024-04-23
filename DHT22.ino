#include <DHTesp.h>   

DHTesp dhtSensor;

#define DHTdata 16

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dhtSensor.setup(DHTdata, DHTesp::DHT22);


}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println("done");
  TempAndHumidity data = dhtSensor.getTempAndHumidity();
  Serial.println(data.temperature);
  Serial.println(data.humidity);
  delay(500);
}
