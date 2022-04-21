#include "ScreenMessage.h"

#include "bitmap/bitmap.h"
#include "anchors/anchors.h"
#include "version.h"

void ScreenMessage::toBufferMessageScreen(const char *msg, boolean withMsg = true)
{
    display.fillScreen(GxEPD_WHITE);

    //affichage logo
    display.drawInvertedBitmap(ANC_MESSAGE_LOGO_X, ANC_MESSAGE_LOGO_Y, logo_gnuvario, ANC_MESSAGE_LOGO_W, ANC_MESSAGE_LOGO_H, GxEPD_BLACK);

    //affichage version
    setFont(FONT_MESSAGE);
    display.setTextSize(1);

    display.setCursor(ANC_MESSAGE_NAME_X, ANC_MESSAGE_NAME_Y);
    display.print("GNUVARIO-E");

    int16_t tbx, tby;
    uint16_t tbw, tbh;                                        // boundary box window
    display.getTextBounds(msg, 0, 0, &tbx, &tby, &tbw, &tbh); // it works for origin 0, 0, fortunately (negative tby!)
    // center bounding box by transposition of origin:
    uint16_t x = ((display.width() - tbw) / 2) - tbx;
    if (withMsg)
    {
        display.setCursor(x, ANC_MESSAGE_MSG_Y);
        display.print(msg);
    }
    else
    {
        display.fillRect(x, ANC_MESSAGE_MSG_Y - tbh, tbw, tbh, GxEPD_WHITE);
    }
}