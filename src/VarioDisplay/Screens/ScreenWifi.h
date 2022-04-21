#ifndef _SCREEN_WIFI_H
#define _SCREEN_WIFI_H

#include "_ScreenBase.h"
#include "GxEPD2_GFX.h"

class ScreenWifi : public ScreenBase
{
public:
    ScreenWifi(GxEPD2_GFX &_display, VarioLanguage *_varioLanguage) : ScreenBase(_display, _varioLanguage){};
    void toBufferWifiScreen(const char *ssid, const char *ip);
};
#endif //_SCREEN_WIFI_H