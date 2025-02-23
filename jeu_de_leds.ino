// Définition des trois leds
const int LED_ROUGE = 10;
const int LED_JAUNE = 9;
const int LED_VERTE = 8;

void setup() {
  //Configuration des broches en sortie
  pinMode(LED_JAUNE, OUTPUT);
  pinMode(LED_JAUNE, OUTPUT);
  pinMode(LED_VERTE, OUTPUT);

  //Initialisation des leds à l'état bas
  digitalWrite(LED_ROUGE, LOW);
  digitalWrite(LED_JAUNE, LOW);
  digitalWrite(LED_VERTE,LOW);
}

void loop() {
  digitalWrite(LED_VERTE, HIGH);
  delay(3000);
  digitalWrite(LED_VERTE, LOW);
  digitalWrite(LED_JAUNE, HIGH);
  delay(1500);
  digitalWrite(LED_JAUNE, LOW);
  digitalWrite(LED_ROUGE, HIGH);
  delay(5000);
  digitalWrite(LED_ROUGE, LOW);

}
