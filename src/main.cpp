#include <Arduino.h>
#include "simulator.h"

Simulator sim;

void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);
}

void loop() {
    // put your main code here, to run repeatedly:
    sim.update();
    sim.output();
    delay(50);
}
