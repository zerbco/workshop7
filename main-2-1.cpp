#include <iostream>
#include "Fridge.h"

using namespace std;

int main() {

    Fridge fridge1;
    cout << "Default Fridge: " << endl;
    cout << "Power Rating : " << fridge1.getPowerRating() << " watts" << endl;
    cout << "Volume : " << fridge1.getVolume() << " litres" << endl;
    cout << "Is On: " << (fridge1.getIsOn() ? "Yes" : "No") << endl;
    cout << "Power Consumption: " << fridge1.getPowerConsumption() << " watts" << endl;
    

    Fridge fridge2(200,400);

    cout << "\nFridge with power rating of 200 watts and volume of 400 litres: " << endl;
    cout << "Power Rating " << fridge2.getPowerRating() << " watts" << endl;
    cout << "Volume: " << fridge2.getVolume() << " litres" << endl;
    cout << "is On: " << (fridge2.getIsOn() ? "Yes" : "No") << endl;
    cout << "Power Consumption: " << fridge2.getPowerConsumption() << endl;

    cout << "\nTurning on the fridge..... " << endl;
    fridge2.turnOn();
    cout << "is On: " << (fridge2.getIsOn() ? "Yes" : "No") << endl;
    cout << "Power Consumption: " << fridge2.getPowerConsumption() << endl;

    cout << "\n Changing the volume to 300 litres.... " << endl;
    fridge2.setVolume(300);
    cout << "New Volume: " << fridge2.getVolume() << endl;
    cout << "New Power consumption: " << fridge2.getPowerConsumption() << endl;

    return 0;
    
}