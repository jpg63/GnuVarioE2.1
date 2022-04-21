#ifndef _SCREEN_BASE_H
#define _SCREEN_BASE_H

#include "GxEPD2_GFX.h"
#include "VarioLanguage/VarioLanguage.h"

class ScreenBase
{
protected:
    GxEPD2_GFX &display;
    VarioLanguage *varioLanguage;
    void setFont(uint8_t font);

public:
    ScreenBase(GxEPD2_GFX &_display, VarioLanguage *_varioLanguage) : display(_display), varioLanguage(_varioLanguage){};
};

#endif //_SCREEN_BASE_H