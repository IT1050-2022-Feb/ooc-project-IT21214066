//Created by IT21212604

#include "Account.h"
#include <cstring>
#include <iostream>
using namespace std;

Account::Account() {
strcpy(AccountID, "");
strcpy(AccountType, "");
}

Account::Account(char ID[]) {
strcpy(AccountID, ID);

}

void Account::setAccounttype(char type) {

};
void Account:: DisplayAccount() {
p1[1] = new Payment();
}
Account::~Account() { //Destructor
for (int i = 0; i < 5; i++)
  {
  delete p1[i];
  }
 
};