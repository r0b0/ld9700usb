/*
ld9700usb teensy micro-controler code
*/

const int ledPin = 11;   // Teensy2 has LED on 11

const int yMotorOnPin = 21;
const int yMotorLPin = 20;
const int yMotorRPin = 19;

const int bMotorOnPin = 18;
const int bMotorLPin = 17;
const int bMotorRPin = 16;

// the setup() method runs once, when the sketch starts
void setup() {
  pinMode(ledPin, OUTPUT);

  pinMode(yMotorOnPin, OUTPUT);
  pinMode(yMotorLPin, OUTPUT);
  pinMode(yMotorRPin, OUTPUT); 

  pinMode(bMotorOnPin, OUTPUT);
  pinMode(bMotorLPin, OUTPUT);
  pinMode(bMotorRPin, OUTPUT); 
}

// the loop() methor runs over and over again,
// as long as the board has power
void loop() {
  digitalWrite(ledPin, HIGH);
  yMotorL();
  bMotorL();
  delay(1000);
  
  digitalWrite(ledPin, LOW);
  yMotorS();
  bMotorS();
  delay(1000);
  
  digitalWrite(ledPin, HIGH);
  yMotorR();
  bMotorR();
  delay(1000);
  
  digitalWrite(ledPin, LOW);
  yMotorS();
  bMotorS();
  delay(1000);
}

void yMotorL() {
  digitalWrite(yMotorRPin, LOW);
  digitalWrite(yMotorLPin, HIGH);
  digitalWrite(yMotorOnPin, HIGH);
}

void yMotorR() {
  digitalWrite(yMotorLPin, LOW);
  digitalWrite(yMotorRPin, HIGH);
  digitalWrite(yMotorOnPin, HIGH);
}

void yMotorS() {
  digitalWrite(yMotorOnPin, LOW);
  digitalWrite(yMotorLPin, LOW);
  digitalWrite(yMotorRPin, LOW);
}

void bMotorL() {
  digitalWrite(bMotorRPin, LOW);
  digitalWrite(bMotorLPin, HIGH);
  digitalWrite(bMotorOnPin, HIGH);
}

void bMotorR() {
  digitalWrite(bMotorLPin, LOW);
  digitalWrite(bMotorRPin, HIGH);
  digitalWrite(bMotorOnPin, HIGH);
}

void bMotorS() {
  digitalWrite(bMotorOnPin, LOW);
  digitalWrite(bMotorLPin, LOW);
  digitalWrite(bMotorRPin, LOW);
} 
