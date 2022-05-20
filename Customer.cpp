//created by IT21214066

#include "Customer.h"

#include <cstring>
#include <iostream>
class Feedback{

};
class Account{

};

class Account;
using namespace std;

Customer::Customer() {
strcpy(UserID,"");
strcpy(Fname,"");
strcpy(Lname,"");
strcpy(Username,"");
strcpy(Email,"");
strcpy(password,"");
    

}

Customer::Customer(char ID[5], const char fname[20], const char lname[20]) {
strcpy(UserID, ID);
strcpy(Fname, fname);
strcpy(Lname, lname);

  }
void Customer::displaycustomer() {
feedbacks[1] = new Feedback();
Ac1[1] = new Account()
Ap1[1] = new Apartment();
}


Customer::~Customer() { //Destructor
for (int i = 0; i < 5; i++)
  {
  delete feedbacks[i];
  }
for (int i = 0; i < 4; i++)
  {
  delete Ac1[i];
  }