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

    bool addAppliances(Appliance * appliance);
    double getTotalPowerConsumption();
};

#endif