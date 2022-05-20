//created by IT21215292
#include "Account.h"
class ApartmentOwner
{
protected:
char ApartmentOwnerID[5];
char ApartmentOwnername[20];
Account* Ac1[10];
public:
ApartmentOwner();
ApartmentOwner(char ID[], const char name[]);
void Display();
~ApartmentOwner();
};