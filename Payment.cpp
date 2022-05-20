//created by IT21212604
#include "Payment.h"

#include <cstring>
#include <iostream>
using namespace std;

Payment::Payment() {
strcpy(paymentID, "");
strcpy(paymentdescription, "");
Amount = 0;
strcpy(paymentType, "");
}

Payment::Payment(const char ID[], const char description[], double amount, char type[]) {
strcpy(paymentID, ID);
strcpy(paymentdescription, description);
Amount = amount;
strcpy(paymentType, type);
}

void Payment::displaypaymentDetails(){
  
}

Payment::~Payment() { //Destructor
  

}