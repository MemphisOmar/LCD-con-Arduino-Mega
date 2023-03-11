#include <LiquidCrystal.h>

// RS --> DIG 8
// EN --> DIG 9
// D4 --> DIG 4
// D5 --> DIG 5
// D6 --> DIG 6
// D7 --> DIG 7

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int t1=500;

void setup()
{
  lcd.begin(16,2);
  lcd.clear();
}
void loop()
{
  for (int letra=15; letra>=7; letra--)
  {
    lcd.setCursor(letra, 0);
    lcd.print("U");
    delay(t1);
    lcd.clear();
  }

  for (int letra=15; letra>=8; letra--)
  {
    lcd.setCursor(letra, 0);
    lcd.print("A");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
  }

  for (int letra=15; letra>=9; letra--)
  {
    lcd.setCursor(letra, 0);
    lcd.print("A");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
  }

  for (int letra=15; letra>=3; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("C");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");  
  }

   for (int letra=15; letra>=4; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("A");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");

      lcd.setCursor(3, 1);
      lcd.print("C");
  }

   for (int letra=15; letra>=5; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("M");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");

      lcd.setCursor(3, 1);
      lcd.print("C");
      lcd.setCursor(4, 1);
      lcd.print("A");
  }

   for (int letra=15; letra>=6; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("P");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");

      lcd.setCursor(3, 1);
      lcd.print("C");
      lcd.setCursor(4, 1);
      lcd.print("A");
      lcd.setCursor(5, 1);
      lcd.print("M");
  }

   for (int letra=15; letra>=7; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("U");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");

      lcd.setCursor(3, 1);
      lcd.print("C");
      lcd.setCursor(4, 1);
      lcd.print("A");
      lcd.setCursor(5, 1);
      lcd.print("M");
      lcd.setCursor(6, 1);
      lcd.print("P");
  }

   for (int letra=15; letra>=8; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("S");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");

      lcd.setCursor(3, 1);
      lcd.print("C");
      lcd.setCursor(4, 1);
      lcd.print("A");
      lcd.setCursor(5, 1);
      lcd.print("M");
      lcd.setCursor(6, 1);
      lcd.print("P");
      lcd.setCursor(7, 1);
      lcd.print("U");
  }

   for (int letra=15; letra>=10; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("S");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");

      lcd.setCursor(3, 1);
      lcd.print("C");
      lcd.setCursor(4, 1);
      lcd.print("A");
      lcd.setCursor(5, 1);
      lcd.print("M");
      lcd.setCursor(6, 1);
      lcd.print("P");
      lcd.setCursor(7, 1);
      lcd.print("U");
      lcd.setCursor(8, 1);
      lcd.print("S");
  }

   for (int letra=15; letra>=11; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("U");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");

      lcd.setCursor(3, 1);
      lcd.print("C");
      lcd.setCursor(4, 1);
      lcd.print("A");
      lcd.setCursor(5, 1);
      lcd.print("M");
      lcd.setCursor(6, 1);
      lcd.print("P");
      lcd.setCursor(7, 1);
      lcd.print("U");
      lcd.setCursor(8, 1);
      lcd.print("S");

      lcd.setCursor(10, 1);
      lcd.print("S");
  }

   for (int letra=15; letra>=12; letra--)
  {
    lcd.setCursor(letra, 1);
    lcd.print("R");
    delay(t1);
    lcd.clear();

      lcd.setCursor(7, 0);
      lcd.print("U");
      lcd.setCursor(8, 0);
      lcd.print("A");
      lcd.setCursor(9, 0);
      lcd.print("A");

      lcd.setCursor(3, 1);
      lcd.print("C");
      lcd.setCursor(4, 1);
      lcd.print("A");
      lcd.setCursor(5, 1);
      lcd.print("M");
      lcd.setCursor(6, 1);
      lcd.print("P");
      lcd.setCursor(7, 1);
      lcd.print("U");
      lcd.setCursor(8, 1);
      lcd.print("S");

      lcd.setCursor(10, 1);
      lcd.print("S");
      lcd.setCursor(11, 1);
      lcd.print("U");
  }
}

