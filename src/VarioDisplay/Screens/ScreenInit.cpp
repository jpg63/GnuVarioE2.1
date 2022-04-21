#include "ScreenInit.h"

#include "bitmap/bitmap.h"
#include "anchors/anchors.h"
#include "version.h"

void ScreenInit::toBufferInitScreen(int powerCapacite, float powerTension, bool withGnuVario = false, bool wait = true)
{
    char tmpbuffer[50];

    display.fillScreen(GxEPD_WHITE);

    //affichage logo
    display.drawInvertedBitmap(ANC_BOOT_LOGO_X, ANC_BOOT_LOGO_Y, logo_gnuvario, ANC_BOOT_LOGO_W, ANC_BOOT_LOGO_H, GxEPD_BLACK);

    //affichage version
    setFont(FONT_BOOT);

    display.setTextSize(1);
    display.setCursor(ANC_BOOT_VERSION_X, ANC_BOOT_VERSION_Y);
    display.println("Version");
    sprintf(tmpbuffer, "%02d.%02d-", VERSION, SUB_VERSION);

    //affichage auteur
    display.setCursor(ANC_BOOT_AUTHOR_X, ANC_BOOT_AUTHOR_Y);
    display.print(tmpbuffer);
    display.print(AUTHOR);

    //affichage "beta"
    if (BETA_CODE > 0)
    {
        sprintf(tmpbuffer, " Beta %01d", BETA_CODE);
        display.setCursor(ANC_BOOT_BETA_X, ANC_BOOT_BETA_Y);
        display.print(tmpbuffer);
    }

    //affichage date
    sprintf(tmpbuffer, "%s", __DATE__);
    display.setCursor(ANC_BOOT_DATE_X, ANC_BOOT_DATE_Y);
    display.print(tmpbuffer);

    if (wait)
    {
        const char waittxt[] = "PLEASE WAIT...";
        display.setTextSize(1);
        int16_t tbx, tby;
        uint16_t tbw, tbh;
        display.getTextBounds(waittxt, 0, 0, &tbx, &tby, &tbw, &tbh);
        display.setCursor(ANC_BOOT_GNUVARIO_X, ANC_BOOT_GNUVARIO_Y);
        display.print(waittxt);
    }
    else
    {
        //affichage GNUVARIO
        const char gnuvario[] = "GNUVARIO-E2";
        display.setTextSize(1);
        int16_t tbx, tby;
        uint16_t tbw, tbh;
        display.getTextBounds(gnuvario, 0, 0, &tbx, &tby, &tbw, &tbh);

        if (withGnuVario)
        {
            display.setCursor(ANC_BOOT_GNUVARIO_X, ANC_BOOT_GNUVARIO_Y);
            display.print(gnuvario);
        }
        else
        {
            display.fillRect(ANC_BOOT_GNUVARIO_X, ANC_BOOT_GNUVARIO_Y - tbh, tbw, tbh, GxEPD_WHITE);
        }
    }
    sprintf(tmpbuffer, "%03d%% (%.2fV)", powerCapacite, powerTension);
    display.setCursor(ANC_BOOT_VOLT_X, ANC_BOOT_VOLT_Y);
    display.print(tmpbuffer);
}