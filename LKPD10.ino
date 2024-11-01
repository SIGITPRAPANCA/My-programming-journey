const int buttonPin = 26;
void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int buttonState = digitalRead(buttonPin);
  Serial.print("Tombol ditekan: ");
  if (buttonState == HIGH){
    Serial.println("YA");
  } else { 
    Serial.println("TIDAK");}
    delay(100);}
