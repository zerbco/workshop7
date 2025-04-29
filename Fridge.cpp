#include "Fridge.h"

Fridge::Fridge() : Appliance() {
    volume = 0.0;
}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating) {
    this->volume = volume;
}

double Fridge::getVolume() const {
    return volume;
}

void Fridge::setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getPowerConsumption() {
    if (!getIsOn()) {
        return 0.0;
    }
    
    return getPowerRating() * 24 * (volume / 100);
}