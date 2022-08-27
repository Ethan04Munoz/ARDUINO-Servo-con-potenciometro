
#include <Servo.h>

Servo myservo;  // Creamos un objeto de clase "Servo" llamado "myservo" para controlar nuestro servomotor

int potpin = 0;  // Pin analógico al cual conectamos la señal de nuestro potenciómetro
int val;    // variable que contendrá el valor leido en el pin del potenciómetro y posteriormente el valor que escribiremos al servomotor

void setup() {
  myservo.attach(9);  // Adjuntamos el objetoque creamos al pin 9, recuerda que solo puedes utilizar pines PWM
}

void loop() {
  val = analogRead(potpin);            // leemos el valor del potenciómetro (valor entre 0 y 1023)
  val = map(val, 0, 1023, 0, 180);     // escalamos el valor para usarlo con el servo (valor entre 0 y 180)
  myservo.write(val);                  // establecemos la posición deseada del servo
  delay(15);                           // esperamos a que el servo llegue a dicha posición
}
