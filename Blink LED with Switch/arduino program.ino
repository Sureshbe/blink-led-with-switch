#include<LiquidCrystal.h>
const int rs=12, en=11, d4=10, d5=9, d6=8, d7=7;
LiquidCrystal lcd(12,11,10,9,8,7);
void setup() {
pinMode(12,OUTPUT);
pinMode(2,INPUT);// put your setup code here, to run once:

}

void loop() {
  int val=digitalRead(2);
  Serial.println(val);
  if (val == 1)
  {
    digitalWrite(12,OUTPUT);
    lcd.print("Suresh");
  }
  if (val == 0)
  {
    digitalWrite(12,LOW);
  }
  // put your main code here, to run repeatedly:
}
