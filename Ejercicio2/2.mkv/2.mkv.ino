int cadenaleds[]={5,6,7,8};
int tiempo=200;
int n=0;



void setup() {
  Serial.begin(9600);

}

void loop() {
  
for(n=0;n<4; n++){
  digitalWrite(cadenaleds[n], HIGH);
  delay(tiempo);
  }
}
