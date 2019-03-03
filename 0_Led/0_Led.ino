#define PIN_LED         13
#define TIEMPO_ESPERA   1000 //1000 milisegundos

void setup() {
  pinMode(PIN_LED, OUTPUT); // configuramos el led como salida

}

void loop() {
  digitalWrite(PIN_LED, HIGH); // activamos la salida (estado alto 5V))
  delay(TIEMPO_ESPERA);
  digitalWrite(PIN_LED, LOW); // desactivamos la salida(estado bajo 0V)
  delay(TIEMPO_ESPERA);
  // put your main code here, to run repeatedly:

}
