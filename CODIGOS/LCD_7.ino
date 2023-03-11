#include <LiquidCrystal.h>

// RS --> DIG 8
// EN --> DIG 9
// D4 --> DIG 4
// D5 --> DIG 5
// D6 --> DIG 6
// D7 --> DIG 7

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int treb=500;
int t1=2000;

void setup()
{
  lcd.clear();  
  lcd.begin(16, 2);
  lcd.setCursor(3, 0);
  lcd.print("Practica 2");
  delay(t1);

  for (int i=3; i<6; i++) 
  {
    lcd.scrollDisplayRight();
    delay(treb);
  }

  for (int i = 0; i < 6; i++)
  {
    lcd.scrollDisplayLeft();
    delay(treb);
  }
}

void loop() 
{
  for (int i = 0; i < 6; i++)
  {
    lcd.scrollDisplayRight();
    delay(treb);
  }

  for (int i = 0; i < 6; i++)
  {
    lcd.scrollDisplayLeft();
    delay(treb);
  }
}