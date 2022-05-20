//created by IT21212604

#include "Payment.h"
#include "ApartmentOwner.h"

class Account {
  protected:
    char AccountID[5];
    char AccountType[10];
    Payment* p1[5];
   public:
    Account();
    Account(char ID[]);
    void setAccounttype(char type);
    void DisplayAccount(); 
    
    ~Account();
};