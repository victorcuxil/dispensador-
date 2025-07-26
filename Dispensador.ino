#include <Servo.h>

const int pinecho = 8;
const int pintrigger = 9;

Servo servoMotor;

unsigned int tiempo, distancia;
bool leerSensor = true;
