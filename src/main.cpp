#include "WifiLib.h"
#include "TestMQTTClient.h"
#include "Esp32Tar.h"

void setup()
{
  Serial.begin(115200);
  new Esp32Tar();
  new TestMQTTClient();
}

void loop()
{
  vTaskDelete(nullptr); // loop函数不需要用到，直接释放，避免浪费资源
}
