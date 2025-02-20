int pin1 =A2;
int pin2 =6;
float ledval;
int potval;
int del = 250;

void setup() {
  // put your setup code here, to run once:
pinMode(pin1,INPUT);
pinMode(pin2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(pin1);
ledval=(255./1023.)*potval;
Serial.println(ledval);
analogWrite(pin2,ledval);
delay(del);
}
