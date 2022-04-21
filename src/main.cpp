#include <Arduino.h>
//#include <Adafruit_I2CDevice.h>

#include "VarioManager.h"

const TickType_t delayT1000 = pdMS_TO_TICKS(1000);

VarioManager vm;

void setup()
{
  Serial.begin(115200);

  //initialisation du matériel
  if (!vm.init())
  {
    while (1)
    {
      vTaskDelay(delayT1000);
    }
  }
}

void loop()
{
  delay(10);
}