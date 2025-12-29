#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7

#define IN5 8
#define IN6 9
#define IN7 10
#define IN8 11

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);
}

void loop() {
  // Rotate clockwise
  for (int i = 0; i < 512; i++) {
    stepMotor(1);
  }
  delay(1000); // Wait for 1 second
 
  // Rotate counterclockwise
  for (int i = 0; i < 512; i++) {
    stepMotor(-1);
  }
  delay(1000); // Wait for 1 second
}

void stepMotor(int step) {
  if (step == 1) { // Clockwise
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);

    digitalWrite(IN5, HIGH);
    digitalWrite(IN6, LOW);
    digitalWrite(IN7, LOW);
    digitalWrite(IN8, LOW);

    delay(2);
 
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    digitalWrite(IN5, LOW);
    digitalWrite(IN6, HIGH);

    delay(2);
     
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);

    digitalWrite(IN6, LOW);
    digitalWrite(IN7, HIGH);

    delay(2);
 
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

    digitalWrite(IN7, LOW);
    digitalWrite(IN8, HIGH);

    delay(2);
 
    digitalWrite(IN4, LOW);
    digitalWrite(IN1, HIGH);

    digitalWrite(IN8, LOW);
    digitalWrite(IN5, HIGH);

    delay(2);
  } else if (step == -1) { // Counterclockwise
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN1, LOW);

    digitalWrite(IN8, HIGH);
    digitalWrite(IN7, LOW);
    digitalWrite(IN6, LOW);
    digitalWrite(IN5, LOW);

    delay(2);
 
    digitalWrite(IN4, LOW);
    digitalWrite(IN3, HIGH);

    digitalWrite(IN8, LOW);
    digitalWrite(IN7, HIGH);

    delay(2);
     
    digitalWrite(IN3, LOW);
    digitalWrite(IN2, HIGH);

    digitalWrite(IN7, LOW);
    digitalWrite(IN6, HIGH);

    delay(2);
 
    digitalWrite(IN2, LOW);
    digitalWrite(IN1, HIGH);

    digitalWrite(IN6, LOW);
    digitalWrite(IN5, HIGH);

    delay(2);
 
    digitalWrite(IN1, LOW);
    digitalWrite(IN4, HIGH);

    digitalWrite(IN5, LOW);
    digitalWrite(IN8, HIGH);

    delay(2);
  }
}
