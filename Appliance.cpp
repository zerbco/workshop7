#include "Appliance.h"

Appliance::Appliance() {
    powerRating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating) {
    this -> powerRating = powerRating;
    this -> isOn = false;
}

int Appliance::getPowerRating() const{
    return powerRating;
}

void Appliance::setPowerRating(int powerRating){
    this -> powerRating = powerRating;
}

bool Appliance::get_isOn() const{
    return isOn;
}

void Appliance::turnOn(){
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}
double Appliance::getPowerConsumption() {
    return 0;
}