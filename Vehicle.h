#pragma once
#include <iostream>
using namespace std;

class Vehicle {
private:
	int vehicleID;
	string Model;
	int year;
	


public:

	void setVehicleDetails(int vID, string modle,int myear);
	void displayVehicleDetails();
	
};

void Vehicle::setVehicleDetails(int vID, string modle, int myear) {
	vehicleID = vID ;
	Model = modle ;
	year = myear;
}

void Vehicle::displayVehicleDetails() {

	cout << "Vehicle ID = "  << vehicleID << endl << "Vehicle Modele = "  << Model << endl <<
		"Vehicle Manufactured Year = "  << year << endl<<endl<<endl;


}
