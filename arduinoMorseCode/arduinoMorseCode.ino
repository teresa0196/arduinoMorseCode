int message;
int pin = 13;
int dot = 500;
int dash = 1500;
int pause = 500;
int letterSpace = 1500;
int wordSpace = 3500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  Serial.println("Type the message");
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    message = Serial.read();
    if (message == 'A' || message == 'a') {
      Serial.println("._");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'B' || message == 'b') {
      Serial.println("_...");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);

    }
    else if (message == 'C' || message == 'c') {
      Serial.println("_._.");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
    }
    else if (message == 'D' || message == 'd') {
      Serial.println("_..");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'E' || message == 'e') {
      Serial.println(".");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
    }
    else if (message == 'F' || message == 'f') {
      Serial.println(".._.");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'G' || message == 'g') {
      Serial.println("__.");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'H' || message == 'h') {
      Serial.println("....");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'I' || message == 'i') {
      Serial.println("..");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'J' || message == 'j') {
      Serial.println(".___");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'K' || message == 'k') {
      Serial.println("_._");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'L' || message == 'l') {
      Serial.println("._..");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'M' || message == 'm') {
      Serial.println("__");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'N' || message == 'n') {
      Serial.println("_.");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
    }
    else if (message == 'O' || message == 'o') {
      Serial.println("___");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'P' || message == 'p') {
      Serial.println(".__.");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'Q' || message == 'q') {
      Serial.println("__._");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'R' || message == 'r') {
      Serial.println("._.");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'S' || message == 's') {
      Serial.println("...");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'T' || message == 't') {
      Serial.println("_");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'U' || message == 'u') {
      Serial.println(".._");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'V' || message == 'v') {
      Serial.println("..._");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'W' || message == 'w') {
      Serial.println(".__");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'X' || message == 'x') {
      Serial.println("_.._");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'Y' || message == 'y') {
      Serial.println("_.__");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'Z' || message == 'z') {
      Serial.println("__..");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '0') {
      Serial.println("_____");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '1') {
      Serial.println(".____");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '2') {
      Serial.println("..___");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '3') {
      Serial.println("...__");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '4') {
      Serial.println("...._");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '5') {
      Serial.println(".....");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '6') {
      Serial.println("_....");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '7') {
      Serial.println("__...");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '8') {
      Serial.println("___..");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '9') {
      Serial.println("____.");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '.') {
      Serial.println("._._._");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == ',') {
      Serial.println("__..__");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == '?') {
      Serial.println("..__..");
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
      else if (" ");
      digitalWrite(pin, LOW);
      delay(wordSpace);

  }

}
