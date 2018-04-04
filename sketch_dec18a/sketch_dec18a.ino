int motor1_Pin1 = 2;
int motor1_Pin2 = 3;
int motor2_Pin1 = 4;
int motor2_Pin2 = 5;
void setup() {
  // put your setup code here, to run once:

  pinMode(motor1_Pin1, OUTPUT);
  pinMode(motor1_Pin2, OUTPUT);
  pinMode(motor2_Pin1, OUTPUT);
  pinMode(motor2_Pin2, OUTPUT);
  
  digitalWrite(motor1_Pin1, LOW);
  digitalWrite(motor1_Pin2, LOW);
  digitalWrite(motor2_Pin1, LOW);
  digitalWrite(motor2_Pin2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(motor1_Pin1, HIGH);
  digitalWrite(motor1_Pin2, LOW);
//  digitalWrite(motor2_Pin1, HIGH);
//  digitalWrite(motor2_Pin2, LOW);
}
