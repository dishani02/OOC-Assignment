#pragma once
#include <iostream>
using namespace std;

class Customer {
	private:

		int customerID;
		string Cname;
		string email;
		int NIC;
		int contactNo;
		string Address;


	public :
		void setCustomerDetails(int cID, string name, string mail, int nid, int ctno, string address);
		void displayCustomerDetails();
		int getCustomerId();
};

void Customer::setCustomerDetails(int cID, string name, string mail, int nid, int ctno, string address) {
	customerID = cID;
	Cname = name;
	email = mail;
	NIC = nid;
	contactNo = ctno;
	Address = address;
}

void Customer::displayCustomerDetails() {
	cout << "customer ID = " << customerID << endl << "customer name = "  << Cname << endl <<
	"Customer Email = "  << email << endl << "customer NIC = "  << NIC  << endl << "Customer contact number = "  << contactNo
	<< endl << "Customer Address = "  << Address << endl<<endl<<endl;

}

int Customer::getCustomerId() {
	return customerID;

}








