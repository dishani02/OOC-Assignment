#include <iostream>
using namespace std;

class Vehicle {
	private:
		string vehicleID;
		string model;
		int year;
	public:
		void setVehicleId(string vId);
		void setVehicleModel(string vModel);
		void setVehicleYear(int vYear);
		void displayVehicleDetails();
};

void Vehicle::setVehicleId(string vId) {
	vehicleID = vId;
}

void Vehicle::setVehicleModel(string vModel) {
	model = vModel;
}

void Vehicle::setVehicleYear(int vYear) {
	year = vYear;
}

void Vehicle::displayVehicleDetails() {

	cout << 
		"Vehicle ID				   = "  << vehicleID << endl << 
		"Vehicle Modele			   = "  << model << endl <<
		"Vehicle Manufactured Year = "  << year << 
	endl<<endl<<endl;


}
