//created by IT21212840


#include "Feedback.h"
class Guest
{
	protected:
		char GuestID[5];
		char GuestFName[20];
		char GuestLName[20];
		char GuestEmail[50];
		char GuestPassword[10];
	public:
		Guest();
		Guest(char id, const char fname[], const char lname[], const char email[], const char password[]);
		
		void DisplayGuest();
		~Guest();
			
};