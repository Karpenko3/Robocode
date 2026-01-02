// Визначаємо пін, до якого підключено світлодіод
const int ledPin = 2; 

void setup() {
  // Налаштовуємо пін як вихід (OUTPUT)
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Подаємо високу напругу (вмикаємо світлодіод)
  digitalWrite(ledPin, HIGH);
  delay(1000); // Чекаємо 1 секунду (1000 мілісекунд)

  // Подаємо низьку напругу (вимикаємо світлодіод)
  digitalWrite(ledPin, LOW);
  delay(1000); // Чекаємо 1 секунду
}