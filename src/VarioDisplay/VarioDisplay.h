#ifndef _VARIO_DISPLAY_H
#define _VARIO_DISPLAY_H

#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"
#include "freertos/task.h"

// Les différents écrans
#include "Screens/ScreenInit.h"
#include "Screens/ScreenWifi.h"
#include "Screens/ScreenReboot.h"
#include "Screens/ScreenMessage.h"

class VarioManager;

#define SCREEN_STACK_SIZE 2000
#define SCREEN_CORE 1
#define SCREEN_PRIORITY 10

class VarioDisplay
{
private:
    static TaskHandle_t screenTaskHandler;
    static void screenTask(void *parameter);
    const TickType_t delayT100 = pdMS_TO_TICKS(100);
    VarioManager *vm;
    ScreenInit *screenInit = NULL;
    ScreenWifi *screenWifi = NULL;
    ScreenReboot *screenReboot = NULL;
    ScreenMessage *screenMessage = NULL;
    void updateScreen(void);

public:
    VarioDisplay(VarioManager *vm);
    static SemaphoreHandle_t screenMutex;
    void init();
    void displayPageInit(boolean wait);
    void displayPageWifi(const char *ssid, const char *ip);
    void displayPageReboot(const char *msg);
    void displayPageMessage(const char *msg);
};
#endif //_VARIO_DISPLAY_H