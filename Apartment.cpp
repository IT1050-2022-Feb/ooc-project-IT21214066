//created by IT21215292

#include "Apartment.h"
#include <cstring>
#include <iostream>
using namespace std;

Apartment::Apartment() {
strcpy(ApartmentID, "");
strcpy(Apartmentname, "");
Apartmentprice = 0;
strcpy(Apartmentdescription, "");
}
void Apartment::editApartmentDetails(const char name[]) {
strcpy(Apartmentname, name);
}
void Apartment::removeApartment() {

}
void Apartment::viewApartment() {

}
Apartment::~Apartment() { //Destructor

};