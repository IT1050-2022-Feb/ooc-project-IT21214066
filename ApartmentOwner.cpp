//created by IT21215292
#include "ApartmentOwner.h"
#include <cstring>
#include <iostream>
using namespace std;

ApartmentOwner::ApartmentOwner() {
 
  strcpy(ApartmentOwnerID, "");
  strcpy(ApartmentOwnername, "");
  
}

ApartmentOwner::ApartmentOwner(char ID[], const char name[]) {

  strcpy(ApartmentOwnerID, ID);
  strcpy(ApartmentOwnername, name);
  
}
void ApartmentOwner::Display() {

}
ApartmentOwner::~ApartmentOwner() { //Destructor

  
};