#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3
#define pin_botaoC 4

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  pinMode(pin_botaoC, INPUT);

}

void loop() {
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);
  if (botaoA == 1) {
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led1, LOW);
  } else {
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led1, HIGH);
  }
  if (botaoB == 1) {
    digitalWrite(pin_led4, HIGH);
    digitalWrite(pin_led3, LOW);
  } else {
    digitalWrite(pin_led4, LOW);
    digitalWrite(pin_led3, HIGH);
  }
}
