// ------------
// Blink first name in Morse code when a push button is pressed
// ------------

int button = D6;
int LED = D7;
 
void setup()
{
  pinMode(button, INPUT_PULLDOWN);
  pinMode(LED, OUTPUT);
} 

void loop() 
{
    if (digitalRead(button) == HIGH) {
    
        // Morse code for "C"
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(1s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(1s);
      digitalWrite(LED, LOW);
      
      // Space between the letters
      delay(3s);
      
      // Morse code for "J"
      digitalWrite(LED, HIGH);
      delay(1s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
      
      // Space between the letters
      delay(3s);
      
      // Morse code for "A"
      digitalWrite(LED, HIGH);
      delay(1s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
      
      // Space between the letters
      delay(3s);
    
      // Morse code for "Y"
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(1s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
      delay(1s);
      digitalWrite(LED, HIGH);
      delay(3s);
      digitalWrite(LED, LOW);
    }  
      
    else {
        digitalWrite(LED,LOW);
    }
}