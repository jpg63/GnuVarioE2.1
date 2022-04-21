#include "ScreenWifi.h"

#include "bitmap/bitmap.h"
#include "anchors/anchors.h"
#include "version.h"

void ScreenWifi::toBufferWifiScreen(const char *ssid, const char *ip)
{
    display.fillScreen(GxEPD_WHITE);
    setFont(FONT_WIFI);
    display.setTextColor(GxEPD_BLACK);

    display.setTextSize(2);

    display.setCursor(ANC_WIFI_TITLE_X, ANC_WIFI_TITLE_Y);
    display.print("WIFI");

    display.setTextSize(1);
    if (strcmp(ssid, "") == 0 && strcmp(ip, "") == 0)
    {
        display.setCursor(ANC_WIFI_CONNECT_X, ANC_WIFI_CONNECT_Y);

        display.print(varioLanguage->getText(TITRE_CONNECT));
    }
    else
    {
        display.setCursor(ANC_WIFI_CONNECTED_X, ANC_WIFI_CONNECTED_Y);
        display.print(varioLanguage->getText(TITRE_CONNECTA));

        display.setCursor(ANC_WIFI_SSID_X, ANC_WIFI_SSID_Y);
        display.print(ssid);

        display.setCursor(ANC_WIFI_IP_X, ANC_WIFI_IP_Y);
        display.print(ip);
    }
}