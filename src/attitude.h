#pragma once
#include "Arduino.h"
#include "pinout.h"

#define RATE_OF_CHANGE 0.005

class AttitudeSensor {
    public:
        void update();
        float tilt;
        void tilt_change(float delta);
        AttitudeSensor();
};
