#include <LiquidCrystal.h>

// RS --> DIG 8
// EN --> DIG 9
// D4 --> DIG 4
// D5 --> DIG 5
// D6 --> DIG 6
// D7 --> DIG 7

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

String palabra = "UAA"; // Palabra a desplazar
int longitud = palabra.length(); // Longitud de la palabra
int offset1 = 0;  // Variable para guardar el desplazamiento en la primera línea
int offset2 = 0;  // Variable para guardar el desplazamiento en la segunda línea

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  
  // Imprimir la palabra en todas las columnas de la primera línea
  for (int i = 0; i < 16; i++) {
    lcd.clear();
    lcd.setCursor(i, 0);
    lcd.print(palabra);
    delay(500);
  }
  
  // Imprimir la palabra en todas las columnas de la segunda línea
  for (int i = 0; i < 16; i++) {
    lcd.clear();
    lcd.setCursor(i, 1);
    lcd.print(palabra);
    delay(500);
  }
}
