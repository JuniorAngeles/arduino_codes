int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;

void setup()
{
    Serial.begin(9600);
}

void encenderLeds()
{

    digitalWrite(pin4, HIGH);
    delay(1000);
    digitalWrite(pin4, LOW);
    delay(1000);
    digitalWrite(pin4, HIGH);
    delay(1000);
    digitalWrite(pin4, LOW);
    delay(1000);
    digitalWrite(pin4, HIGH);
    delay(1000);
    digitalWrite(pin4, LOW);
    delay(1000);
    digitalWrite(pin4, HIGH);
    delay(1000);
    digitalWrite(pin4, LOW);
    delay(1000);
    // led 4
    digitalWrite(pin3, HIGH);
    delay(1500);
    digitalWrite(pin3, LOW);
    delay(1500);
    digitalWrite(pin3, HIGH);
    delay(1500);
    digitalWrite(pin3, LOW);
    delay(1500);
    digitalWrite(pin3, HIGH);
    delay(1500);
    digitalWrite(pin3, LOW);
    delay(1500);
    // Led3
    digitalWrite(pin2, HIGH);
    delay(2000);
    digitalWrite(pin2, LOW);
    delay(2000);
    digitalWrite(pin2, HIGH);
    delay(2000);
    digitalWrite(pin2, LOW);
    delay(2000);
    // Led2
    digitalWrite(pin1, HIGH);
    delay(2500);
    digitalWrite(pin1, LOW);
    delay(2500);
}

void reversa()
{
    // Led2
    digitalWrite(pin1, HIGH);
    delay(1000);
    digitalWrite(pin1, LOW);
    delay(1000);
    digitalWrite(pin1, HIGH);
    delay(1000);
    digitalWrite(pin1, LOW);
    delay(1000);
    digitalWrite(pin1, HIGH);
    delay(1000);
    digitalWrite(pin1, LOW);
    delay(1000);
    digitalWrite(pin1, HIGH);
    delay(1000);
    digitalWrite(pin1, LOW);
    delay(1000);
    // led 3
    digitalWrite(pin2, HIGH);
    delay(1500);
    digitalWrite(pin2, LOW);
    delay(1500);
    digitalWrite(pin2, HIGH);
    delay(1500);
    digitalWrite(pin2, LOW);
    delay(1500);
    digitalWrite(pin2, HIGH);
    delay(1500);
    digitalWrite(pin2, LOW);
    delay(1500);
    // Led4
    digitalWrite(pin3, HIGH);
    delay(2000);
    digitalWrite(pin3, LOW);
    delay(2000);
    digitalWrite(pin3, HIGH);
    delay(2000);
    digitalWrite(pin3, LOW);
    delay(2000);
    // Led5
    digitalWrite(pin4, HIGH);
    delay(2500);
    digitalWrite(pin4, LOW);
    delay(2500);
}

void loop()
{

    encenderLeds();
    reversa();
}