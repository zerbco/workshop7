#include "TV.h"

TV::TV() : Appliance() {
    screenSize = 0.0;
}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating) {
    this->screenSize = screenSize;
}

void TV::setscreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getscreenSize() const {
    return screenSize;
}

double TV::getPowerConsumption() {
    if (!getIsOn()) {
        return 0.0;
    }
    
    return getPowerRating() * (screenSize / 10);
}