#include <LiquidCrystal.h>

// RS --> DIG 8
// EN --> DIG 9
// D4 --> DIG 4
// D5 --> DIG 5
// D6 --> DIG 6
// D7 --> DIG 7

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int parpadeo=500;
int t1=2000;
int i=0;

void setup() 
{
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Practica 2");
  delay(t1);

  for(i=3;i<=5;i++)
  {
    lcd.scrollDisplayRight();
    delay(parpadeo);
  }
  lcd.clear();
  i++;
} 

void loop() 
{
    lcd.setCursor(i,0);
    lcd.print("Practica 2");
    lcd.setCursor(0,0);
    lcd.print("2");
    delay(parpadeo);
    lcd.setCursor(i,0);
    lcd.print("          ");
    lcd.setCursor(0,0);
    lcd.print(" ");
    i++;

    lcd.setCursor(i,0);
    lcd.print("Practica 2");
    lcd.setCursor(0,0);
    lcd.print(" 2");
    delay(parpadeo);
    lcd.setCursor(i,0);
    lcd.print("          ");
    lcd.setCursor(0,0);
    lcd.print("  ");
    i++;

    lcd.setCursor(i,0);
    lcd.print("Practica 2");
    lcd.setCursor(0,0);
    lcd.print("a 2");
    delay(parpadeo);
    lcd.setCursor(i,0);
    lcd.print("          ");
    lcd.setCursor(0,0);
    lcd.print("   ");
    i++;

    lcd.setCursor(i,0);                                      
    lcd.print("Practica 2");
    lcd.setCursor(0,0);                                      
    lcd.print("ca 2");
    delay(parpadeo);
    lcd.setCursor(i,0);                                      
    lcd.print("          ");
    lcd.setCursor(0,0);                                      
    lcd.print("    ");
    i++;

    lcd.setCursor(i,0);                                      
    lcd.print("Practica 2");
    lcd.setCursor(0,0);                                      
    lcd.print("ica 2");
    delay(parpadeo);
    lcd.setCursor(i,0);                                      
    lcd.print("          ");
    lcd.setCursor(0,0);                                      
    lcd.print("     ");
    i++;
    
    lcd.setCursor(i,0);                                      
    lcd.print("Practica 2");
    lcd.setCursor(0,0);                                      
    lcd.print("tica 2");
    delay(parpadeo);
    lcd.setCursor(i,0);                                      
    lcd.print("          ");
    lcd.setCursor(0,0);                                      
    lcd.print("      ");
    i++;

    lcd.setCursor(i,0);                                      
    lcd.print("Practica 2");
    lcd.setCursor(0,0);                                      
    lcd.print("ctica 2");
    delay(parpadeo);
    lcd.setCursor(i,0);                                      
    lcd.print("          ");
    lcd.setCursor(0,0);                                      
    lcd.print("       ");
    i++;

    lcd.setCursor(i,0);                                      
    lcd.print("Practica 2");
    lcd.setCursor(0,0);                                      
    lcd.print("actica 2");
    delay(parpadeo);
    lcd.setCursor(i,0);                                      
    lcd.print("          ");
    lcd.setCursor(0,0);                                      
    lcd.print("        ");
    i++;

    lcd.setCursor(i,0);                                      
    lcd.print("Practica 2");
    lcd.setCursor(0,0);                                      
    lcd.print("ractica 2");
    delay(parpadeo);
    lcd.setCursor(i,0);                                      
    lcd.print("          ");
    lcd.setCursor(0,0);                                      
    lcd.print("         ");

    for(i=0;i<=5;i++)
    {
      lcd.setCursor(i,0);                                      
      lcd.print("Practica 2");
      delay(parpadeo);
      lcd.setCursor(i,0);                                      
      lcd.print("          ");
    }
    i++;
}
