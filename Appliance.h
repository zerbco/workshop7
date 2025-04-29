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
    bool getIsOn() const { return isOn; }
    
    int get_powerRating() const { return getPowerRating(); }
    void set_powerRating(int powerRating) { setPowerRating(powerRating); }
    bool get_isOn() const { return isOn; }
    
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};

#endif