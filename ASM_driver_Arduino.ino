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

// Set motor controlling pins as outputs
void setPortDirection()
{
  // For Motor_1 (PE1, PE0)
  DDRE |= (1 << PE1) | (1 << PE0);
  // For Motor_2 (PE5, PE4)
  DDRE |= (1 << PE5) | (1 << PE4);
  // For Motor_3 (PE3, PG5)
  DDRE |= (1 << PE3);
  DDRG |= (1 << PG5);
  // For Motor_4 (PH4, PH3)
  DDRH |= (1 << PH4) | (1 << PH3);
  // For Motor_5 (PH6, PH5)
  DDRH |= (1 << PH6) | (1 << PH5);
  // For Motor_6 (PB5, PB4)
  DDRB |= (1 << PB5) | (1 << PB4);
  // For Motor_7 (PB7, PB6)
  DDRB |= (1 << PB7) | (1 << PB6);
  // For Motor_8 (PJ0, PJ1)
  DDRJ |= (1 << PJ0) | (1 << PJ1);
  // For Motor_9 (PH0, PH1)
  DDRH |= (1 << PH0) | (1 << PH1);
  // For Motor_10 (PD2, PD3)
  DDRD |= (1 << PD2) | (1 << PD3);
}



void setup()
{
  lcd.init();

  lcd.backlight(); // Turn the backlight on




}

void loop()
{


}
