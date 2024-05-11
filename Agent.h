#pragma once
#include <iostream>
using namespace std;

class Agent {

	private:
		int agent_id;
		string name;
		string email;
		int NIC;
		int contact_no;

	public:
		void setAgentDetails(int id, string name,string email, int NIC, int contact_no);
		void displayDetails();
		int getAgentId();
		
};

void Agent::setAgentDetails(int id, string username,string mail,int  nic, int ct_no){
	agent_id = id;
	name = username;
	email = mail;
	NIC = nic;
	contact_no = ct_no;
}

void Agent::displayDetails() {
	cout << "Agent ID :" << agent_id << endl;
	cout << "Agent Name :" << name << endl;
	cout << "Agent Email :" << email << endl;
	cout << "Agent NIC :" << NIC << endl;
	cout << "Agent Contact number :" << contact_no << endl;
}
int Agent::getAgentId() {
	return agent_id;
}



