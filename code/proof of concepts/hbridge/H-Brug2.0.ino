// Pin-definities voor de DRV8833
const int motor1In1 = 5; // Motor 1 ingang 1 (PWM)
const int motor1In2 = 6; // Motor 1 ingang 2 (PWM)
const int motor2In1 = 9; // Motor 2 ingang 1 (PWM)
const int motor2In2 = 10; // Motor 2 ingang 2 (PWM)

// Variabelen voor snelheid en richting
int motorSpeed = 0; // Motorsnelheid (0-255)
bool forward = true; // Richting: true = vooruit, false = achteruit

void setup() {
  // Stel motorpinnen in als uitvoer
  pinMode(motor1In1, OUTPUT);
  pinMode(motor1In2, OUTPUT);
  pinMode(motor2In1, OUTPUT);
  pinMode(motor2In2, OUTPUT);
  
  // Initialiseer de seriële monitor
  Serial.begin(9600);
  Serial.println("Motorbesturing gestart.");
  Serial.println("Voer een snelheid in (0-255) of een richting (f = vooruit, b = achteruit):");
}

void loop() {
  // Controleer of er gegevens beschikbaar zijn in de seriële monitor
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n'); // Lees de invoer tot een nieuwe regel
    input.trim(); // Verwijder eventuele spaties of nieuwe regels

    // Controleer of de invoer een snelheid is
    if (input.toInt() > 0 || input == "0") {
      motorSpeed = constrain(input.toInt(), 0, 255); // Beperk snelheid tot 0-255
      Serial.print("Motorsnelheid ingesteld op: ");
      Serial.println(motorSpeed);
    }
    // Controleer of de invoer een richtingscommando is
    else if (input.equalsIgnoreCase("f")) {
      forward = true;
      Serial.println("Richting ingesteld op: vooruit");
    } else if (input.equalsIgnoreCase("b")) {
      forward = false;
      Serial.println("Richting ingesteld op: achteruit");
    } else {
      Serial.println("Ongeldige invoer. Gebruik een getal (0-255) voor snelheid of 'f'/'b' voor richting.");
    }

    // Pas motorinstellingen toe
    setMotorDirection(forward);
    setMotorSpeed(motorSpeed);
  }
}

// Functie om de motorsnelheid in te stellen voor beide motoren
void setMotorSpeed(int speed) {
  speed = constrain(speed, 0, 255); // Beperk snelheid tot 0-255
  if (forward) {
    // Motor 1
    analogWrite(motor1In1, speed);
    analogWrite(motor1In2, 0);
    // Motor 2
    analogWrite(motor2In1, speed);
    analogWrite(motor2In2, 0);
  } else {
    // Motor 1
    analogWrite(motor1In1, 0);
    analogWrite(motor1In2, speed);
    // Motor 2
    analogWrite(motor2In1, 0);
    analogWrite(motor2In2, speed);
  }
}

// Functie om de draairichting in te stellen voor beide motoren
void setMotorDirection(bool forward) {
  // De richting wordt hier al verwerkt via PWM in `setMotorSpeed`
  // Dit is een placeholder voor extra logica als dat nodig is
}

// Functie om de motoren te stoppen (optioneel)
void stopMotors() {
  digitalWrite(motor1In1, LOW);
  digitalWrite(motor1In2, LOW);
  digitalWrite(motor2In1, LOW);
  digitalWrite(motor2In2, LOW);
}
