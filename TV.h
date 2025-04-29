#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
    private:
    double screenSize;

    public:
    TV();
    TV(int powerRating, double screenSize);

    void setscreenSize(double screenSize);
    double getscreenSize() const;
    
    void setScreenSize(double screenSize) { setscreenSize(screenSize); }
    double getScreenSize() const { return getscreenSize(); }
    
    bool get_isOn() const { return getIsOn(); }

    double getPowerConsumption() override;
};

#endif