// assign names to pins we want to use
int LED = 13;
int BTN = 3;

// run once
void setup()
{
  // set the LED pin (13) to be output
  // set the BTN pin (3) to be a normal input
  pinMode(LED,OUTPUT);
  pinMode(BTN,INPUT);
}

// do this forever
void loop()
{
  // read the state of the button and 
  // assign it to the variable
  int BTN_STATE = digitalRead(BTN);

  // if the button is pushed, the pin
  // is HIGH - turn on the LED.
  // if the buttons is NOT pushed, the
  // pin is LOW - turn off the LED
  if(BTN_STATE == HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}
