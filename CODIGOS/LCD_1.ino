#include <LiquidCrystal.h>

// RS --> DIG 8
// EN --> DIG 9
// D4 --> DIG 4
// D5 --> DIG 5
// D6 --> DIG 6
// D7 --> DIG 7

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void parpadeo();

// Variables tiempos
int tletras=2000;   //Tiempo entre letras
int tint=3000;      //Tiempo todas las letras
int tparp=500;      //Tiempo Parpadeos
int toff=2000;      //Tiempo Pantalla Apagada al final

void setup()
{
  lcd.begin(16,2);
}

void loop() 
{
  lcd.setCursor(0,0);
  lcd.print("P");
  delay(tletras);

  lcd.setCursor(15,0);
  lcd.print("M");
  delay(tletras);

  lcd.setCursor(0,1);
  lcd.print("I");
  delay(tletras);

  lcd.setCursor(15,1);
  lcd.print("A");

  delay(tint);

  parpadeo();

  lcd.clear();
  delay(toff);
}

void parpadeo()
{
  for(int i=0; i<4; i++)
  {
    delay(tparp);
    lcd.clear();
    delay(tparp);
    lcd.setCursor(0,0);
    lcd.print("P");
    lcd.setCursor(15,0);
    lcd.print("M");
    lcd.setCursor(0,1);
    lcd.print("I");
    lcd.setCursor(15,2);
    lcd.print("A");
  }
}