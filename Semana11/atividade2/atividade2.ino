#define pin_led1 8    // e /* */
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11

void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led1, HIGH);
  delay(1000);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led1, LOW);
  }

