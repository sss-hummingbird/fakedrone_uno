#include "simulator.h"

Simulator::Simulator() {
    tilt = 0;
}

void Simulator::output() {
    Serial.print(tilt);
    Serial.print(' ');
    Serial.print(engine_l);
    Serial.print(' ');
    Serial.println(engine_r);
}

void Simulator::update() {
    sensor.update();
    tilt = sensor.tilt;
}
