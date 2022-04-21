#ifndef _SCREEN_INIT_H
#define _SCREEN_INIT_H

#include "_ScreenBase.h"

class ScreenInit : public ScreenBase
{
public:
    ScreenInit(GxEPD2_GFX &_display, VarioLanguage *_varioLanguage) : ScreenBase(_display, _varioLanguage){};
    void toBufferInitScreen(int powerCapacite, float powerTension, bool withGnuVario, bool wait);
};
#endif //_SCREEN_INIT_H