// assign names to pins we want to use
int LED = 13;
int BTN = 3;

// run once
void setup()
{
  // set the LED pin (13) to be output
  // set the BTN pin (3) to be an input with pullup
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP); // <-- NOTE: Pullup
}

// do this forever
void loop()
{
  // read the state of the button and 
  // assign it to the variable
  int BTN_STATE = digitalRead(BTN);

  // Keep in mind the pullup means the pushbutton's
  // logic is inverted. It goes HIGH when it's open,
  // and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if(BTN_PUSH == HIGH)
  {
    digitalWrite(LED,LOW);
  }
  else
  {
    digitalWrite(LED,HIGH);
  }
}
