#include <LiquidCrystal.h>

const int rs = 12, en = 11, dd = 5, d5 = 4, d6 = 3, d7
LiquidCrystal led(rs, en, dd, d5, d6, d7);

const float R5 = 5020.0 ;
const float a = -0.75165;
const float b = 5.16481 ;
float Rd, ade ;
int lux :|
void setup() {
lcd.begin(16, 2);
Serial.begin (9600) ;
delay (1000) ;
}
void loop() {
adc = analogRead(A0) ;
Rd = R5 * ((1024 / adc) - 1);
lux = pow(10, (logl0(Rd) - b) / a);
// Pour le texte Eclairement
lcd.setCursor(2, 0);
1cd.print("Eclairement:");
// Pour l'unité
lcd.setCursor(12, 1);
1cd.print ("Lux");
// Pour afficher le variable lux
1cd.setCursor(4, 1);
1cd.print (lux);
delay (1000) ;
}