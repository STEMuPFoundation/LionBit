#include <stem_hal.h>



void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN,OUTPUT);

  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D8,OUTPUT);
  pinMode(D9,OUTPUT);
  pinMode(D10,OUTPUT);
  pinMode(D11,OUTPUT);

}

void loop() {
 digitalWrite(LED_BUILTIN, 1-digitalRead(LED_BUILTIN));
 delay(150);

 // Analog Reading 
 Serial.print("A0 :");
 Serial.println(analogRead(A0));
 delay(500);
 Serial.print("A1 :");
 Serial.println(analogRead(A1));
 delay(500);
 Serial.print("A2 :");
 Serial.println(analogRead(A2));
 delay(500);
 Serial.print("A3 :");
 Serial.println(analogRead(A3));
 delay(500);
 Serial.print("A4 :");
 Serial.println(analogRead(A4));
 Serial.print("A5 :");
 Serial.println(analogRead(A5));

 // Digital OUTPUTS 
 Serial.println("Digital Pins HIGH");
 digitalWrite(D4,HIGH);
 digitalWrite(D5,HIGH);
 digitalWrite(D6,HIGH);
 digitalWrite(D7,HIGH);
 digitalWrite(D8,HIGH);
 digitalWrite(D9,HIGH);
 digitalWrite(D10,HIGH);
 digitalWrite(D11,HIGH);

 delay(1000);

 Serial.println("Digital Pins LOW");
  digitalWrite(D4,LOW);
 digitalWrite(D5,LOW);
 digitalWrite(D6,LOW);
 digitalWrite(D7,LOW);
 digitalWrite(D8,LOW);
 digitalWrite(D9,LOW);
 digitalWrite(D10,LOW);
 digitalWrite(D11,LOW);
 delay(1000);
 Serial.print("Hall Effect Sensor Reading : ");
int  val = hallRead();
 Serial.println(val);//to graph 
 
 
}
