//created by IT21212840

#include "Guest.h"
#include <cstring>
#include <iostream>

using namespace std;

Guest::Guest() {
strcpy(GuestID, "");
strcpy(GuestFName, "");
strcpy(GuestLName, "");
strcpy(GuestEmail, "");
strcpy(GuestPassword, "");
}
Guest::Guest(char id[], const char fname[], const char lname[], const char email[], const char password[]) {

strcpy(GuestID, id);
strcpy(GuestFName, fname);
strcpy(GuestLName, lname);
strcpy(GuestEmail,email);
strcpy(GuestEmail,password);
}
void Guest::DisplayGuest() {

}
Guest::~Guest() { //Destructor

};