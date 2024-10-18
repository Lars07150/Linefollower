
// the setup function runs once when you press reset or power the board
void setup() 
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
}

// the loop function runs over and over again forever
void loop() 
{    
  Serial.print(analogRead(A0));
  Serial.print(",");
  Serial.print(analogRead(A1));
  Serial.print(",");
  Serial.print(analogRead(A2));
  Serial.print(",");
  Serial.print(analogRead(A3));
  Serial.print(",");
  Serial.print(analogRead(A4));
  Serial.print(",");
  Serial.print(analogRead(A5));
  Serial.print(",");
  Serial.print(analogRead(A6));
  Serial.print(",");
  Serial.println(analogRead(A7));
}