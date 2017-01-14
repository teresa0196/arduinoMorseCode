int letter;
String message;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  Serial.println("hi");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    message = Serial.read();
    translate();
  }
}
void translate() {
  //letter = getchar();

  if (message == "A") {
    Serial.println(".-");
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(100);
    digitalWrite(13, HIGH);
    delay(3000);
    digitalWrite(13, LOW);

  }
  else if (message == "B") {
    Serial.println("-...");
    digitalWrite(13, HIGH);
    delay(3000);
    digitalWrite(13, LOW);
    delay(100);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(100);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(100);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(100);

  }
  else if (message == "C") {
    Serial.println("-.-.");
    digitalWrite(13, HIGH);
    delay(3000);
    digitalWrite(13, LOW);
    delay(100);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(100);
    digitalWrite(13, HIGH);
    delay(3000);
    digitalWrite(13, LOW);
    delay(100);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(100);

  }
}

