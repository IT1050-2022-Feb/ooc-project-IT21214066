//created by IT21215292
#include "Customer.h"
class Apartment{
   protected:
char ApartmentID[5];
char Apartmentname[20];
double Apartmentprice;
char Apartmentdescription[20];
Customer* C1;
public:
Apartment();
void editApartmentDetails(const char name[]);
void removeApartment();
void viewApartment();
~Apartment();
};

