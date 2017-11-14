/*  Programa para controlar el giro de un motor
 *  Utilizando dos relevadores para el cambio
 *  de polaridad.
 */

void setup() {
  // Declarando salidas.
    pinMode(2, OUTPUT);
  
  // Valores iniciales (Giro detenido)
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
}

void loop() {
  // Activando giro hacia un lado.
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(2000);
  
  // Activando giro hacia el lado contrario.
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);

  // Deteniendo el giro del motor.
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(2000);
}

