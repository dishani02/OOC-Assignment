#pragma once
#pragma once
#include <iostream>
using namespace std;

class Policy {
private:
	int PolicyID;
	int startDate;
	int endDate;
	string coverageType;
	


public:

	void setPolicyDetails(int pID, int sdate, int edate , string ctype);
	void displayPolicyDetails();

};

void Policy::setPolicyDetails(int pID, int sdate, int edate, string ctype) {
	PolicyID = pID;
	startDate = sdate;
	endDate = edate;
	coverageType = ctype;
}

void Policy::displayPolicyDetails() {

	cout << "Policy ID = "  << PolicyID << endl << "Start Date = "  << startDate << endl <<
		"End Date = "  << endDate << endl << "Coverage Type = "  << coverageType << endl<<endl<<endl;

}

