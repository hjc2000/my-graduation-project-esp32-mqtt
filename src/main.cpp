#include <WifiLib.h>
#include <TestMQTTClient.h>
#include <ESP32Tar.h>

void setup()
{
  Serial.begin(115200);
  new ESP32Tar();
  new TestMQTTClient();
}

void loop()
{
  vTaskDelete(nullptr);
}
