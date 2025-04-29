#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House{
    private:
    Appliance** appliances;
    int numAppliances;
    int maxAppliances;
    int currentCount;

    public:
    House();
    House(int numAppliances);

    ~House();

    bool addAppliance(Appliance* appliance);
    bool addAppliances(Appliance* appliance) { return addAppliance(appliance); }
    double getTotalPowerConsumption();
};

#endif