// #include "PluggableUSBHID.h"
#include "USBKeyboard.h"

USBKeyboard Keyboard;

int val;

void setup() {
  // put valour setup code here, to run once:
  pinMode(26, INPUT);
  pinMode(27, INPUT);
}

void loop() {
  //determine val value
  val = analogRead(26) - 505;

  /* test output
  Serial.print("x: "); 
  Serial.print(val);
  Serial.print("\n");
  */

  if (val > 24)
    val = 0; //right
  else if (val < -24)
    val = 2; //left
  else
    val = 1; //center

  //determine inputs
  if (val == 1)
    Keyboard.key_code(LEFT_ARROW);
  else if (val == -1)
    Keyboard.key_code(RIGHT_ARROW);
 
  //determine val value
  val = analogRead(27) - 510;

  //determine inputs
  else if (val == 0 && val == 1)
    Keyboard.key_code(UP_ARROW);
  else if (val == 0 && val == -1)
    Keyboard.key_code(DOWN_ARROW);

  /* test output
    Serial.print("y: "); 
  Serial.print(val);
  Serial.print("\n");
  */

  if (val > 24)
    val = 0; //down
  else if (val < -24)
    val = 2; //up
  else
    val = 1; //center
  
  delay(10);
}