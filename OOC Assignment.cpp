#include <iostream>
#include "Customer.h"
#include "Vehicle.h"
#include "Payment.h"
#include "Policy.h"
#include "Agent.h";

using namespace std;

void createVehicle() {
    cout << "you selected Option 3: Create Vehicle" << endl;

    string vehicleId;
    int year;
    string vmodel;

    cout << "Enter vehicle Id : ";
    cin >> vehicleId;

    cout << "Enter vehicle Model : ";
    cin >> vmodel;

    cout << "Enter vehicle Year : ";
    cin >> year;

    cout << endl << endl;

    Vehicle* vehicle = new Vehicle();

    vehicle->setVehicleId(vehicleId);
    
    vehicle->setVehicleYear(year);
    
    vehicle->setVehicleModel(vmodel);
    
    vehicle->displayVehicleDetails();

    return;
}

int main()
{
    cout << "================================================" << endl;
    cout << "Welcome to Drvie Peak Vehicle Insuarance Company" << endl;
    cout << "================================================" << endl << endl;

    int menuOption;
    bool exit = false;

    while (!exit) {
        cout << "Menu" << endl;
        cout << "-Press 1 to create customer" << endl;
        cout << "-Press 2 to create agent" << endl;
        cout << "-Press 3 to create vehicle" << endl;
        cout << "-Press 0 to exit program" << endl;
        cout << "Enter your option: ";

        cin >> menuOption;

        switch (menuOption) {
            case 1:
                cout << "You selected Option 1: Create Customer" << endl;
                
                break;
            case 2: 
                cout << "you selected Option 2: Create Agent" << endl;
                break;
            case 3:
                createVehicle();
                break;
            case 0:
                exit = true;
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
                break;
        }
    }

    
    return 0;
}