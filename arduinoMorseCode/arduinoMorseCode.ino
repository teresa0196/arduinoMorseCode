int message; // set 'message' as a variable         
int pin = 13; // set 'pin' to 13
int dot = 500; // set 'dot' to 500
int dash = 1500; // set 'dash' to 1500
int pause = 500; // set 'pause' to 500
int letterSpace = 1500; // set 'letterSpace' to 1500
int wordSpace = 3500; // set 'wordSpace' to 3500

void setup() {
  Serial.begin(9600); // activate the serial connection
  Serial.setTimeout(10); // make Arduino to scan the serial buffer every ten milliseconds 
  Serial.println("Type the message"); // print the message in the separate line
  pinMode(pin, OUTPUT); // set 'pin' to the output
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // check if there is anything in the serial buffer
    message = Serial.read(); // set 'message' to the contents of the serial buffer
    if (message == 'A' || message == 'a') { // print the morse with the serial monitor and LED if message is equal to 'A' or 'a' 
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
    else if (message == 'B' || message == 'b') { // print the morse with the serial monitor and LED if message is equal to 'B' or 'b'
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
    else if (message == 'C' || message == 'c') {  // print the morse with the serial monitor and LED if message is equal to 'C' or 'c'
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
    else if (message == 'D' || message == 'd') { // print the morse with the serial monitor and LED if message is equal to 'D' or 'd'
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
    else if (message == 'E' || message == 'e') { // print the morse with the serial monitor and LED if message is equal to 'E' or 'e'
      Serial.println(".");int pin = 13;
      digitalWrite(pin, HIGH);
      delay(dot);
      digitalWrite(pin, LOW);
      delay(pause);
    }
    else if (message == 'F' || message == 'f') { // print the morse with the serial monitor and LED if message is equal to 'F' or 'f'
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
    else if (message == 'G' || message == 'g') { // print the morse with the serial monitor and LED if message is equal to 'G' or 'g'
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
    else if (message == 'H' || message == 'h') { // print the morse with the serial monitor and LED if message is equal to 'H' or 'h'
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
    else if (message == 'I' || message == 'i') { // print the morse with the serial monitor and LED if message is equal to 'I' or 'i'
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
    else if (message == 'J' || message == 'j') { // print the morse with the serial monitor and LED if message is equal to 'J' or 'j'
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
    else if (message == 'K' || message == 'k') { // print the morse with the serial monitor and LED if message is equal to 'K' or 'k'
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
    else if (message == 'L' || message == 'l') { // print the morse with the serial monitor and LED if message is equal to 'L' or 'l'
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
    else if (message == 'M' || message == 'm') { // print the morse with the serial monitor and LED if message is equal to 'M' or 'm'
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
    else if (message == 'N' || message == 'n') { // print the morse with the serial monitor and LED if message is equal to 'N' or 'n'
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
    else if (message == 'O' || message == 'o') { // print the morse with the serial monitor and LED if message is equal to 'O' or 'o'
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
    else if (message == 'P' || message == 'p') { // print the morse with the serial monitor and LED if message is equal to 'P' or 'p'
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
    else if (message == 'Q' || message == 'q') { // print the morse with the serial monitor and LED if message is equal to 'Q' or 'q'
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
    else if (message == 'R' || message == 'r') { // print the morse with the serial monitor and LED if message is equal to 'R' or 'r'
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
    else if (message == 'S' || message == 's') { // print the morse with the serial monitor and LED if message is equal to 'S' or 's'
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
    else if (message == 'T' || message == 't') { // print the morse with the serial monitor and LED if message is equal to 'T' or 't'
      Serial.println("_");
      digitalWrite(pin, HIGH);
      delay(dash);
      digitalWrite(pin, LOW);
      delay(letterSpace);
    }
    else if (message == 'U' || message == 'u') { // print the morse with the serial monitor and LED if message is equal to 'U' or 'u'
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
    else if (message == 'V' || message == 'v') { // print the morse with the serial monitor and LED if message is equal to 'V' or 'v'
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
    else if (message == 'W' || message == 'w') { // print the morse with the serial monitor and LED if message is equal to 'W' or 'w'
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
    else if (message == 'X' || message == 'x') { // print the morse with the serial monitor and LED if message is equal to 'X' or 'x'
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
    else if (message == 'Y' || message == 'y') { // print the morse with the serial monitor and LED if message is equal to 'Y' or 'y'
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
    else if (message == 'Z' || message == 'z') { // print the morse with the serial monitor and LED if message is equal to 'Z' or 'z'
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
    else if (message == '0') { // print the morse with the serial monitor and LED if message is equal to '0'
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
    else if (message == '1') { // print the morse with the serial monitor and LED if message is equal to '1'
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
    else if (message == '2') { // print the morse with the serial monitor and LED if message is equal to '2'
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
    else if (message == '3') { // print the morse with the serial monitor and LED if message is equal to '3'
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
    else if (message == '4') { // print the morse with the serial monitor and LED if message is equal to '4'
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
    else if (message == '5') { // print the morse with the serial monitor and LED if message is equal to '5'
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
    else if (message == '6') { // print the morse with the serial monitor and LED if message is equal to '6'
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
    else if (message == '7') { // print the morse with the serial monitor and LED if message is equal to '7'
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
    else if (message == '8') { // print the morse with the serial monitor and LED if message is equal to '8'
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
    else if (message == '9') { // print the morse with the serial monitor and LED if message is equal to '9'
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
    else if (message == '.') { // print the morse with the serial monitor and LED if message is equal to '.'
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
    else if (message == ',') { // print the morse with the serial monitor and LED if message is equal to ','
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
    else if (message == '?') { // print the morse with the serial monitor and LED if message is equal to '?'
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
      else if (" "); // wait for wordSpace if message is equal to a space
      digitalWrite(pin, LOW);
      delay(wordSpace);

  }

}
