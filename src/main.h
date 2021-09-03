#ifndef main_h
#define main_h
  #include <Arduino.h>
  #include <LCDMenuLib2.h>  

  #include <SPI.h>
  #include <Wire.h>
  #include <Adafruit_GFX.h>
  #include <Adafruit_ILI9341.h> // Hardware-specific library
  
  #include "LCDML_condition.h"
  #include "LCDML_control.h"
  #include "LCDML_display_dynFunction.h"
  #include "LCDML_display_menu.h"
  #include "LCDML_display_menuFunction.h"


  // *********************************************************************
// Adafruit TFT_ST7735
// *********************************************************************
// https://learn.adafruit.com/1-8-tft-display/graphics-library

 #define _LCDML_ADAFRUIT_TEXT_COLOR       ILI9341_WHITE
 #define _LCDML_ADAFRUIT_HIGHLIGHT_COLOR  ILI9341_RED
  #define _LCDML_ADAFRUIT_BACKGROUND_COLOR ILI9341_BLACK 
  
  #define _LCDML_ADAFRUIT_FONT_SIZE   3   
  #define _LCDML_ADAFRUIT_FONT_W      (6*_LCDML_ADAFRUIT_FONT_SIZE)             // font width 
  #define _LCDML_ADAFRUIT_FONT_H      (8*_LCDML_ADAFRUIT_FONT_SIZE)             // font heigt 
  
  // settings for u8g lib and lcd
  #define _LCDML_ADAFRUIT_lcd_w       240            // lcd width
  #define _LCDML_ADAFRUIT_lcd_h       320             // lcd height
 
  
  
  // TFT display and SD card will share the hardware SPI interface.
  // Hardware SPI pins are specific to the Arduino board type and
  // cannot be remapped to alternate pins.  For Arduino Uno,
  // Duemilanove, etc., pin 11 = MOSI, pin 12 = MISO, pin 13 = SCK.
  #define TFT_CS  A4  // Chip select line for TFT display
  #define TFT_RST  9  // Reset line for TFT (or see below...)
  #define TFT_DC   A1  // Data/command line for TFT

  //#define SD_CS    4  // Chip select line for SD card
  Adafruit_ILI9341 display = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);
  


  // nothing change here
  #define _LCDML_ADAFRUIT_cols_max    (_LCDML_ADAFRUIT_lcd_w/_LCDML_ADAFRUIT_FONT_W)  
  #define _LCDML_ADAFRUIT_rows_max    (_LCDML_ADAFRUIT_lcd_h/_LCDML_ADAFRUIT_FONT_H) 

  // rows and cols 
  // when you use more rows or cols as allowed change in LCDMenuLib.h the define "_LCDML_DISP_cfg_max_rows" and "_LCDML_DISP_cfg_max_string_length"
  // the program needs more ram with this changes
  #define _LCDML_ADAFRUIT_cols        20                   // max cols
  #define _LCDML_ADAFRUIT_rows        _LCDML_ADAFRUIT_rows_max  // max rows 


  // scrollbar width
  #define _LCDML_ADAFRUIT_scrollbar_w 6  // scrollbar width  


  // old defines with new content
  #define _LCDML_DISP_cols      _LCDML_ADAFRUIT_cols
  #define _LCDML_DISP_rows      _LCDML_ADAFRUIT_rows 


// *********************************************************************
// Prototypes
// *********************************************************************
  void lcdml_menu_display();
  void lcdml_menu_clear();
  void lcdml_menu_control();
// *********************************************************************
// Objects
// *********************************************************************
  LCDMenuLib2_menu LCDML_0 (255, 0, 0, NULL, NULL); // root menu element (do not change)

/* ******************************************************************** */
// LCDMenuLib2::LCDMenuLib2(LCDMenuLib2_menu &p_r, const uint8_t p_rows, const uint8_t p_cols, LCDML_FuncPtr contentUpdate, LCDML_FuncPtr contentClear, LCDML_FuncPtr   menuControl)
//
//    callback_contentUpdate  = contentUpdate;  // callback update content
//    callback_contentClear   = contentClear;   // callback clear content
//    callback_menuControl    = menuControl;    // callback buttons
/* ******************************************************************** */
  LCDMenuLib2 LCDML(LCDML_0, _LCDML_DISP_rows, _LCDML_DISP_cols, lcdml_menu_display, lcdml_menu_clear, lcdml_menu_control);

#endif