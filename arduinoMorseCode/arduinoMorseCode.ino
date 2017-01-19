int letter;
int message;
int pin = 13;

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
    if (message == 'A' || message == 'a') {
      Serial.println(".-");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
    }
    else if (message == 'B' || message == 'b') {
      Serial.println("-...");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);

    }
    else if (message == 'C' || message == 'c') {
      Serial.println("-.-.");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'D' || message == 'd') {
      Serial.println("-..");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'E' || message == 'e') {
      Serial.println(".");
      digitalWrite(pin,HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'F' || message == 'f') {
      Serial.println(".._.");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'G' || message == 'g') {
      Serial.println("__.");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'H' || message == 'h') {
      Serial.println("....");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'I' || message == 'i') {
      Serial.println("..");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'J' || message == 'j') {
      Serial.println(".___");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'K' || message == 'k') {
      Serial.println("_._");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'L' || message == 'l') {
      Serial.println("._..");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'M' || message == 'm') {
      Serial.println("__");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'N' || message == 'n') {
      Serial.println("_.");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'O' || message == 'o') {
      Serial.println("___");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'P' || message == 'p') {
      Serial.println(".__.");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'Q' || message == 'q') {
      Serial.println("__._");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'R' || message == 'r') {
      Serial.println("._.");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'S' || message == 's') {
      Serial.println("...");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'T' || message == 't') {
      Serial.println("_");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'U' || message == 'u') {
      Serial.println(".._");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'V' || message == 'v') {
      Serial.println("..._");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'W' || message == 'w') {
      Serial.println(".__");
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'X' || message == 'x') {
      Serial.println("_.._");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'Y' || message == 'y') {
      Serial.println("_.__");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
    }
    else if (message == 'Z' || message == 'z') {
      Serial.println("__..");
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(3000);
      digitalWrite(pin, LOW);
      delay(100);
      digitalWrite(pin, HIGH);
      delay(1000);
      digitalWrite(pin, LOW);
      delay(100);
      
    }



  }
}
