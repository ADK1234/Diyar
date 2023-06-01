void setup() {
  Serial.begin(9600);
  // настроим вывод 2 на режим ввода и включим встроенный подтягивающий резистор
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT); // светодиод
}

void loop() {
  int sensorVal = digitalRead(2);
  Serial.println(sensorVal);
  // При нажатии на кнопку включим светодиод, при отпускании - выключим
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}