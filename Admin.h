//created by IT21214448

#include "Payment.h"
#include "Report.h"
#include "Account.h"

class Admin {
protected:
char adminID[5];
char AdminName[20];
Report* r1[4];

public:
Admin();
Admin(char ID[], const char name[], Account*Ac1, Payment*p1);
void displayAdmin(); 

~Admin();
};
