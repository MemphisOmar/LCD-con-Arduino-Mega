#include<LiquidCrystal.h>

// RS --> DIG 8
// EN --> DIG 9
// D4 --> DIG 4
// D5 --> DIG 5
// D6 --> DIG 6
// D7 --> DIG 7

// Variables tiempos
int tnum=3000;
int t1=2000;

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void conteo1();
//void conteo2();

void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  conteo1();
  //conteo2();
  delay(tnum);
  lcd.clear();
  delay(t1);
}

void conteo1()
{
  int col=0;
  int num=0;
  
  for(int i=0; i<10; i++)
  {
    lcd.setCursor(col,0);
    lcd.print(num);
    num++;
    col++;
    delay(1000);
  }
}

