#define led1=A1
#define led2=A2
#define led3=A3
//Imran Asiyah Omosalewa
/* 1 Build with your soldless bread board led blink
2 With the ideas used in question 1. Connect 3 led and program them to work im a loop*/
void setup() {
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(A1,HIGH);
  delay(10000);
  digitalWrite(A1,LOW);
  delay(10);
  digitalWrite(A2,HIGH);
  delay(10000);
  digitalWrite(A2,LOW);
  delay(10);
  digitalWrite(A3,HIGH);
  delay(1000);
  digitalWrite(A3,LOW);
  delay(10);
  
  // put your main code here, to run repeatedly:

}
