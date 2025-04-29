#include <iostream> 
#include "Fridge.h"
#include "TV.h"
#include "House.h"

using namespace std;

int main() {
    House myhouse(5);

    cout << "Created a new house for 5 appliances." << endl;
    cout << "Initial total power consumption: " << myhouse.getTotalPowerConsumption() << " watts" << endl;
    
    Fridge *fridge = new Fridge(300,400);
    cout << "\nAdding new fridge......" << endl;
    if (myhouse.addAppliance(fridge)) {
        cout << "Fridge added successfully." << endl;
    } else {
        cout << "Failed to add the fridge" << endl;
    }

    fridge->turnOn();
    cout << "Turned on the fridge" << endl;
    cout << "Fridge power consumption: " << fridge->getPowerConsumption() << " watts" << endl;
    cout << "Total power consumption: " << myhouse.getTotalPowerConsumption() << " watts" << endl;
    
    TV* tv = new TV(150,55);
    cout << "\nAdding new tv....." << endl;
    if (myhouse.addAppliance(tv)) {
        cout << "TV added successfully." << endl;
    } else {
        cout << "Failed to add the tv" << endl;
    }   

    cout << "TV is off " << endl;
    cout << "TV power consumption: " << tv->getPowerConsumption() << " watts" << endl;
    cout << "Total power consumption: " << myhouse.getTotalPowerConsumption() << " watts" << endl;

    tv->turnOn();
    cout << "\nTurned on tv." << endl;
    cout << "TV Power consumption: " << tv->getPowerConsumption() << " watts" << endl;
    cout << "Total power consumption: " << myhouse.getTotalPowerConsumption() << " watts" << endl;

    TV* tv2 = new TV(120,32);
    tv2->turnOn();
    cout << "\nAdding another tv...." << endl;
    if (myhouse.addAppliance(tv2)) {
        cout << "Second TV added successfully and turned on" << endl;
    } else {
        cout << "Failed to add the second TV" << endl;
        delete tv2;
    }
    cout << "Total power consumption: " << myhouse.getTotalPowerConsumption() << " watts" << endl;

    cout << "\nTrying to add more appliances than house can hold ..." << endl;

    for (int i = 0; i < 3; i++) {
        Appliance *app = new Appliance(50);
        if (myhouse.addAppliance(app)) {
            cout << "Added appliance " << (i+1) << endl;
        } else {
            cout << "Failed to add appliance " << (i+1) << " - house is full!" << endl;
            delete app;
        }
    }

    cout << "\nFinal total power consumption: " << myhouse.getTotalPowerConsumption() << " watts" << endl;

    return 0;
}