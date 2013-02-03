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

const int o1Pin = 15;
const int o2Pin = 14;

// the setup() method runs once, when the sketch starts
void setup() {
  pinMode(ledPin, OUTPUT);

  pinMode(yMotorOnPin, OUTPUT);
  pinMode(yMotorLPin, OUTPUT);
  pinMode(yMotorRPin, OUTPUT); 

  pinMode(bMotorOnPin, OUTPUT);
  pinMode(bMotorLPin, OUTPUT);
  pinMode(bMotorRPin, OUTPUT); 
  
  pinMode(o1Pin, OUTPUT);
  pinMode(o2Pin, OUTPUT);
}

// the loop() methor runs over and over again,
// as long as the board has power
void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(o1Pin, HIGH);
  digitalWrite(o2Pin, LOW);
  delay(2000);
  
  digitalWrite(ledPin, LOW);
  digitalWrite(o1Pin, LOW);
  digitalWrite(o2Pin, HIGH);
  delay(2000);
}

