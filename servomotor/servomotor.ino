#include <Stepper.h>
//#include <CheapStepper.h>


//CheapStepper
const int stepsPerRevolution = 150;
Stepper myStepper(stepsPerRevolution,8,9,10,11);
void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(400);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println("clockwise");
    myStepper.step(stepsPerRevolution);
    delay(100);
    Serial.println("counterclockwise");
    myStepper.step(-stepsPerRevolution);
    delay(100);
}
