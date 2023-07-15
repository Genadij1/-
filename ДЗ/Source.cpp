#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Car {
    double length;          
    double clearance;       
    double engineVolume;    
    double enginePower;     
    double wheelDiameter;   
    string color;           
    string transmissionType;
};

void setCarValues(Car& car, double length, double clearance, double engineVolume,
    double enginePower, double wheelDiameter, const string& color,
    const string& transmissionType) {
    car.length = length;
    car.clearance = clearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.transmissionType = transmissionType;
}

void displayCarValues(const Car& car) {
    cout << "Length: " << car.length << endl;
    cout << "Clearance: " << car.clearance << endl;
    cout << "Engine Volume: " << car.engineVolume << endl;
    cout << "Engine Power: " << car.enginePower << endl;
    cout << "Wheel Diameter: " << car.wheelDiameter << endl;
    cout << "Color: " << car.color << endl;
    cout << "Transmission Type: " << car.transmissionType << endl;
}

void searchCar(const Car& car, double maxLength, double maxClearance, double minEnginePower) {
    if (car.length <= maxLength && car.clearance <= maxClearance && car.enginePower >= minEnginePower) {
        cout << "Found a matching car!" << endl;
        displayCarValues(car);
    }
    else {
        cout << "No matching car found." << endl;
    }
}

int main() {

    Car myCar;
    setCarValues(myCar, 4.5, 150, 2.0, 180, 17, "Red", "Automatic");

    displayCarValues(myCar);

    searchCar(myCar, 5.0, 200, 150);

    system("pause>nul");
    return 0;
}
