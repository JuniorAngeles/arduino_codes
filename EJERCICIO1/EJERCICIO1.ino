int LED1 = 5;
int LED2 = 6;
int LED3= 7;
int LED4= 8;

void setup() {
Serial.begin(9600);


}

void loop() {
//PRENDE PIN 8 POR 200 MILISEGUNDO
digitalWrite(LED4,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED1,LOW);
delay(500);

//prende pin 7
digitalWrite(LED4,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED1,LOW);
delay(500);

//prende pin 6
digitalWrite(LED4,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED1,LOW);
delay(500);

//prende pin 5
digitalWrite(LED4,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED1,HIGH);
delay(500);
}
