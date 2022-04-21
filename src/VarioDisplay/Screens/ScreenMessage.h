#ifndef _SCREEN_MESSAGE_H
#define _SCREEN_MESSAGE_H

#include "_ScreenBase.h"

class ScreenMessage : public ScreenBase
{
public:
    ScreenMessage(GxEPD2_GFX &_display, VarioLanguage *_varioLanguage) : ScreenBase(_display, _varioLanguage){};
    void toBufferMessageScreen(const char *msg, boolean withMsg);
};
#endif //_SCREEN_MESSAGE_H