//created by IT21214448
#include "Admin.h"
#include <cstring>
#include <iostream>
using namespace std;

Admin::Admin() {
strcpy(adminID, "");
strcpy(AdminName, "");

}
Admin::Admin(char ID[], const char name[], Account*Ac1, Payment * p1) {
strcpy(adminID, ID);
strcpy(AdminName, name);

}
void Admin:: displayAdmin() {
r1[1] = new Report();
}
Admin::~Admin(){ //Destructor
  for (int i = 0; i < 4; i++)
  {
   delete r1[i];
  }
}