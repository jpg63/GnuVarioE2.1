#include "VarioDisplay.h"
#define ENABLE_GxEPD2_GFX 1
#include <GxEPD2_BW.h>

// select the display class and display driver class in the following file (new style):
#include "GxEPD2_display_selection_new_style.h"

#include "version.h"
#include "VarioManager.h"
#include "VarioDebug/VarioDebug.h"

SemaphoreHandle_t VarioDisplay::screenMutex;
TaskHandle_t VarioDisplay::screenTaskHandler;

/**
 * Initialisetion des différents objets 
 */
VarioDisplay::VarioDisplay(VarioManager *lvm)
{
    vm = lvm;
    screenInit = new ScreenInit(display, vm->varioLanguage);
}

/**
* Initialisation de l'affichage
*/
void VarioDisplay::init()
{
    screenMutex = xSemaphoreCreateBinary();
    xSemaphoreGive(VarioDisplay::screenMutex);

    VARIO_PROG_DEBUG_PRINTLN("TaskDisplay started");
    xTaskCreatePinnedToCore(screenTask, "TaskDisplay", SCREEN_STACK_SIZE, NULL, SCREEN_PRIORITY, &screenTaskHandler, SCREEN_CORE);

    display.init();
    display.setRotation(0);
    display.setTextColor(GxEPD_BLACK);

    //premier affichage full
    display.setFullWindow();
    display.firstPage();
    do
    {
        display.fillScreen(GxEPD_WHITE);
    } while (display.nextPage());

    vm->setCurrentPage(STATE_PAGE_INIT);
}

/**
 * Tache d'affichage
 */
void VarioDisplay::screenTask(void *parameter)
{
    while (true)
    {
        /* wait */
        xTaskNotifyWait(0, 0, NULL, portMAX_DELAY);

        /* launch interrupt */
        xSemaphoreTake(screenMutex, portMAX_DELAY);
        VARIO_PROG_DEBUG_PRINTLN("screen refresh");
        display.setFullWindow();
        display.display(true); // partial update

        display.powerOff();
        xSemaphoreGive(screenMutex);
    }
}

/**
 * Méthode de déclenchement du raffraichissement
 */
void VarioDisplay::updateScreen(void)
{
    xTaskNotify(VarioDisplay::screenTaskHandler, 0, eNoAction);
}

/**
 * Page init
 */
void VarioDisplay::displayPageInit(boolean wait = true)
{
    uint32_t lastDisplayTime = 0;
    uint8_t compteur = 0;
    bool withGnuVario = true;

    if (wait)
    {
        if (xSemaphoreTake(screenMutex, portMAX_DELAY) == pdTRUE)
        {
            screenInit->toBufferInitScreen(vm->varioPower->getCapacite(), vm->varioPower->getTension(), withGnuVario, true);
            xSemaphoreGive(screenMutex);
            updateScreen();
        }
        return;
    }
    while (compteur < 5)
    {
        // si un bouton est pressé durant l'init, on bascule dans le mode correspondant (wifi ou calibration)
        if (vm->getCurrentPageState() != STATE_PAGE_INIT && vm->getCurrentPageState() != STATE_PAGE_INIT_DONE)
        {
            return;
        }

        // clignote toutes les secondes
        if ((millis() - lastDisplayTime) >= 1000)
        {
            if (xSemaphoreTake(screenMutex, portMAX_DELAY) == pdTRUE)
            {
                screenInit->toBufferInitScreen(vm->varioPower->getCapacite(), vm->varioPower->getTension(), withGnuVario, false);
                withGnuVario = !withGnuVario;
                lastDisplayTime = millis();
                compteur++;
                xSemaphoreGive(screenMutex);
                updateScreen();
            }
        }
        // give time to other tasks
        vTaskDelay(delayT100);
    }
}

void VarioDisplay::displayPageWifi(const char *ssid, const char *ip)
{
    if (screenWifi == NULL)
    {
        screenWifi = new ScreenWifi(display, vm->varioLanguage);
    }

    if (xSemaphoreTake(screenMutex, portMAX_DELAY) == pdTRUE)
    {
        VARIO_PROG_DEBUG_PRINTLN("displayPageWifi semaphore take");
        screenWifi->toBufferWifiScreen(ssid, ip);

        xSemaphoreGive(screenMutex);
        updateScreen();
    }
}

void VarioDisplay::displayPageReboot(const char *msg)
{
    if (screenReboot == NULL)
    {
        screenReboot = new ScreenReboot(display, vm->varioLanguage);
    }

    if (xSemaphoreTake(screenMutex, portMAX_DELAY) == pdTRUE)
    {
        screenReboot->toBufferRebootScreen(msg);

        xSemaphoreGive(screenMutex);
        updateScreen();
    }
}

void VarioDisplay::displayPageMessage(const char *msg)
{
    uint32_t lastDisplayTime = 0;
    uint8_t compteur = 0;
    boolean withMessage = true;

    if (screenMessage == NULL)
    {
        screenMessage = new ScreenMessage(display, vm->varioLanguage);
    }

    while (compteur < 5)
    {
        if (vm->getCurrentPageState() != STATE_PAGE_CALIBRATE && vm->getCurrentPageState() != STATE_PAGE_CALIBRATION)
        {
            return;
        }

        // clignote toutes les secondes
        if ((millis() - lastDisplayTime) >= 1000)
        {
            if (xSemaphoreTake(screenMutex, portMAX_DELAY) == pdTRUE)
            {
                screenMessage->toBufferMessageScreen(msg, withMessage);

                withMessage = !withMessage;
                lastDisplayTime = millis();
                compteur++;
                xSemaphoreGive(screenMutex);
                updateScreen();
            }
        }

        // give time to other tasks
        vTaskDelay(delayT100);
    }
}
