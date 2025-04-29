#include <iostream>
#include "Appliance.h"

using namespace std;

int main () {
    Appliance app1;
    cout << "Default Appliance: " << endl;
    cout << "Power Rating: " << app1.getPowerRating() << " watts" << endl;
    cout << "Is On: " << (app1.get_isOn() ? "Yes" : "No") << endl;
    cout << "Power Consumption: " << app1.getPowerConsumption() << " watts" << endl;

    cout << "\n Turning on the Appliance ......" << endl;
    app1.turnOn();
    cout << "Is On: " << (app1.get_isOn() ? "Yes" : "No") << endl;

    cout << "\n Turning off the appliance ....." << endl;
    app1.turnOff();
    cout << "Is On: " << (app1.get_isOn() ? "Yes" : "No") << endl;

    Appliance app2(1500);   
    cout << "\n Appliance with power rating 1500: " << endl;
    cout << "Power Rating: " << app2.getPowerRating() << " watts" << endl;
    cout << "Is On: " << (app2.get_isOn() ? "Yes" : "No") << endl;
    
    cout << "\nChanging power rating to 2000.." << endl;
    app2.setPowerRating(2000);
    cout << "New Power Rating: " << app2.getPowerRating() << " watts" << endl;

    return 0;

}