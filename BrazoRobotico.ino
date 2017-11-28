#include <Servo.h>

#define pinBase 8
#define pinArticulacion1 9
#define pinArticulacion2 10
#define pinGarra 11
#define InitAngle 120

Servo Base;
Servo Articulacion1;
Servo Articulacion2;
Servo Garra;



void setup() {
  // put your setup code here, to run once:
 Base.attach(pinBase);
 Articulacion1.attach(pinArticulacion1);
 Articulacion2.attach(pinArticulacion2);
 Garra.attach(pinGarra);
 //Inicialización del brazo
 Base.write(InitAngle);
 Articulacion1.write(InitAngle);
 Articulacion2.write(InitAngle);
 Garra.write(InitAngle);
}

void loop() {
  

}
