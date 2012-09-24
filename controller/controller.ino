/* 
  ld9700usb teensy micro-controler code
*/

const int ledPin = 11;   // Teensy has LED on 11, Teensy++ on 6
const int buttonPin = 7;
const int optoPin = 20;
const int optoDark = 560;
const int optoLight = 750;

// the setup() method runs once, when the sketch starts

void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(optoPin, INPUT_PULLUP);
  Serial.begin(9600);          //  setup serial
}

// the loop() methor runs over and over again,
// as long as the board has power

void loop() {
  int analog = 0;
  if(digitalRead(buttonPin)) {
    digitalWrite(ledPin, HIGH);   // set the LED on
  } else {
    digitalWrite(ledPin, LOW);    // set the LED off
    analog = map(analogRead(optoPin),
      optoDark, optoLight, 0, 10);
    Serial.println(analog);
  }
  delay(250);                  // wait a little
}

