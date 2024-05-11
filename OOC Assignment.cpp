#include <iostream>
<<<<<<< HEAD
#include "Customer.h"
#include "Vehicle.h"
#include "Payment.h"
#include "Policy.h"
using namespace std;

int main()
{
  
    Customer* customer = new Customer();
   
    customer->setCustomerDetails(1, "Pawan", "pawan@gmail.com", 1223658565, 768974632, "kottawa");
    customer->displayCustomerDetails();



    Vehicle* vehicle = new Vehicle();

    vehicle->setVehicleDetails(1004, "NISAN", 2016);
    vehicle->displayVehicleDetails();


    Policy* policy = new Policy();

    policy->setPolicyDetails(001,2023-07-21, 2024 - 07 - 21, "Thired party");
    policy->displayPolicyDetails();


    Payment* payment = new Payment();

    payment->setPaymentDetails(111, 2024 - 04 - 28, 23000 , "Online");
    payment->displayPaymentDetails();

    return 0;
    
=======
#include "Agent.h";
using namespace std;

int main() {
	Agent * agent = new Agent();

	agent->setAgentDetails(1001, "Saman Perera","saman@gmail.com",20029030349, 774819040);
	agent->displayDetails();

	return 0;
>>>>>>> e93bf1de7cf5a7a0648d6759ceefd45622ea3feb
}
