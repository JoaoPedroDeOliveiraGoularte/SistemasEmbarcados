#define pin_led1 8    // e /* */
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao 2
#define pin_botao2 3

void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao, INPUT);
  pinMode(pin_botao2, INPUT);
}

void loop() {
  bool estado = digitalRead(pin_botao);
  bool estado2 = digitalRead(pin_botao2)
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led3, HIGH);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led4, LOW);
  } else {
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led4, HIGH);
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led3, LOW);
  }
}
