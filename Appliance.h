#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
private:
    int powerRating;
    bool isOn;

public:
    Appliance();
    Appliance(int powerRating);
    virtual ~Appliance() {}
    
    int getPowerRating() const;
    void setPowerRating(int powerRating);
    bool getIsOn() const;
    
    int get_powerRating() const { return getPowerRating(); }
    void set_powerRating(int powerRating) { setPowerRating(powerRating); }
    bool get_isOn() const { return getIsOn(); }
    
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};

#endif