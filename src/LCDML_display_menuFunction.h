/* ===================================================================== *
 *                                                                       *
 * Menu Callback Function                                                *
 *                                                                       *
 * ===================================================================== *
 *
 * EXAMPLE CODE:
 */
#ifndef LCDML_display_menuFunction_h
#define LCDML_display_menuFunction_h

  #include <Arduino.h>
    #include "main.h"

void mFunc_information(uint8_t param);
void mFunc_timer_info(uint8_t param);
void mFunc_p2(uint8_t param);
void mFunc_screensaver(uint8_t param);
void mFunc_back(uint8_t param);
void mFunc_goToRootMenu(uint8_t param);
void mFunc_jumpTo_timer_info(uint8_t param);
void mFunc_para(uint8_t param);

#endif