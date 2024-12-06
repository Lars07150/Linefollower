void setup() {

  Serial.begin(9600); // Start serial communication with the Serial Monitor
  Serial1.begin(9600); // Start serial communication with the HC-05 module
  delay(1000); // Give the module some time to stabilize

  // Change the HC-05 baud rate to 9600 (if necessary)
  Serial1.print("AT+UART=9600,0,0\r\n");
  delay(1000);
}

void loop() 
{
  
  if (Serial1.available() > 0) //Is er iets ontvangen?
  {
    char waarde = Serial1.read(); //Lees 1 teken uit de buffer
    Serial.print(waarde); //Toon het teken in de seriële monitor (en stuur dit terug naar Arduino 1)
  }
  else
  {
   if (Serial.available() > 0) //Is er iets ontvangen?
  {
    char waarde = Serial.read(); //Lees 1 teken uit de buffer
    Serial1.print(waarde); //Toon het teken in de seriële monitor (en stuur dit terug naar Arduino 1)
  }
  }


}