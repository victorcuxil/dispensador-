#include <Servo.h>

const int pinecho = 8;
const int pintrigger = 9;

Servo servoMotor;

unsigned int tiempo, distancia;
bool leerSensor = true;

void setup() {
  Serial.begin(9600);
  pinMode(pinecho, INPUT);
  pinMode(pintrigger, OUTPUT);
  
  servoMotor.attach(11);
  servoMotor.write(0);  
}