// =====================================================================
//
// CONTROL v2.2.0
//
// =====================================================================
// *********************************************************************
// Features 
// - max 6 Buttons with special names (enter, quit, up, down, left, right)
// new Features on v2.2.0
// - max 64 Events, this could be a button ore something (Counter 0 - 63) 
// - standard buttons and events can be used at the same time
// - Event 0 - 3 can be used with a menu callback function (when set this event, the function is called)
// - The range from 0 - 3 can be changed in LCDMenuLib2.h
// Attention!!
// - events have to be reset manual over LCDML.CE_reset(number) ore LCDML.CE_resetAll();
// - they will not be reseted from the menu library

#ifndef LCDML_control_h
#define LCDML_control_h
  #include <Arduino.h>
    #include "main.h"

// *********************************************************************
// content:
// (0) Control over serial interface  with asdw_e_q
// (1) Control over one analog input
// (2) Control over 4 - 6 digital input pins (internal pullups enabled)
// (3) Control over encoder [third party lib] (Download: https://github.com/PaulStoffregen/Encoder)
// (4) Control with Keypad  [third party lib] (Download: http://playground.arduino.cc/Main/KeypadTutorial )
// (5) Control with an IRMP remote [third party lib] (Download: https://github.com/ukw100/IRMP )
// (6) Control with a joystick
// (7) Control over I2C PCF8574
// *********************************************************************


#define _LCDML_CONTROL_cfg      3
void lcdml_menu_control(void);

#endif