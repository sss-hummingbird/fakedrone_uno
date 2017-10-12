#pragma once
#include "Arduino.h"
#include "attitude.h"

class Simulator {
    public:
        Simulator();
        AttitudeSensor sensor;
        void update();
        void output();
    private:
        float tilt;
        float engine_l;
        float engine_r;
};
