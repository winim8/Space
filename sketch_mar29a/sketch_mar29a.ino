int redPin = 6;
int greenPin = 5;
int bluePin = 3;

void setup(){
  //RGB핀 셋팅
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop(){
   //흰색
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH); 
  digitalWrite(bluePin,HIGH);
  delay(1000);
//  digitalWrite(bluePin,LOW);
//  delay(1000);
}
