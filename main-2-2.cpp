#include <iostream>
#include "TV.h"

using namespace std;

int main() {

    TV tv1;
    cout << "Default TV: " << endl;
    cout << "Power Rating : " << tv1.getPowerRating() << " watts" << endl;
    cout << "screenSize : " << tv1.getscreenSize() << " inches" << endl;
    cout << "Is On: " << (tv1.get_isOn() ? "Yes" : "No") << endl;
    cout << "Power Consumption: " << tv1.getPowerConsumption() << " watts" << endl;
    

    TV tv2(200,55);

    cout << "\nTV with power rating of 200 watts and screenSize of 55 inches: " << endl;
    cout << "Power Rating " << tv2.getPowerRating() << " watts" << endl;
    cout << "screenSize: " << tv2.getscreenSize() << " inches" << endl;
    cout << "is On: " << (tv2.get_isOn() ? "Yes" : "No") << endl;
    cout << "Power Consumption: " << tv2.getPowerConsumption() << endl;

    cout << "\nTurning on the TV..... " << endl;
    tv2.turnOn();
    cout << "is On: " << (tv2.get_isOn() ? "Yes" : "No") << endl;
    cout << "Power Consumption: " << tv2.getPowerConsumption() << endl;

    cout << "\n Changing the screenSize to 60 inches.... " << endl;
    tv2.setscreenSize(60);
    cout << "New screenSize: " << tv2.getscreenSize() << endl;
    cout << "New Power consumption: " << tv2.getPowerConsumption() << endl;

    return 0;
    
}