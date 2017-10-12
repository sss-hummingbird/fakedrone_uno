#include "attitude.h"


void AttitudeSensor::tilt_change(float delta) {
    tilt += delta;
    tilt = (tilt > 90)? 90 : ((tilt < -90)? -90 : tilt);
}

void AttitudeSensor::update() {
    int raw_tilt = analogRead(JOY_TILT_X) - 510;
    tilt_change(RATE_OF_CHANGE*raw_tilt);
}

AttitudeSensor::AttitudeSensor() {
    tilt = 0;
}
