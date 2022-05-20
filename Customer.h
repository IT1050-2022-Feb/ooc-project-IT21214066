#include "Apartment.h"
#include "Account.h"
#include "Feedback.h"

class Customer
{
protected:
char UserID[5];
char Fname[20];
char Lname[20];
char Username[10];
char Email[50];
char password[10];

Feedback* feedbacks[5];
Account* Ac1[4];
Apartment* Ap1[2];

public:
Customer();
Customer (char ID[5], const char fname[20], const char lname[20]);
void displaycustomer(); 

~Customer();
};
