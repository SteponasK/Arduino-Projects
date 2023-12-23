// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH){ // if the button is pressed
    digitalWrite(12, HIGH);	 // turn the LED on
    
  }
  else{ // elsem if the button is not pressed
    digitalWrite(12, LOW);	// turn the LED off
  }
}