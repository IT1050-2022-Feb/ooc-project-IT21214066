//IT21214066

#include <iostream>
#include <cstring>

#include "Guest.h"
#include "Customer.h"
#include "ApartmentOwner.h"
#include "Admin.h"
#include "Report.h"
#include "Apartment.h"
#include "Payment.h"
#include "Feedback.h"
#include "Account.h"

using namespace std;
int main()
{
  
 Guest *G1; // Object Guest class
 G1 = new Guest(); // Guest Calling
 G1->DisplayGuest(); //Display Guest
  
 ApartmentOwner *ApOw1; // Object  ApartmentOwner class
 ApOw1= new ApartmentOwner(); //  ApartmentOwner Calling
 ApOw1->Display(); //Display  ApartmentOwner
  
 Customer *C1; // Object Customer class
 C1 = new Customer(); // Customer Calling
 C1->displaycustomer(); //Display Customer
  
 Admin *a1; // Object Admin class
 a1 = new Admin(); // Admin Calling
 a1->displayAdmin(); //Display Admin
  
 Payment* p1; // Object Payment class
 p1 = new Payment(); // Payment Calling
 p1->displaypaymentDetails(); //Display Payment
  
 Account* Ac1; // Object Report class
 Ac1 = new Account(); // Report Calling
 Ac1->DisplayAccount(); //Display Report
  
 Report* r1; // Object Report class
 r1 = new Report(); // Report Calling
 r1->getgenerateReport(); //Display Report
  
 Apartment* Ap1; // Object Apartment class
 Ap1 = new Apartment(); // Apartment Calling
 Ap1->viewApartment(); //Display Apartment
  
 Feedback* feedbacks; // Object  Feedback class
 feedbacks= new Feedback(); //  Feedback Calling
 feedbacks->getviewfeedback(); //Display  Feedback

//----Delete Dynamic objects------
 delete G1;
 delete ApOw1 ;
 delete C1;
 delete a1 ;
 delete p1 ;
 delete Ac1 ;
 delete r1 ;
 delete Ap1;
 delete feedbacks;

  
 return 0 ;
 
}