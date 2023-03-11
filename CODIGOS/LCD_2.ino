#include <LiquidCrystal.h>

// RS --> DIG 8
// EN --> DIG 9
// D4 --> DIG 4
// D5 --> DIG 5
// D6 --> DIG 6
// D7 --> DIG 7

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void parpadeo();

//Variables tiempos
int tstart=3000;
int tparp=910;
int tend=3000;

void setup() 
{
  lcd.begin(16,2);
  lcd.setCursor(6,0);
  lcd.print("PMIA");
}

void loop()
{
  delay(tstart);
  lcd.setCursor(6,1);
  lcd.print("UAAS");
  parpadeo();
  lcd.setCursor(6,1);
  lcd.print("                    ");
  delay(tend);
}

void parpadeo()
{
  for(int i=0; i<5; i++)
  {
    delay(tparp);
    lcd.setCursor(6,1);
    lcd.print("                    ");
    delay(tparp);
    lcd.setCursor(6,1);
    lcd.print("UAAS");    
  }
}