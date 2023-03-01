const int pinBuzzer = 9; //Constante que contiene el numero del pin de Arduino al cual conectamos un buzzer pasivo

const int frecuencias[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};//Arreglo que contiene las frecuencias que queremos escuchar en nuestro buzzer
const int numFrecuencias = 10;
   
void setup()
{ 
}
 
void loop()
{
  for (int i = 0; i < numFrecuencias; i++)
  {
   tone(pinBuzzer, frecuencias[i]);
   delay(1000);
  }
  noTone(pinBuzzer);
}
