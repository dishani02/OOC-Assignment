#include <iostream>
#include "Agent.h";
using namespace std;

int main() {
	Agent * agent = new Agent();

	agent->setAgentDetails(1001, "Saman Perera","saman@gmail.com",20029030349, 774819040);
	agent->displayDetails();

	return 0;
}
