#define BUTTON_PIN 17
#define PUMP_PIN 16

void setup() {
  Serial.begin(115200);
pinMode(PUMP_PIN,OUTPUT);
digitalWrite(PUMP_PIN,0);
pinMode(BUTTON_PIN,INPUT_PULLUP);
Serial.println("pump up the jam");

}

void loop() {
  // put your main code here, to run repeatedly:
  static bool pump = LOW;
  
  if (digitalRead(BUTTON_PIN)==LOW) {
    // button is connected to ground (LOW) when pressed, pulled up high when not pressed
    digitalWrite(PUMP_PIN,HIGH);
    if (pump != HIGH) {
      Serial.println("on");
      pump = HIGH;
    }
  }
  else {
    digitalWrite(PUMP_PIN, LOW);
    if (pump != LOW) {
      Serial.println("off");
      pump = LOW;
    }
  }
}

