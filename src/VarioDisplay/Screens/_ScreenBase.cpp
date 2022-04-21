#include "_ScreenBase.h"

#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/FreeSansBold12pt7b.h>

#define FONT_SIZE9P 9
#define FONT_SIZE12P 12

void ScreenBase::setFont(uint8_t font)
{
    switch (font)
    {
    case FONT_SIZE9P:
        display.setFont(&FreeSansBold9pt7b);
        break;
    case FONT_SIZE12P:
        display.setFont(&FreeSansBold12pt7b);
        break;
    default:
        break;
    }
}