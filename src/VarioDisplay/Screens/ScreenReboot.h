#ifndef _SCREEN_REBOOT_H
#define _SCREEN_REBOOT_H

#include "_ScreenBase.h"

class ScreenReboot : public ScreenBase
{
public:
    ScreenReboot(GxEPD2_GFX &_display, VarioLanguage *_varioLanguage) : ScreenBase(_display, _varioLanguage){};
    void toBufferRebootScreen(const char *msg);
};
#endif //_SCREEN_REBOOT_H