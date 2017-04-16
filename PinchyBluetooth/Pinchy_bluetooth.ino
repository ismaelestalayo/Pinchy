//AT+NAME____
#include <Servo.h>

Servo servo1, servo2;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);

  pinMode( 2, OUTPUT);    //BUZZER
  pinMode( 9, OUTPUT);    //BLUE
  pinMode(10, OUTPUT);    //RED
  pinMode(11, OUTPUT);    //GREEN

  servo1.attach(5);
  servo2.attach(6);
  servo1.write(90);
  servo2.write(90);
}

void loop() {
  while (Serial1.available()) {
    char c = Serial1.read();
    Serial.print(c);
    commandHandler(c); 
    }
  
  while (Serial.available()) {
    Serial1.write( Serial.read());
    }
}

//************************************************
void adelante() {
  servo1.write(0);
  servo2.write(180);
}
void atras() {
  servo1.write(0);
  servo2.write(180);
}
void derecha() {
  servo1.write(0);
  servo2.write(90);
}
void izquierda() {
  servo1.write(90);
  servo2.write(180);
}
void parar() {
  servo1.write(90);
  servo2.write(90);
}

//************************************************
void commandHandler(char c){
  switch (c) {
    case 'U':
      adelante();
      break;
    case 'D':
      atras();
      break;
    case 'L':
      izquierda();
      break;
    case 'R':
      derecha();
      break;
    case 'S':
      parar();
      break;

    case 'r':
      digitalWrite(10, !digitalRead(10) );
      break;
    case 'g':
      digitalWrite(11, !digitalRead(11) );
      break;
    case 'b':
      digitalWrite( 9, !digitalRead( 9) );
      break;
    
    case '1':
      break;
    case '2':
      digitalWrite(2, !digitalRead(2) );
      break;
  }
}

