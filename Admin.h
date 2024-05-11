#pragma once
#include <iostream>
using namespace std;

class Admin {

	private:
		int admin_id;
		string name;
		string email;
		int NIC;
		int contact_no;

	public:
		void setAdminDetails(int id, string name,string email, int NIC, int contact_no);
		void displayDetails();
		int getAgentId();

};

void Admin::setAdminDetails(int id, string username, string mail,int  nic, int ct_no) {
	admin_id = id;
	name = username;
	email = mail;
	NIC = nic;
	contact_no = ct_no;
}

void Admin::displayDetails() {
	cout << "Admin ID :" << admin_id << endl;
	cout << "Admin Name :" << name << endl;
	cout << "Admin Email :" << email << endl;
	cout << "Admin NIC :" << NIC << endl;
	cout << "Admin Contact number :" << contact_no << endl;
}
int Admin::getAgentId() {
	return admin_id;
}


