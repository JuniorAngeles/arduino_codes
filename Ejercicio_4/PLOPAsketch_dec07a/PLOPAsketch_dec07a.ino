int rojo1= 3;
int amarillo1= 4;
int verde1= 5;
int rojo2= 6;
int amarillo2= 7;
int verde2= 8;

void setup() {
  
Serial.begin(9600)
}

void loop() {
  digitalWrite(rojo1, HIGH);
  digitalWrite(verde2, HIGH);
  delay(3000);
    digitalWrite(rojo1, LOW);
  digitalWrite(amarillo2, LOW);
  delay(500);
  digitalWrite(verde1, HIGH);
  digitalWrite(rojo2, HIGH);
  delay(3000);
  digitalWrite(amarillo1, LOW);
  digitalWrite(rojo2, LOW);
  delay(500);

}
