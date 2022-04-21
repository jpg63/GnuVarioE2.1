#include "ScreenReboot.h"

#include "bitmap/bitmap.h"
#include "anchors/anchors.h"
#include "version.h"

void ScreenReboot::toBufferRebootScreen(const char *msg = "")
{
    display.fillScreen(GxEPD_WHITE);

    //affichage logo
    display.drawInvertedBitmap(ANC_REBOOT_LOGO_X, ANC_REBOOT_LOGO_Y, logo_gnuvario, ANC_REBOOT_LOGO_W, ANC_REBOOT_LOGO_H, GxEPD_BLACK);

    //affichage version
    setFont(FONT_REBOOT);
    display.setTextSize(1);

    display.setCursor(ANC_REBOOT_NAME_X, ANC_REBOOT_NAME_Y);
    display.print("Vario-E");

    display.setCursor(ANC_REBOOT_MSG_X, ANC_REBOOT_MSG_Y);
    if (strcmp(msg, "") == 0)
        display.print(varioLanguage->getText(TITRE_REDEMAR)); //"Redemarrage");
    else
        display.print(msg);

    display.setCursor(ANC_REBOOT_ONGOING_X, ANC_REBOOT_ONGOING_Y);
    display.print(varioLanguage->getText(TITRE_ENCOURS)); //"en cours");
}