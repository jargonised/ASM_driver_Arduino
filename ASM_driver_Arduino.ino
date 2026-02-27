#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define M_1_ON_CONTROL PE1
#define M_1_LEFT_CONTROL PE0

#define M_2_ON_CONTROL PE5
#define M_2_LEFT_CONTROL PE4

#define M_3_ON_CONTROL PE3
#define M_3_LEFT_CONTROL PG5

#define M_4_ON_CONTROL PH4
#define M_4_LEFT_CONTROL PH3

#define M_5_ON_CONTROL PH6
#define M_5_LEFT_CONTROL PH5

#define M_6_ON_CONTROL PB5
#define M_6_LEFT_CONTROL PB4

#define M_7_ON_CONTROL PB7
#define M_7_LEFT_CONTROL PB6

#define M_8_ON_CONTROL PJ0
#define M_8_LEFT_CONTROL PJ1

#define M_9_ON_CONTROL PH0
#define M_9_LEFT_CONTROL PH1

#define M_10_ON_CONTROL PD2
#define M_10_LEFT_CONTROL PD3



LiquidCrystal_I2C lcd(0x20, 16, 2); // Set the LCD address to default 0x20 for a 16 chars and 2 line display




void setup()
{
  lcd.init();

  lcd.backlight(); // Turn the backlight on




}

void loop()
{


}
