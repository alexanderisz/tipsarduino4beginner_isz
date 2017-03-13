#include <dht.h>
dht DHT;

void setup() 
{
 Serial.begin(9600);
}

void loop() 
{
  int readData = DHT.read22(A0);
  float h = DHT.humidity;
  float t = DHT.temperature; 
  Serial.println(h);
  Serial.println(t);
}
