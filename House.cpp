#include "House.h"

House::House() {
    maxAppliances = 0;
    currentCount = 0;
    appliances = nullptr;
}

House:: House(int numAppliances) {
    maxAppliances = numAppliances;
    currentCount = 0;

    appliances = new Appliance*[maxAppliances];

    for (int i = 0; i < maxAppliances; i++) {
        appliances[i] = nullptr;
    }
}

House::~House() {
    if (appliances != nullptr) {
        for (int i = 0; i < currentCount; i++) {
            if (appliances[i] != nullptr) {
                delete appliances[i];
                appliances[i] = nullptr;
            }
        }
        delete[] appliances;
        appliances = nullptr;
    }
}

bool House::addAppliance(Appliance* appliance) {
    if (currentCount >= maxAppliances) {
        return false;
    }

    appliances[currentCount] = appliance;
    currentCount++;
    return true;
}

double House::getTotalPowerConsumption() {
    double totalConsumption = 0.0;

    for (int i = 0; i < currentCount; i++) {
        if (appliances[i] != nullptr) {
            totalConsumption += appliances[i]-> getPowerConsumption();
        }
    }
    return totalConsumption;
}