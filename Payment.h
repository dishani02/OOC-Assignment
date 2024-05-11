
#pragma once
#include <iostream>
using namespace std;

class Payment {
private:
	int PaymentID;
	int date;
	float amount;
	string methode;



public:

	void setPaymentDetails(int payID, int pdate, float pamount, string pmethd);
	void displayPaymentDetails();

};

void Payment::setPaymentDetails(int payID, int pdate, float pamount, string pmethd) {
	PaymentID = payID;
	date = pdate;
	amount = pamount;
	methode = pmethd;
}

void Payment::displayPaymentDetails() {

	cout << "Payment ID = "  << PaymentID << endl <<"Payment Date = "  << date << endl <<
		"Payment Amount =  "  << amount << endl << "Payment method = "  << methode << endl <<endl <<endl;

}
