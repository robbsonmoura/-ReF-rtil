// Definição dos pinos
int led1 = 10;
int led2 = 9;
int led3 = 8;
int led4 = 7;

void setup() {
  // Configura todos os pinos como saída
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // Liga todos os LEDs
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(500); // Espera 500ms

  // Desliga todos os LEDs
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(500); // Espera 500ms
}

