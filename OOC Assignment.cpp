// OOC Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
