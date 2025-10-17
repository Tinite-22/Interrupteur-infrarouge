// --- Déclaration des broches ---
int irSensor = 7;     // Broche OUT du capteur infrarouge
int ledPin = 6;      // Broche de la LED (intégrée ou externe)

// --- Variables ---
int sensorState = 0;      // État actuel du capteur
int lastSensorState = 0;  // Dernier état lu
bool ledState = false;    // État de la LED (ON/OFF)

void setup() {
  pinMode(irSensor, INPUT);  // Capteur en entrée
  pinMode(ledPin, OUTPUT);   // LED en sortie
  digitalWrite(ledPin, LOW); // LED éteinte au départ
  Serial.begin(9600);
}

void loop() {
  // Lecture de l’état du capteur
  sensorState = digitalRead(irSensor);

  // Détection du changement d’état (front descendant)
  if (sensorState == LOW && lastSensorState == HIGH) {
    ledState = !ledState; // On inverse l’état de la LED
    digitalWrite(ledPin, ledState); // On applique le nouvel état
    Serial.print("LED ");
    Serial.println(ledState ? "ON" : "OFF");
    delay(500); // Anti-rebond pour éviter plusieurs détections d’un seul passage
  }

  // Sauvegarde du dernier état lu
  lastSensorState = sensorState;
}
