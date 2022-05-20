//created by IT21212604

class Payment {
private:

char paymentID[5];
char paymentdescription[50];
double Amount;
char paymentType[20];
public:
Payment();
Payment(const char ID[], const char description[], double amount, char type[] );
void displaypaymentDetails();
~Payment();
};