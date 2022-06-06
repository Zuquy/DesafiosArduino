int redPin = 3;
int bluePin = 4;
int greenPin = 5;
int buttonPin = 2;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT); 
pinMode(greenPin, OUTPUT);
pinMode(buttonPin, INPUT);
Serial.begin(9600);
}

void loop() {
  int estado = digitalRead(buttonPin);
   digitalWrite(greenPin, HIGH );
  digitalWrite(bluePin, HIGH);
  digitalWrite(redPin, HIGH);
  Serial.print(estado);
  if(estado==1){
    medirPH();
  }
  
}
void medirPH(){
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(redPin, HIGH);
  delay (40000);
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(30000);
}
